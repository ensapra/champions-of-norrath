extern char jtbl_004C006C[];
extern char func_001C6788[];
void *memcpy(void *, const void *, unsigned int);

void func_00140540(char *dst, s32 *out, s32 mode) {
    switch (mode) {
    case 1:
        *out = *(s32 *)(func_001C6788 + 0xD8);
        memcpy(dst, jtbl_004C006C + 0xAF64, 23);
        break;
    case 2:
        *out = *(s32 *)(func_001C6788 + 0xDC);
        memcpy(dst, jtbl_004C006C + 0xAF7C, 23);
        break;
    case 3:
        *out = *(s32 *)(func_001C6788 + 0xE0);
        memcpy(dst, jtbl_004C006C + 0xAF94, 25);
        break;
    }
}
