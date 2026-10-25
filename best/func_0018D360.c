typedef struct {
    u8 pad0[0x38C];
    u8 *start;
    u8 *cur;
} Txt0018D;

s32 func_0018D360(void *arg0) {
    u8 *p = *(u8 **)((u8 *)arg0 + 0x390);
    u32 b = *p++;
    s32 c;
    s32 n;

    if (b == 0) {
        return 0;
    }
    if ((s8)b < 0) {
        if (b < 0xC0) {
            return -1;
        } else if (b < 0xE0) {
            n = 1;
            c = b & 0x1F;
        } else if (b < 0xF0) {
            n = 2;
            c = b & 0xF;
        } else if (b < 0xF8) {
            n = 3;
            c = b & 0x7;
        } else {
            return -1;
        }
        do {
            b = *p++;
            if ((b & 0xC0) != 0x80) {
                return -1;
            }
            c = (c << 6) | (b & 0x3F);
            n--;
        } while (n);
    } else {
        c = b;
    }
    *(u8 **)((u8 *)arg0 + 0x390) = p;
    return c;
}

s32 func_0018D400(void *arg0) {
    u8 *start = *(u8 **)((u8 *)arg0 + 0x38C);
    u8 *p = *(u8 **)((u8 *)arg0 + 0x390);
    if (start == p) {
        return -1;
    }
    p = p - 1;
    while (1) {
        if ((s8)*p >= 0) {
            break;
        }
        if ((u8)(*p + 0x40) >= 0x38) {
            break;
        }
        if (start == p) {
            break;
        }
        p = p - 1;
    }
    *(u8 **)((u8 *)arg0 + 0x390) = p;
    return 0;
}
