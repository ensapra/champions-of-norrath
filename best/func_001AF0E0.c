extern u8 D_004C3F0C[];
extern s32 func_001B5C80(void);
extern void func_001B5CD8(void);
extern s64 func_001B8960(s64, s32);
extern s64 func_00170968(s64, s32);
extern u64 func_001B9570(u64, s32);
extern u64 func_001B8FF0(u64, s32);
extern s64 func_001714D8(s64);
extern void func_00171000(void);
extern s32 func_001AEF78(s32);

void func_001AF0E0(char *fmt, s64 *ap)
{
    s32 locked = func_001B5C80();
    while (*fmt) {
        char *pad = 0;
        s32 mod = 0;
        char buf[32];
        char *p;
        char *next;
        u64 v;
        if (*fmt != '%') {
            (*(void (**)(s32))D_004C3F0C)(*fmt);
            fmt++;
            continue;
        }
        next = fmt + 1;
        for (;;) {
            fmt = next;
            switch (*fmt - '0') {
            case 0: {
                s32 w = fmt[1] - '0';
                s32 w2 = fmt[2] - '0';
                if ((u8)w < 10) {
                    if ((u32)w2 < 10) {
                        w = w * 10 - 48 + fmt[2];
                        fmt += 2;
                        if (w >= 32) w = 31;
                    } else fmt += 1;
                    if (w > 0) {
                        pad = buf + 31 - w;
                        next = fmt + 1;
                        while (w > 0) { buf[31 - w] = '0'; w--; }
                        fmt = next;
                        next = fmt + 1;
                        continue;
                    }
                    next = fmt + 1;
                    continue;
                }
                next = next + 1;
                continue;
            }
            case 0x3C: mod = 'l'; next = fmt + 1; continue;
            case 0x38: mod = 'h'; next = fmt + 1; continue;
            case 0x4F:
                if (mod == 'l') v = *ap++;
                else if (mod == 'h') v = (u16)*ap++;
                else v = (u32)*ap++;
                p = buf + 31; buf[31] = 0;
                if (!v) { *--p = '0'; }
                else do { *--p = (v & 7) + '0'; v >>= 3; } while (v);
                next = fmt + 1;
                break;
            case 0x48:
                if (mod == 'l') v = *ap++;
                else if (mod == 'h') v = (u16)*ap++;
                else v = (u32)*ap++;
                p = buf + 31; buf[31] = 0;
                if (!v) { *--p = '0'; }
                else do { u32 d = v & 15; *--p = d < 10 ? d + '0' : d + 87; v >>= 4; } while (v);
                next = fmt + 1;
                break;
            case 0x34: {
                s64 sv;
                if (mod == 'l') sv = *ap++;
                else if (mod == 'h') sv = (s16)*ap++;
                else sv = (s32)*ap++;
                p = buf + 31; buf[31] = 0;
                if (!sv) { *--p = '0'; }
                else {
                    if (sv < 0) { sv = -sv; (*(void (**)(s32))D_004C3F0C)('-'); }
                    while (sv) {
                        *--p = func_001B8960(sv, 10) + '0';
                        sv = func_00170968(sv, 10);
                    }
                }
                next = fmt + 1;
                break;
            }
            default:
                (*(void (**)(s32))D_004C3F0C)(*fmt);
                next = fmt + 1;
                goto out;
            }
            if (pad && p > pad) p = pad;
            while (*p) (*(void (**)(s32))D_004C3F0C)(*p++);
            break;
        }
    out:
        fmt = next;
    }
    if (locked) func_001B5CD8();
}
