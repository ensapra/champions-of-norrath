extern f32 D_00482FF8;
extern f32 D_00482FFC;
void func_002BF1C8(void *arg0) {
    *(f32 *)((char *)arg0 + 0x4C) = 2.0f;
    *(f32 *)((char *)arg0 + 0x50) = D_00482FF8;
    *(f32 *)((char *)arg0 + 0x54) = D_00482FFC;
    *(s16 *)((char *)arg0 + 0x3C) = 1;
    *(s16 *)((char *)arg0 + 0x44) = 2;
    *(s16 *)((char *)arg0 + 0x46) = 3;
    *(s16 *)((char *)arg0 + 0xE) = 1;
    *(s16 *)((char *)arg0 + 0x18) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    *(s16 *)((char *)arg0 + 0x10) = 1;
    *(s16 *)((char *)arg0 + 0x1A) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s16 *)((char *)arg0 + 0x12) = 1;
    *(s16 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x2C) = 0;
    *(s16 *)((char *)arg0 + 0x38) = 1;
    *(s16 *)((char *)arg0 + 0x42) = 2;
    *(s16 *)((char *)arg0 + 0x3A) = 1;
}

void func_002BE3B0(void *arg0, s32 arg1) {
    void *p60;
    s16 off1;
    s16 off2;
    s32 (*fp1)(void *, s32, s32);
    s32 (*fp2)(void *, s32, s32);
    s32 r1;

    p60 = *(void **)((char *)arg0 + 0x60);
    p60 = (void *)((char *)p60 + 0x78);
    off1 = *(s16 *)p60;
    fp1 = *(s32 (**)(void *, s32, s32))((char *)p60 + 4);
    r1 = fp1((char *)arg0 + off1, arg1, 1);

    p60 = *(void **)((char *)arg0 + 0x60);
    p60 = (void *)((char *)p60 + 0x58);
    off2 = *(s16 *)p60;
    fp2 = *(s32 (**)(void *, s32, s32))((char *)p60 + 4);
    fp2((char *)arg0 + off2, 1, r1);
}

extern f32 D_00482FA4;
f32 func_002BE340(void *arg0, s32 arg1) {
    void *p60;
    s16 off1;
    s16 off2;
    s32 (*fp1)(void *, s32, s32);
    s32 (*fp2)(void *, s32, s32);
    s32 r1;
    s32 r2;
    f32 result;

    p60 = *(void **)((char *)arg0 + 0x60);
    p60 = (void *)((char *)p60 + 0x78);
    off1 = *(s16 *)p60;
    fp1 = *(s32 (**)(void *, s32, s32))((char *)p60 + 4);
    r1 = fp1((char *)arg0 + off1, arg1, 1);

    p60 = *(void **)((char *)arg0 + 0x60);
    p60 = (void *)((char *)p60 + 0x58);
    off2 = *(s16 *)p60;
    fp2 = *(s32 (**)(void *, s32, s32))((char *)p60 + 4);
    r2 = fp2((char *)arg0 + off2, 0, r1);

    result = (f32)r2 * D_00482FA4;
    return result;
}
