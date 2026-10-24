s32 func_001AFD10(s32, s32, s32, s32, s32, s32);
s32 func_001B05D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    return func_001AFD10(0x80000008, arg3, 0x40, 0, 0, 0) ? 0 : 0x800;
}

typedef struct { u32 cap; u32 used; } Buf;
typedef struct { u32 count; struct { s32 a; Buf *buf; } *ents; } Tbl;

s32 func_0017B6C8(void *arg0, u32 idx, u8 *src, u32 len) {
    Tbl *t;
    Buf *b;
    u32 used, end;
    u8 *dst;
    if (arg0 == 0) return -1;
    t = (Tbl *)(*(u8 **)((u8 *)arg0 + 4) + 8);
    if (idx >= t->count) return -1;
    b = t->ents[idx].buf;
    used = b->used;
    end = used + len;
    if (b->cap < end + 8) return -1;
    dst = (u8 *)b + (used + 8);
    b->used = end;
    len--;
    if (len != 0xFFFFFFFF) {
        do {
            *dst++ = *src++;
            len--;
        } while (len != 0xFFFFFFFF);
    }
    return 0;
}

s32 func_0017B760(void *a0, u32 a1, u32 msg) {
    s32 n;
    u32 m = msg;
    switch (m & 0xF0) {
    case 0x80: case 0xC0: case 0xD0:
        n = 2; break;
    case 0x90: case 0xA0: case 0xB0: case 0xE0:
        n = 3; break;
    default:
        return -1;
    }
    return func_0017B6C8(a0, a1, (u8 *)&m, n);
}

s32 func_0017B810(void *a0, u32 a1, u8 *msg, u32 len) {
    u8 *p = msg;
    u32 i;
    if (*p++ != 0xF0) return -1;
    i = 2;
    if (len >= i) {
        while (1) {
            if (*p++ == 0xF7) return func_0017B6C8(a0, a1, msg, i);
            i++;
            if (len < i) break;
        }
    }
    return -1;
}
