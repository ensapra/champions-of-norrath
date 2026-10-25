typedef struct { u8 pad[0xB80]; u8 *chars; u8 pad2[0xBF0-0xB84]; s32 cnt; } Ctx;
s32 func_00159084(Ctx *c, u8 *out) {
    s32 n = 0;
    s32 i = 0;
    s32 len;
    u32 code;
    if (c == 0) return 0;
    for (i = 0; i < c->cnt; i++, n++) {
        if (out) *out++ = c->chars[i * 36];
        code = *(u32 *)(c->chars + i * 36);
        if (code < 0x80) continue;
        if (code < 0xE0) len = 1;
        else if (code < 0xF0) len = 2;
        else len = code < 0xF8 ? 3 : 0;
        if (out) {
            do {
                *out++ = c->chars[(i + 1) * 36];
                i++;
            } while (--len);
        } else i += len;
    }
    if (out) *out = 0;
    return n;
}
