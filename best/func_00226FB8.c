u32 func_00153FA8(void *);

void func_00226FB8(char *o) {
    u32 r = func_00153FA8(o);
    s32 t = *(s32 *)(o + 0x45C);
    if (t == 0 || t == 4) {
        if (t == 4) {
            *(s32 *)(o + 0x3CC) = 2;
            *(s32 *)(o + 0x464) = 1;
        } else if (r & 8) {
            *(s32 *)(o + 0x3CC) = 1;
        } else if (r & 0x16) {
            *(s32 *)(o + 0x3CC) = 4;
        } else {
            *(s32 *)(o + 0x3CC) = 3;
        }
    } else if (t == 1) {
        if (r & 0x16) {
            *(s32 *)(o + 0x3CC) = 5;
        } else if (r & 0x32) {
            *(s32 *)(o + 0x3CC) = 7;
        } else {
            *(s32 *)(o + 0x3CC) = 0xE;
        }
    } else if (t == 2 || t == 3) {
        *(s32 *)(o + 0x3CC) = func_00153FA8(o) % 3 + 0xE;
    }
}
