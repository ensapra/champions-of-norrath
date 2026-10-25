s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E4F58(s32, s32, void *, s32, s32);
s32 func_002E4FB0(s32, void *, s32, s32);

s32 func_002E5118(s32 sock, s32 *p, s32 flags, s32 a3, s32 a4, s32 a5, s32 a6, ...)
{
    s32 r;
    char *ap;
    p[1] = a5;
    p[2] = a6;
    p[0] = flags;
    p[3] = 0;
    if (flags & 0x80) {
        ap = (char *)__builtin_next_arg(a6) - 8;
        p[3] = *(s32 *)ap;
    }
    r = func_002E4FB0(sock, p, 5, a4);
    if (r < 0) {
        return r;
    }
    p[4] = r;
    if (func_002E4E48(sock, 6, p, r + 0x14, 0x14) < 0) {
        return -0x21E;
    }
    r = func_002E4F58(sock, a3, p, 1, 0x10);
    if (r >= 0) {
        r = p[0];
    }
    return r;
}
