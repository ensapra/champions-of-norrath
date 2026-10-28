extern u8 D_0044E670[];
extern u8 D_00452660[];
extern u32 D_00483E5C;
extern s32 D_004844A4;
s32 func_00180260(void);

typedef struct {
    s8 f0;
    s32 f4, f8, fC;
    u32 f10;
    void *f14;
    s32 f18;
    s32 f1C;
    s32 f20;
} ObjC;

void func_002B10B8(ObjC *a, s32 arg1, s32 arg2, f32 t) {
    u32 r;
    t = t * 60.0f;
    a->f0 = 0;
    a->f14 = D_0044E670;
    a->fC = arg2;
    a->f4 = 0;
    a->f8 = 0;
    D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
    r = D_00483E5C >> 16;
    a->f18 = (f32)D_004844A4 + t;
    a->f10 = r;
    a->f14 = D_00452660;
    a->f1C = arg1;
    a->f20 = func_00180260();
}
