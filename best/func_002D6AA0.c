extern int func_002DD640(void);
extern void func_002DD698(void);
extern s64 func_002F88D0(s64, s64);
extern s64 func_002F8238(s64, s64);
extern u64 func_002F94E0(u64, u64);
extern u64 func_002F8F60(u64, u64);
extern float func_002FBC20(u64);
extern double func_002FB320(float);
extern void func_002D6938(double);
extern int (*D_00444960[])(int);

void func_002D6AA0(const char *s, char *ap) {
    char buf[32];
    int lock = func_002DD640();
    const char *n;
    u64 v;
    while (*s) {
        char *pad = 0;
        int mod = 0;
        char *p;
        if (*s == '%') {
            n = s + 1;
        again:
            s = n;
        head:
            switch (*s) {
            case '0': {
                int d1 = n[1] - '0';
                int c2;
                int w;
                if ((unsigned char)d1 >= 10) goto skip;
                c2 = n[2];
                if ((unsigned)(c2 - '0') < 10) {
                    w = d1 * 10 - '0' + c2;
                    if (w > 31) w = 31;
                    s = n + 2;
                } else {
                    w = d1;
                    s = n + 1;
                }
                pad = buf + 31 - w;
                n = s + 1;
                if (w > 0) {
                    int i;
                    for (i = w; i > 0; i--) buf[31 - i] = '0';
                    s = n;
                    goto head;
                }
                goto again;
            }
            case 'l':
                mod = 'l';
            skip:
                n++;
                goto again;
            case 'h':
                mod = 'h';
                goto skip;
            case 'o':
                ap += 8;
                if (mod == 'l') v = *(u64 *)(ap - 8);
                else if (mod == 'h') v = *(u16 *)(ap - 8);
                else v = *(u32 *)(ap - 8);
                p = buf + 31;
                buf[31] = 0;
                if (v == 0) {
                    *--p = '0';
                    n++;
                } else {
                    n++;
                    do {
                        *--p = (v & 7) + '0';
                        v >>= 3;
                    } while (v);
                }
                if (pad && pad < p) p = pad;
                while (*p) D_00444960[0](*p++);
                break;
            case 'x':
                ap += 8;
                if (mod == 'l') v = *(u64 *)(ap - 8);
                else if (mod == 'h') v = *(u16 *)(ap - 8);
                else v = *(u32 *)(ap - 8);
                p = buf + 31;
                buf[31] = 0;
                if (v == 0) {
                    *--p = '0';
                    n++;
                } else {
                    n++;
                    do {
                        u64 d = v & 0xF;
                        *--p = d < 10 ? d + '0' : d + 0x57;
                        v >>= 4;
                    } while (v);
                }
                if (pad && pad < p) p = pad;
                while (*p) D_00444960[0](*p++);
                break;
            case 'd':
                ap += 8;
                if (mod == 'l') v = *(s64 *)(ap - 8);
                else if (mod == 'h') v = *(s16 *)(ap - 8);
                else v = *(s32 *)(ap - 8);
                p = buf + 31;
                buf[31] = 0;
                if (v == 0) {
                    *--p = '0';
                    n++;
                } else {
                    if ((s64)v < 0) {
                        v = -v;
                        D_00444960[0]('-');
                    }
                    n++;
                    while (v) {
                        *--p = func_002F88D0(v, 10) + '0';
                        v = func_002F8238(v, 10);
                    }
                }
                if (pad && pad < p) p = pad;
                while (*p) D_00444960[0](*p++);
                break;
            case 'u':
                ap += 8;
                if (mod == 'l') v = *(u64 *)(ap - 8);
                else if (mod == 'h') v = *(u16 *)(ap - 8);
                else v = *(u32 *)(ap - 8);
                p = buf + 31;
                buf[31] = 0;
                if (v == 0) {
                    *--p = '0';
                    n++;
                } else {
                    n++;
                    do {
                        *--p = func_002F94E0(v, 10) + '0';
                        v = func_002F8F60(v, 10);
                    } while (v);
                }
                if (pad && pad < p) p = pad;
                while (*p) D_00444960[0](*p++);
                break;
            case 'e':
            case 'f': {
                float f;
                ap += 8;
                f = func_002FBC20(*(u64 *)(ap - 8));
                if (f == 0.0f) {
                    D_00444960[0]('0');
                    n++;
                } else {
                    n++;
                    func_002D6938(func_002FB320(f));
                }
                break;
            }
            case 's': {
                char *str;
                ap += 8;
                str = *(char **)(ap - 8);
                if (*str == 0) {
                    D_00444960[0]('(');
                    n++;
                    D_00444960[0]('n');
                    D_00444960[0]('u');
                    D_00444960[0]('l');
                    D_00444960[0]('l');
                    D_00444960[0](')');
                } else {
                    n++;
                    do {
                        D_00444960[0](*str);
                        str++;
                    } while (*str);
                }
                break;
            }
            case 'c':
                ap += 8;
                v = *(char *)(ap - 8);
                n++;
                D_00444960[0]((int)v);
                break;
            default:
                n = s + 1;
                break;
            }
        } else {
            D_00444960[0](*s);
            n = s + 1;
        }
        s = n;
    }
    if (lock) func_002DD698();
}
