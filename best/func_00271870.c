extern char D_00475FB0[], D_00475FC0[], D_00475FD8[], D_00476000[], D_00485E78[], D_00485E80[], D_00485E88[], D_00485E90[], D_00485E98[];
typedef struct { char c[5]; } S5;
typedef struct { f32 x, y, z; } V3;
extern char *func_00305328(char *, char *);
extern s32 func_00303F50(char *, char *, ...);
extern void *func_002FEC60(s32);
extern void *func_00165DC0(void *, char *);
extern s64 func_0016C970(void *, s32);

typedef struct {
    void *p0;
    void *p4;
    char pad[5];
    u8 pad0d;
    char pad2[0x102];
    s64 q110;
    char pad3[8];
    f32 f120, f124, f128;
    char pad4[4];
} Turret;

void func_00271870(char *a, char **b) {
    struct { s32 idx; f32 x, y, z; char buf[0x40]; } L;
    char *s;
    Turret *t;
    Turret **slots;

    for (; *b; b++) {
        if (func_00305328(*b, D_00475FB0)) {
            V3 *v;
            func_00303F50(*b, D_00475FC0, &L.idx, &L.x, &L.y, &L.z);
            v = (V3 *)(a + 0x780) + L.idx;
            v[1].x = L.x;
            v[1].y = L.y;
            v[1].z = L.z;
        } else if (func_00305328(*b, D_00485E78)) {
            char *base = a + 8;
            func_00303F50(*b, D_00475FD8, &L.idx, L.buf, &L.x, &L.y, &L.z);
            t = (Turret *)func_002FEC60(0x130);
            slots = (Turret **)(base + L.idx * 4 + 0x820);
            if (t) t->pad0d = 8;
            *slots = t;
            (*(Turret **)(base + L.idx * 4 + 0x820))->f120 = L.x;
            (*(Turret **)(base + L.idx * 4 + 0x820))->f128 = L.z;
            (*(Turret **)(base + L.idx * 4 + 0x820))->f124 = L.y;
            (*(Turret **)(base + L.idx * 4 + 0x820))->p0 = func_00165DC0(a + 0x4C, L.buf);
            s = func_00305328(L.buf, D_00485E80);
            *(S5 *)s = *(S5 *)D_00485E88;
            t = *(Turret **)(base + L.idx * 4 + 0x820);
            t->p4 = func_00165DC0(a + 0x4C, L.buf);
            t = *(Turret **)(base + L.idx * 4 + 0x820);
            t->q110 = func_0016C970(t->p0, 0);
        } else if (func_00305328(*b, D_00485E90)) {
            *(s32 *)(a + 0x400) = 1;
        } else if (func_00305328(*b, D_00485E98)) {
            s32 n = *(s32 *)(a + 0x878);
            char *e = a + n * 24;
            func_00303F50(*b, D_00476000, &L.idx, e + 0x87C, e + 0x880, e + 0x884, e + 0x888, e + 0x88C, e + 0x890);
            *(s32 *)(a + 0x878) = *(s32 *)(a + 0x878) + 1;
        }
    }
}
