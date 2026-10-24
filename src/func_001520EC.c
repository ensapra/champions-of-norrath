void GetOsdConfigParam(void *); void SetOsdConfigParam(void *);
s32 func_001B5FE8(void) {
    u32 stk[2]; u32 *p;
    GetOsdConfigParam(&stk[0]);
    p = &stk[1];
    stk[1] = (stk[0] & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam(p);
    GetOsdConfigParam(p);
    SetOsdConfigParam(&stk[0]);
    return ((stk[1] >> 13) & 7) == 0;
}

typedef struct Msg152 {
    s64 x0;
    s32 x8;
    s32 xC;
    s64 x10;
    s32 x18;
    s32 x1C;
} Msg152;
extern u8 jtbl_004C006C[];
void *func_0011B9A8(s32);
void func_001AF710(void *);
Msg152 *func_001520EC(s32 a0, s64 a1, s32 a2, s64 a3, s32 a4) {
    Msg152 *m = func_0011B9A8(0x20);
    if (m == NULL) {
        func_001AF710(jtbl_004C006C + 0xB45C);
        return NULL;
    }
    m->x18 = a4;
    m->x1C = a0;
    m->x0 = a1;
    m->xC = a2;
    m->x10 = a3;
    m->x8 = 0;
    return m;
}

typedef struct Ev152 {
    s16 type;
    s16 pad2;
    s32 x4;
    s64 x8;
    s32 x10;
    s32 x14;
    s32 x18;
    s32 x1C;
    s32 x20;
} Ev152;
void func_001520D4(s32 a0, Ev152 *e, s64 a2, s32 a3, s32 a4) {
    e->type = 0x12;
    e->x8 = a2;
    e->x14 = a3;
    e->x18 = a4;
}

void func_001520B0(s32 a0, Ev152 *e, s64 a2, s32 a3, s32 a4) {
    e->type = 8;
    e->x8 = a2;
    e->x14 = a3;
    e->x18 = a4;
    e->x1C = 0;
    e->x20 = 1;
}
