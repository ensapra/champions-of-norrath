typedef struct {
    s32 type;
    s64 p;
} Arg;

extern s32 D_001BB6B0[];
extern s32 D_001BB6C4[];
extern u32 D_001BAC80[];
extern u8 D_004C7358[];
extern void func_0014CBF4(s32, Arg *, s32);
extern s32 func_0011DA20(s32, s32);
extern s32 func_0013B6F0(void *, s32);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern void func_0010B6D8(s32);

void func_0010B378(s32 a, u64 *src) {
    u64 d[2];
    Arg ar;
    ar.type = 0x12;
    d[0] = src[0];
    d[1] = src[1];
    ar.p = (s32)d;
    func_0014CBF4(a, &ar, 1);
}

void func_0010B6D8(s32 n) {
    if (n < 3) {
        if (n >= 0) {
            D_001BB6B0[0] = 0;
            func_0011DA20(3, 0);
        }
    }
}

void func_0010B718(void) {
    s32 r = func_0013B6F0(D_004C7358, -1);
    if ((r == 1 && !(D_001BAC80[0] & 1)) || (r == 2 && !(D_001BAC80[0] & 2))) {
        func_00114948(2, 0x1F4, 0xFA, func_0011BA18(0x48), func_0010B6D8, D_001BB6C4[0]);
        D_001BB6B0[0] = 1;
    }
}
