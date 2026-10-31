/* identical to func_002A5F48 (matched), with its names changed by decompdecomp */
s32 message_get_connection__FP9message_t(void *arg0) {
    return *(s32 *)((char *)arg0 + 0x18);
}

void func_002A5F08(void *arg0, s32 arg1) {
    char *p = (char *)(*(s32 *)((char *)arg0 + 0x60)) + 0x80;
    void (*fn)(void *, s32, s32) = *(void (**)(void *, s32, s32))(p + 4);
    fn((char *)arg0 + *(s16 *)p, arg1, 0x13);
}

s32 func_001671F8(void *);
void func_001C7600(s32, s32, s32, s32);
extern s32 D_0040DB94;
extern char D_00478708[];

s32 func_002A5DC8(s32 arg0, void *arg1) {
    s32 idx = *(s32 *)((char *)arg1 + 0x3C0);
    if ((*(s32 *)((char *)arg1 + 0xC) & 0x40) == 0) {
        return 1;
    }
    if (*(s32 *)((char *)&D_0040DB94 + idx * 0x5DB0) != 0) {
        return 1;
    }
    {
        s32 h = func_001671F8(D_00478708);
        func_001C7600(h, 0xB4, idx, 0);
    }
    return 0;
}

f32 D_00482AB8;
f32 D_00482ABC;
f32 D_00482AC0;
f32 D_00482AC4;

void func_002A5D58(void *arg0) {
    f32 f2 = D_00482AB8;
    f32 f3 = D_00482ABC;
    f32 f4 = D_00482AC0;
    f32 f0 = D_00482AC4;
    f32 f1 = 0.25f;
    *(s16 *)((char *)arg0 + 0x18) = 0x32;
    *(f32 *)((char *)arg0 + 0x34) = f0;
    *(f32 *)((char *)arg0 + 0x24) = f2;
    *(s16 *)((char *)arg0 + 0x1A) = 0x14;
    *(f32 *)((char *)arg0 + 0x28) = f3;
    *(s16 *)((char *)arg0 + 0x1C) = 4;
    *(f32 *)((char *)arg0 + 0x2C) = f4;
    *(f32 *)((char *)arg0 + 0x30) = f1;
    *(s16 *)((char *)arg0 + 0x16) = 1;
    *(s16 *)((char *)arg0 + 0x20) = 0x10;
    *(s16 *)((char *)arg0 + 0x0E) = 1;
    *(s16 *)((char *)arg0 + 0x10) = 1;
    *(s16 *)((char *)arg0 + 0x12) = 1;
    *(s16 *)((char *)arg0 + 0x14) = 1;
    *(s16 *)((char *)arg0 + 0x1E) = 1;
}
