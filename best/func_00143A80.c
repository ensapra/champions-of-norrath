extern u8 D_0047E1F1[];
s32 func_00304CFC(s8 *);
s32 func_00304F60(s8 *, s8 *, s32);

typedef struct Obj { char pad[0x2C]; s8 **list; } Obj;

s8 *func_00143A80(Obj *o, s8 *str, s32 n) {
    s8 *p;
    s8 *e;
    s32 len, i;

    if (o->list == 0)
        return 0;
    p = str;
    while (*p != 0) {
        u8 *t = &D_0047E1F1[(s32)*p];
        s32 c = *p;
        if (*t & 1)
            c += 0x20;
        *p++ = c;
    }
    len = func_00304CFC(str);
    for (i = 0; o->list[i] != 0; i++) {
        if (func_00304F60(o->list[i], str, len) == 0) {
            e = o->list[i] + len;
            if (*e == '=') {
                if (--n == -1)
                    return e + 1;
            }
        }
    }
    return 0;
}
