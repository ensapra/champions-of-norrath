typedef struct {
    s32 type;
    void *p;
} Arg;

extern s32 D_001BD8BC[];
extern void func_001A2660(void *, s32, s32);
extern void func_00108E58(void *, void *, void *, s32, s32);
extern void func_0014CBF4(s32, Arg *, s32);
extern void func_0014D34C(s32, s32 *);

s32 func_0010A5B8(s32 a) {
    s32 buf[4];
    s32 r = 0;
    if (a) {
        func_0014D34C(a, buf);
        r = buf[0] == 0xFF;
    }
    return r;
}

typedef struct {
    u8 pad[0xC];
    s32 c;
    u8 pad2[0xC];
    s32 d;
} Obj;

void func_0010B1F8(s32 unused, Obj *o) {
    Arg args[2];
    u8 out[16];
    u8 a[16];
    u8 b[16];
    func_001A2660(a, 0, 16);
    func_001A2660(b, 0, 16);
    a[3] = 0x80;
    a[7] = 0x80;
    a[11] = 0x80;
    a[15] = 0x80;
    func_00108E58(out, a, b, o->d, o->c);
    args[0].type = 0x61;
    args[0].p = out;
    args[1].type = 0x5C;
    args[1].p = out;
    func_0014CBF4(D_001BD8BC[0], args, 2);
}

void func_0010B2B8(s32 unused, Obj *o) {
    Arg args[2];
    u8 out[16];
    u8 a[16];
    u8 b[16];
    func_001A2660(a, 0, 16);
    func_001A2660(b, 0, 16);
    b[3] = 0x80;
    b[7] = 0x80;
    b[11] = 0x80;
    b[15] = 0x80;
    func_00108E58(out, a, b, o->d, o->c);
    args[0].type = 0x61;
    args[0].p = out;
    args[1].type = 0x5C;
    args[1].p = out;
    func_0014CBF4(D_001BD8BC[0], args, 2);
}
