extern s32 D_010CFC58[];
extern s32 D_010CFC5C[];
extern s32 D_010CFC60[];
extern s32 D_010CFC64[];
extern s32 D_010CFC70[];
extern char D_001C5500[];
s32 func_001404D0(void);
s32 func_001404F0(void);
s32 func_00140020(void);
void func_001403B8(void);
void func_00140A10(s32);
s32 func_00141028(void *, s32, s32, s32);
void func_0013FFF8(void);
s32 func_0013DFF0(void *);

typedef struct {
    char pad[0x18];
    s32 (*fn)();
} T;

s32 func_0013DF68(T *t)
{
    s32 id;
    if (func_001404D0() != 0)
        return 0;
    id = func_001404F0();
    D_010CFC58[0] = id;
    if (id < 0) {
        D_010CFC60[0] = id;
        return 1;
    }
    D_010CFC5C[0] = func_00141028(D_001C5500, id, 0x1320, 0);
    t->fn = func_0013DFF0;
    return 0;
}

s32 func_0013DEE8(T *t) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFC64[0] > 0) {
        D_010CFC64[0]--;
        return 0;
    }
    func_001403B8();
    func_00140A10(0x1320);
    t->fn = func_0013DF68;
    return 0;
}

void func_0013DEB0(void) {
    func_0013FFF8();
    D_010CFC64[0] = 3;
    D_010CFC70[0] = 1;
}

void func_001AFE98(s32 a, s32 n) {
}
