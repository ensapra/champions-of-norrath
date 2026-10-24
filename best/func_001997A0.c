typedef struct { u8 pad0[0x48]; s32 r48; s32 r4c; u8 pad1[0xF0-0x50]; s32 f0; s32 f4; s32 f8; } S;
void func_00195704(s32);
void func_00195A78(s32, s32);
void func_0019A028(S *s) {
    s32 t = s->f4;
    s32 d;
    if (t == 0x11) {
        func_00195A78(0xA, 2);
    } else if (t == 0x10) {
        d = s->f8 - s->f0;
        if (d >= 0 && d >= 2 && d == 3)
            func_00195704(0);
    }
    s->r4c = 0;
    s->r48 = -1;
}

extern u8 D_004CF358[], D_004CF378[];
void func_001A1568(void *, s32, void *);
void func_0019989C(void *, u16, u16, u16);
void func_0019A3E4(void *, u16);
void func_00199814(void *s, u16 a, u16 b, u16 c, u16 d) {
    if (s == 0)
        func_001A1568(D_004CF358, 0x24A, D_004CF378);
    func_0019989C(s, a, c, d);
    func_0019A3E4(s, b);
}

typedef struct { u8 pad[0x120]; u16 t[1]; } T;
s32 func_0019ACEC(u16);
void func_001997A0(T *t, u16 a, s32 idx, u8 *out) {
    u16 v;
    u8 *b = (u8 *)&v;
    v = ((u16 *)((u8 *)t + idx * 4))[0x120 / 2] + a;
    if (func_0019ACEC(v)) {
        out[0] = 0;
    } else if (v < 0xFF) {
        out[0] = b[0];
        out[1] = 0;
    } else {
        out[1] = b[0];
        out[2] = 0;
        out[0] = b[1];
    }
}
