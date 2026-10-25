extern void func_001704AC();
extern void func_00170544(s32, s32);
extern void func_00170530(s32);
extern void func_001704BC(s32, s32);
extern void func_00170568(s32, s32);
extern s32 D_0048041C;

void func_0016FF50(s32 a0, s32 n, ...)
{
    __builtin_va_list ap;
    s32 count;
    s32 type;
    s64 val;
    u8 *p;

    func_001704AC();
    func_00170544(a0, 0);
    func_00170530(a0);
    func_001704BC(a0, 0xE);
    func_00170568(a0, n);
    p = (u8 *)a0 + 0x10;
    __builtin_stdarg_start(ap, n);
    if (n > 0) {
        count = n;
        do {
            type = __builtin_va_arg(ap, s32);
            if (type & 0x80)
                type = (type & ~0x80) + D_0048041C;
            val = __builtin_va_arg(ap, s64);
            *(s32 *)(p + 8) = type;
            *(s32 *)(p + 0xC) = 0;
            *(s64 *)p = val;
            count--;
            p += 0x10;
        } while (count != 0);
    }
}
