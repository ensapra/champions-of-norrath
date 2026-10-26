typedef struct { s32 a[6]; } T6;
typedef struct { s32 a[3]; } T3;
typedef struct { s32 a[6]; s32 b[6]; } T12;
typedef struct { s32 x; u8 p4[0x4c]; s32 sel; } O;
extern T6 D_004678D8, D_00467900;
extern T3 D_004678F0;
extern T12 D_00427218;
extern char D_00466C10[];
s32 D_00483F2C, D_004844A8, D_004848E0;
extern s32 func_00165DC0(const char *, s32);
extern f32 func_0015A100(s32);
extern void func_00172708(s32, s32, s32, s32, u32);

void func_001B80A8(O *o) {
    if (D_00483F2C) {
        T6 t1 = D_004678D8;
        T3 t2 = D_004678F0;
        s32 *p = t2.a;
        s32 h, s;
        f32 f;
        h = func_00165DC0(D_00466C10, (&t1.a[3])[o->sel]);
        f = func_0015A100(D_004844A8 << 10);
        f = f * 32.0f + 132.0f;
        func_00172708(h, o->x + p[o->sel], 0x3B, 0, ((s32)f << 24) | 0x808080);
        s = func_00165DC0(D_00466C10, t1.a[o->sel]);
        func_00172708(s, o->x, 0x30, 0, 0x80808080);
        func_00172708(D_004848E0, o->x, 0, 0, 0x80808080);
    } else {
        T6 t3 = D_00467900;
        f32 f = func_0015A100(D_004844A8 << 10);
        f = f * 32.0f + 132.0f;
        func_00172708(D_00427218.b[o->sel], o->x + t3.a[o->sel], 0x3B, 0, ((s32)f << 24) | 0x808080);
        func_00172708(D_00427218.a[o->sel], o->x, 0x30, 0, 0x80808080);
    }
}
