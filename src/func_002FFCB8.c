typedef struct F { u8 pad[0xC]; s16 flags; s16 fd; u8 pad2[0xC]; void *self; void *f20; void *f24; void *f28; void *f2c; } F;
F *func_00300070(s32 *);
s32 func_00300238(s32 *, s32, s32 *);
s32 func_01109848(s32, s32, s32);
extern char func_00303FF8[], func_00304060[], func_003040E0[], func_00304148[];

F *func_002FFCB8(s32 *arg0, s32 arg1, s32 arg2) {
    s32 st;
    s32 fl;
    s32 m;
    F *f;
    fl = func_00300238(arg0, arg2, &st);
    if (fl == 0) return 0;
    m = func_01109848(arg1, 3, 0);
    if (m < 0) return 0;
    if ((m & 3) != 2 && (m & 3) != (st & 3)) {
        *arg0 = 9;
        return 0;
    }
    f = func_00300070(arg0);
    if (f == 0) return f;
    f->flags = fl;
    if ((st & 8) && !(m & 8))
        f->flags = fl | 0x100;
    f->fd = arg1;
    f->f20 = func_00303FF8;
    f->f24 = func_00304060;
    f->f28 = func_003040E0;
    f->f2c = func_00304148;
    f->self = f;
    return f;
}
