s32 func_002E4F00(s32, s32 *, s32, s32, s32);
s32 func_002E4E48(s32, s32, void *, s32, s32);
s32 func_002E5040(s32, s32, void *, s32);

s32 func_002E5278(s32 sock, s32 *p, s32 flags, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 opt)
{
    s32 r;
    p[0] = flags;
    p[1] = a4;
    p[2] = a6;
    p[3] = a7;
    r = func_002E4F00(sock, p, 4, a5, 0x10);
    if (r < 0) return r;
    p[8] = 0;
    if (flags & 0x80) p[8] = opt;
    if (func_002E4E48(sock, 0x12, p, 0x24, a4 + 0x20) < 0) return -0x21E;
    r = func_002E5040(sock, a3, p, 8);
    if (r >= 0) r = p[0];
    return r;
}
