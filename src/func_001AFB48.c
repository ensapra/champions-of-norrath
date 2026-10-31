/* identical to func_002D7508 (matched), with its names changed by decompdecomp */
typedef struct { u8 pad[0x10]; u32 f10; s32 f14; s32 f18; } S_2D7B78;

void func_002D7B78(S_2D7B78 *o) {
    o->f18 = 0;
    o->f10 &= 0xFFFFFFFE;
}

s32 func_002D7B98(void *obj) {
    s32 *p = (s32 *)obj;
    s32 dividend = p[9];
    s32 divisor = p[6];
    s32 remainder = dividend % divisor;
    s32 ret = p[5] + (remainder << 6);
    p[9] = remainder + 1;
    return ret;
}

extern s32 D_01107D64[];
extern s32 D_01107D6C[];

void func_001AFB48(s32 i) {
    if (i < 0) {
        *(s32 *)((i & 0x7FFFFFFF) * 12 + D_01107D64[0]) = 0;
        return;
    }
    *(s32 *)(i * 12 + D_01107D6C[0]) = 0;
}
