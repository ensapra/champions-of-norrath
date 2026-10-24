void func_00104360(s32 type, f32 *c) {
    switch (type) {
    default:
        c[3] = 255.0f;
        c[0] = 255.0f;
        c[1] = 255.0f;
        c[2] = 255.0f;
        break;
    case 1:
        c[3] = 255.0f;
        c[0] = 240.0f;
        c[1] = 255.0f;
        c[2] = 255.0f;
        break;
    case 2:
        c[0] = 0.0f;
        c[3] = 255.0f;
        c[1] = 0.0f;
        c[2] = 0.0f;
        break;
    case 3:
        c[3] = 255.0f;
        c[2] = 240.0f;
        c[0] = 255.0f;
        c[1] = 255.0f;
        break;
    }
}

extern char D_010B4540[];
extern char D_010B4580[];
extern s32 D_001BAC60[];
extern u32 func_001A444C(const char *);
extern char *func_001A42B8(char *, const char *);
extern void func_00104C10(void);
extern void func_00104A50(void);
extern s32 func_00104CA8(s32, s32);
extern void func_00104B60(void);
extern void func_00104600(void);

void func_00104728(char *a, char *b) {
    D_010B4580[0] = 0;
    D_010B4540[0x10] = 0;
    if (func_001A444C(a) < 0x200) {
        func_001A42B8(D_010B4580, a);
    }
    if (func_001A444C(b) < 0x30) {
        func_001A42B8(D_010B4540 + 0x10, b);
    }
    func_00104C10();
    func_00104A50();
    D_001BAC60[0] = func_00104CA8(0x8010, 0x2000);
    func_00104B60();
    func_00104600();
}

extern char D_010B4400[];
extern void func_0017B760(void *, s32, s32);

void func_001047E8(s32 a, s32 b) {
    func_0017B760(D_010B4400, 0, ((a & 0x7F) << 8) | ((b & 0x7F) << 16) | 0x90);
}
