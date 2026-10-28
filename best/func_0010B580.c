extern s32 func_001A43D0(char *, char *);
extern void func_001A4738(char *, char *, s32);
extern u32 func_001A1640(char *);
extern void func_001A3D78(char *, char *, ...);
extern char D_004C7340[];
extern char D_004C7348[];

s32 func_0010B580(char *str, char *out)
{
    u32 parts[4];
    char buf[256];
    s32 zeros = 0;
    s32 dots = 0;
    s32 pos = 0;
    s32 i = 0;
    u32 *p = parts;
    s32 len;
    char *ep;
    u32 v;

    do {
        len = func_001A43D0(&str[pos], D_004C7340);
        if (len == 0)
            return 1;
        func_001A4738(buf, &str[pos], len);
        buf[len] = 0;
        v = func_001A1640(buf);
        *p++ = v;
        if (v == 0)
            zeros++;
        ep = str + (pos + len);
        pos = pos + len + 1;
        if (v >= 0x100)
            return 2;
        if (*ep == '.')
            dots++;
        if (*ep == 0)
            break;
        i++;
    } while (i < 4);
    if (zeros == 4)
        return 3;
    if (dots != 3)
        return 4;
    func_001A3D78(out, D_004C7348, parts[0], parts[1], parts[2], parts[3]);
    return 0;
}
