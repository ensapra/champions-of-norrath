extern char D_0047B168[];
s32 func_002D92F8(char*,s32); s32 func_002D9938(s32,s8*,s32); s32 func_002D9580(s32); s32 func_002FF990(s8*);
s32 func_002D18F0(void) {
    s8 buf[0x100];
    s32 fd;
    u32 i;
    s8 *p;
    fd = func_002D92F8(D_0047B168, 1);
    if (fd < 0) return -1;
    i = 0;
    p = buf;
    for (; i < 0x100; i++) {
        func_002D9938(fd, p, 1);
        if (*p++ == 0) break;
    }
    func_002D9580(fd);
    return func_002FF990(buf + (i - 9)) > 0x1315670;
}
