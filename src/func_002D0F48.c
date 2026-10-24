s32 D_00483F30;
extern u8 D_008D88B8[12];
extern u8 D_008D8938[1008];
void func_003021B0(void *, s32, s32);
void func_002CB388(void) {
    s8 *base;
    s8 *p;
    s32 i;
    if (D_00483F30 == 0) {
        base = (s8 *)D_008D8938;
        func_003021B0(base, 0, 0x3F0);
        p = base + 0x374;
        D_008D88B8[4] = 0;
        D_008D88B8[1] = 0;
        D_008D88B8[3] = 0x20;
        D_008D88B8[0] = 1;
        i = 7;
        do {
            i--;
            *p = -2;
            p -= 0x7E;
        } while (i >= 0);
    }
}

typedef struct {
    u8 pad[0x0E];
    volatile s16 f0E, f10, f12, f14, f16, f18, f1A, f1C, f1E, f20;
    u8 pad2[2];
    volatile f32 f24, f28, f2C, f30, f34;
} ObjParam;

f32 D_004830D8;
f32 D_004830DC;

void func_002C6188(ObjParam *o) {
    f32 a = D_004830D8;
    f32 b = D_004830DC;
    o->f1A = 5;
    o->f28 = a;
    o->f1C = 0x32;
    o->f2C = b;
    o->f16 = 1;
    o->f20 = 0x37;
    o->f34 = 0.0f;
    o->f0E = 1;
    o->f18 = 1;
    o->f24 = a;
    o->f10 = 1;
    o->f12 = 1;
}

extern s32 func_00165DC0(char *, char *);
extern void func_00172708(s32, s32, s32, s32, u32);
s32 D_004844A4;
s32 D_004866C0;
extern char D_0047ABE0[];
extern char D_0047ABF0[];
typedef struct { u8 pad[0xC]; s32 fC; u8 pad2[0x54]; s32 f64; } S34BEB8;
extern S34BEB8 D_0034BEB8;

s32 func_002D0CC8(void) {
    S34BEB8 *s;
    func_00172708(func_00165DC0(D_0047ABE0, D_0047ABF0), 0, 0, 3, 0x80808080);
    s = &D_0034BEB8;
    if (D_004844A4 >= 0x12D) {
        return 1;
    }
    if (s->fC | s->f64) {
        D_004866C0 = 1;
        return 1;
    }
    return 0;
}

extern s32 func_003044FC(s32, s32);
s32 func_002D0F48(s32 argc, s32 *argv, s32 key, s32 wantNext) {
    s32 i;
    for (i = 1; i < argc; i++) {
        if (func_003044FC(key, argv[i]) == 0) {
            if (wantNext) {
                if (i < argc - 1) {
                    return argv[i + 1];
                }
                return 0;
            }
            return argv[i];
        }
    }
    return 0;
}
