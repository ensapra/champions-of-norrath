extern s32 func_0011B9A8(s32);extern void func_001A1568(char*,s32,char*);extern char D_00508021[];extern char D_004CBD30[];extern char D_004CBD40[];
void func_001706A8(s32 *out, u8 *data, s32 n) {
    s32 size = func_0011B9A8((((u32)n * 2 + 15) >> 4) << 4);
    u16 pos;
    u8 *p;
    *out = size;
    if (size == 0) func_001A1568(D_004CBD30, 0x503, D_00508021 + 0x3FF);
    pos = 2;
    p = data + pos;
    if (*p != 0xFF) {
    loop:
        if (!(*p < n)) func_001A1568(D_004CBD30, 0x507, D_004CBD40);
        *(u16 *)(size + data[pos] * 2) = pos;
        pos = pos + p[1] * 3 + 2;
        p = data + pos;
        if (*p != 0xFF) goto loop;
    }
}
