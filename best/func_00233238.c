s64 func_0016C970(s32, s32);
typedef struct { u8 p0[0xC]; s32 xC; } Inf;
typedef struct { u8 p0[0x24]; Inf *info; u8 p1[0xF4 - 0x28]; s32 xF4; u8 p2[0x228 - 0xF8]; s64 x228; u8 p3[0x3C4 - 0x230]; s32 x3C4; } O;
void func_00233238(O *o, s32 b) {
    if (b == 0) {
        s32 v = o->info->xC;
        o->xF4 = 2;
        o->x228 = func_0016C970(v, 2);
        o->x3C4 = 1;
    }
}
