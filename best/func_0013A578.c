extern u8 D_004F3F20[], D_004F3F70[], D_004F3FC0[];
void func_00180D78(void *, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

static inline s32 Reset(void *p, s32 mode) {
    if (mode == 1) {
        func_00180D78(p, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0);
    }
    return mode;
}

void func_0013A578(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (Reset(D_004F3F20, arg0) == 1) {
            if (Reset(D_004F3F70, arg0) == 1) {
                Reset(D_004F3FC0, arg0);
            }
        }
    }
}
