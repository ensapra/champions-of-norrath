extern char func_001C4B18[], func_001BCB38[], func_001C6788[], func_001B9FD8[], func_01000000[], jtbl_004C006C[];
void func_0014CBF4(s32, void *, s32);
void func_001A3D78(void *, ...);
void *func_0011BA18(s32, s64, ...);
typedef struct { s64 a, b; } P16;
typedef struct { s32 id; s32 p0; s64 a; s32 b; s32 p1; s64 c; s64 pad[4]; } Msg;

void func_0012D1B0(s32 idx) {
    Msg m;
    char buf[0x100];
    P16 t1, t2;
    s32 e = -1;
    char *q;
    s64 *args;
    *(s32 *)(func_001C4B18 + 0x30C) = idx;
    if (idx == -1) {
        m.id = 0xC6;
        m.a = (s32)(jtbl_004C006C + 0xA334);
        func_0014CBF4(*(s32 *)(func_01000000 + 0xCD394), &m, 1);
        return;
    }
    e = *(s32 *)(*(char **)(func_001BCB38 + 0xE10) + idx * 0x4C4 + 0x4C0);
    if (e != -1 && *(char **)(func_001C6788 + 0xA8) != 0) {
        char *base = *(char **)(func_001C6788 + 0xA8);
        q = func_001B9FD8 + 0x1708;
        t1 = *(P16 *)(q + 0x60);
        func_001A3D78(buf, jtbl_004C006C + 0xA3F4, base + e * 0x20C + 0x10C);
        args = &m.a;
        args[0] = (s32)&t1;
        m.id = 0xC8;
    } else {
        t2 = *(P16 *)(jtbl_004C006C + 0xA404);
        func_001A3D78(buf, func_0011BA18(0x135, t2.a));
        m.id = 0xC8;
        args = &m.a;
        args[0] = (s32)&t2;
    }
    args[2] = (s32)buf;
    m.b = 0xC6;
    func_0014CBF4(*(s32 *)(func_01000000 + 0xCD394), &m, 2);
}
