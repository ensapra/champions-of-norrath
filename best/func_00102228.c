extern u8 D_004C5B08[];

void func_00102228(u8 *p) {
    u8 c = D_004C5B08[0];
    p[0xE0C] = 1;
    p[0xD00] = c;
    *(s32 *)(p + 0xE08) = 600;
    p[0xE0D] = 0;
    p[0x000] = c;
    p[0x100] = c;
    p[0x200] = c;
    p[0x300] = c;
    p[0x400] = c;
    p[0x500] = c;
    p[0x600] = c;
    p[0x700] = c;
    p[0x800] = c;
    p[0x900] = c;
    p[0xA00] = c;
    p[0xB00] = c;
    p[0xC00] = c;
    *(s32 *)(p + 0xE00) = 0;
    *(s32 *)(p + 0xE04) = 1;
}
