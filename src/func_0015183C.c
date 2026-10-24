extern void *func_001521A0(s32);

void func_0015183C(void *p) {
    *(volatile s32 *)((char *)p + 0xFE4) = 0;
    *(volatile s32 *)((char *)p + 0xFD0) = 0;
    *(volatile s32 *)((char *)p + 0xFCC) = 0;
    *(volatile s32 *)((char *)p + 0xFC8) = 0;
    *(volatile s32 *)((char *)p + 0xFBC) = 0;
    *(volatile s64 *)((char *)p + 0xFC0) = 0;
    *(volatile s32 *)((char *)p + 0xFD4) = 0;
    *(volatile s32 *)((char *)p + 0xFD8) = 0;
    *(volatile s32 *)((char *)p + 0xFDC) = 0;
    *(volatile s32 *)((char *)p + 0xFE0) = 0;
}

void func_00151964(u8 *g) {
    u8 *r = func_001521A0(1);
    if (r != 0) {
        *(s32 *)(r + 0x10) = 1;
        *(s32 *)(r + 0x14) = *(s32 *)(g + 0xFD4);
        *(s32 *)(r + 0x18) = *(s32 *)(g + 0xFD8);
        *(s32 *)(r + 0x1C) = *(s32 *)(g + 0xFDC);
    }
}

void func_00151BFC(u8 *g, s32 x) {
    u8 *r = func_001521A0(0xE);
    if (r != 0) {
        *(s32 *)(r + 0x20) = x;
        *(s32 *)(r + 0x10) = 1;
        *(s32 *)(r + 0x14) = *(s32 *)(g + 0xFD4);
        *(s32 *)(r + 0x18) = *(s32 *)(g + 0xFD8);
        *(s32 *)(r + 0x1C) = *(s32 *)(g + 0xFDC);
    }
}
