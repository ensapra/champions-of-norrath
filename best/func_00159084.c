typedef union { u8 b; u32 w; u8 pad[36]; } Ch;
typedef struct { u8 pad[0xB80]; Ch * volatile chars; u8 pad2[0xBF0 - 0xB84]; s32 cnt; } Ctx;
s32 func_00159084(Ctx *c, u8 *out) {
    s32 n = 0;
    s32 i;
    s32 len;
    u32 code;
    if (c == 0) return 0;
    for (i = 0; i < c->cnt; i++, n++) {
        if (out) {
            *out++ = c->chars[i].b;
        }
        code = c->chars[i].w;
        if (code < 0x80) continue;
        if (code < 0xE0) len = 1;
        else if (code < 0xF0) len = 2;
        else {
            len = 3;
            if (code >= 0xF8) len = 0;
        }
        if (out) {
            do {
                i++;
                *out++ = c->chars[i].b;
            } while (--len);
        } else {
            i += len;
        }
    }
    if (out) *out = 0;
    return n;
}
