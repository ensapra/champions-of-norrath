extern void func_001B6328(s32);
void func_001001C8(void) { func_001B6328(0); }

typedef struct { s32 v; u8 pad0[0x2C]; s32 h; u8 pad1[0x7C]; void (*cb)(s32, void *); } Ent105;
extern Ent105 D_010B6800[];
extern void func_0011AD68(s32);
extern void func_001054D8(s32);

void func_00105440(s32 i) {
    Ent105 *e = &D_010B6800[i];
    s32 *q;
    if (e->cb) e->cb(e->v, e);
    q = &e->h;
    if (*q >= 0) {
        func_0011AD68(*q);
        *q = -1;
    }
    e->v = 0;
}

void func_00105808(void) {
    s32 i;
    for (i = 0; i < 0x100; i++) {
        if (D_010B6800[i].v != 0) func_001054D8(i);
    }
}

extern s32 D_001BAC80[];
extern s32 D_001BAC84[];
void func_00105860(u32 f) {
    s32 *y = D_001BAC84;
    D_001BAC80[0] = 0;
    *y = 0;
    if (!(f & 1)) *y = 4;
    if (f & 0x10) *y |= 2;
}
