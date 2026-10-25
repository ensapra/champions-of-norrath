typedef struct { u8 pad[0x80]; s64 a; s64 b; } Tbl;
extern Tbl D_001BB6E0;
extern void ovl_ntgui2_func_00108E58(void *, void *, void *, s32, s32);
extern void func_0014CBF4(s32, void *, s32);

void func_00145AE0(s32 arg0, s32 *arg1)
{
    s64 v1[2];
    s64 v0[2];
    s32 buf[4];
    s32 msg[8];
    s32 pad[8];
    Tbl *t = &D_001BB6E0;
    s32 i = 0;
    u8 *p0 = (u8 *)v1 + 3;

    v0[0] = t->a;
    v0[1] = t->b;
    v1[1] = t->b;
    v1[0] = t->a;
    do {
        s32 o = i * 4;
        i++;
        p0[o] = 0x60;
        ((u8 *)v0 + 3)[o] = 0;
    } while (i < 4);
    ovl_ntgui2_func_00108E58(buf, v0, v1, arg1[7], arg1[3]);
    {
        s32 *m = msg;
        *m = 0x61;
        *(s64 *)&msg[2] = (s64)(s32)buf;
        *(s64 *)&msg[6] = (s64)(s32)buf;
        msg[4] = 0x5C;
        func_0014CBF4(arg0, m, 2);
    }
}
