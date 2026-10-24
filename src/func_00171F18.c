s32 Deci2Call(s32, u32 *);
extern u8 D_0110DA88[];

s32 func_001B7E98(u16 protocol, void *opt, void *handler) {
    u32 args[4];
    args[0] = protocol;
    args[1] = (u32)opt;
    args[2] = (u32)handler;
    args[3] = (u32)D_0110DA88 | 0x20000000;
    return Deci2Call(1, args);
}

typedef struct {
    s32 state;
    u8 pad4[0x14];
    s32 x;
    s32 y;
    u8 pad20[0xC];
    s32 flag;
} Ctx171;

extern u8 func_001CE218[];
s32 func_00171A70(void);

s32 func_00171F38(void) {
    Ctx171 *c = (Ctx171 *)(func_001CE218 + 0x2010);
    s32 r = 0;
    c->flag = 1;
    if (c->state == 1) {
        if (func_00171A70()) {
            r = *(s32 *)(func_001CE218 + 0x200C) == 0;
        } else {
            r = *(s32 *)(func_001CE218 + 0x200C);
        }
    }
    return r;
}

void func_00171F18(s32 *x, s32 *y) {
    Ctx171 *c = (Ctx171 *)(func_001CE218 + 0x2010);
    *x = c->x;
    *y = c->y;
}

extern s32 D_001CD180[];
extern s32 D_001CD200[];
extern s32 D_010E4590[];
s32 func_001787F8(s32, s32);

s32 func_00171E88(void) {
    s32 i;
    for (i = 0; i < D_001CD180[0]; i++) {
        func_001787F8(D_010E4590[i], 4);
    }
    return D_001CD200[0];
}
