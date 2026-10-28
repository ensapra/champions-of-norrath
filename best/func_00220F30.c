typedef struct { s16 off; s16 pad; void (*fn)(void *, s32); } VE;
typedef struct { s32 ptr, flags; } E;
typedef struct {
    char p0[0x48]; char *vt; char p1[0x90-0x4C]; s32 x90; char p2[0x98-0x94]; char sub[4];
    char p3[0x9C-0x9C]; 
} H;
typedef struct {
    char p0[0x90]; s32 x90; s32 x94; s32 x98; u8 x9C; char p1[0xC8-0x9D]; s64 xC8;
    char p2[0x120-0xD0]; s32 lim; s32 pad; E e[32];
} T;
s64 func_0016C970(s32, s64);
void func_00163830(void *, s32, s32);
void func_00163BA0(void *);
void func_00220F30(char *c, s32 n) {
    T *t = (T *)c;
    s32 i, lim;
    s64 m;
    VE *v;
    if (n < t->lim) {
        *(s32 *)(c + 0x178) = n;
        *(s32 *)(c + 0x17C) = 0;
        *(s64 *)(c + 0x180) = 0;
        if (n != 0) {
            lim = n + 1;
            m = 0;
            for (i = 0; i < lim; i++) m |= 1 << i;
            *(s64 *)(c + 0x180) = m;
        }
        t->xC8 = func_0016C970(t->x90, *(s32 *)(c + 0x180));
        t->x9C = 0;
        if (t->e[*(s32 *)(c + 0x178)].ptr) {
            func_00163830(c + 0x98, t->e[*(s32 *)(c + 0x178)].ptr, (t->e[*(s32 *)(c + 0x178)].flags & 2) ? 3 : 6);
            func_00163BA0(c + 0x98);
        }
        v = (VE *)(*(char **)(c + 0x48) + 0x98);
        v->fn(c + v->off, t->e[*(s32 *)(c + 0x178)].flags & 1);
    }
}
