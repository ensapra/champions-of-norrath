extern u8 D_004CEEC0[];
void *D_00480488;
typedef struct { u8 b[16]; } B16;
void func_0019555C(u8 *p) {
    B16 buf = *(B16 *)D_004CEEC0;
    u8 c = p[0x52];
    ((void (*)(void *, s32, s32))*(void **)((u8 *)D_00480488 + 0x20))(buf.b + ((c << 1) & 8), c & 1, 0x20);
}
