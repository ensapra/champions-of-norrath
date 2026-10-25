u8 *func_00185888(u8 *dst, u8 *src)
{
    s32 started = 0;
    u8 c;
    u8 t;

    c = *src;
    t = c;
    while (t != 0) {
        if ((s8)t == ';') {
            *dst = 0;
            src++;
            while ((s8)*src++ != '\n')
                ;
            return src;
        }
        if ((s8)t == '\n') {
            *dst = 0;
            return src + 1;
        }
        if (((s8)t != ' ' && (s8)t != '\t') || started == 1) {
            *dst = c;
            dst++;
            started = 1;
        }
        src++;
        t = *src;
        c = t;
    }
    return 0;
}
