extern "C" {
struct V { f32 x, y, z; };
struct Q { s16 id, a, b, c; };
struct S { u8 pad[0x10]; s16 h1[4]; s16 h2[4]; s8 b20, b21; s16 pad22; Q q[4]; };
f32 D_004825B0, D_004825B4;
s32 D_004844A0, D_004844A4;
s32 func_0013EF30(void *, void *, void *, s32);
void func_00143630(void);
void func_001437E8(void *);
f32 func_00176378(s32, V *, f32);
void func_001CE218(void *, void *, s32, s32, s32, s32, void *, s32, f32, f32);
void func_001DFE98(void *, void *, s32, f32, f32);
void func_0028B540(void *);

void func_0028B0B8(char *t) {
    s32 f17 = 0, f21 = 0, f22 = 0;
    V sp10, sp20, sp30;
    void *list[64];
    S s;
    f32 *pos = (f32 *)(t + 0x10);
    f32 *vel = (f32 *)(t + 0x4C);
    f32 f5, f6;
    pos[0] += vel[0];
    pos[1] += vel[1];
    pos[2] += vel[2];
    *(f32 *)(t + 0x54) += D_004825B0;
    if (*(f32 *)(t + 0x54) < D_004825B4) {
        *(f32 *)(t + 0x54) = D_004825B4;
        f17 = *(s8 *)(t + 0x58) != 0;
    }
    func_00143630();
    *(u16 *)(t + 0x5A) += *(u16 *)(t + 0x5C);
    if (!f17) {
        sp10 = *(V *)pos;
        f5 = func_00176378(D_004844A0, &sp10, 4.0f) + *(f32 *)(t + 0x1C);
        f6 = *(f32 *)(t + 0x18);
        if (f6 <= f5) {
            f32 x = vel[0], y = vel[1], z = vel[2];
            if (x * x + y * y + z * z < 1.0f) {
                f21 = 1;
            } else {
                if (f5 - f6 > 18.0f) {
                    vel[0] = -x;
                    *(f32 *)(t + 0x50) = -*(f32 *)(t + 0x50);
                }
                *(f32 *)(t + 0x18) = f5;
                f22 = 1;
                func_0028B540(t);
                f6 = *(f32 *)(t + 0x18);
            }
        }
        if ((D_004844A4 & 7) == 0) {
            f32 r = *(f32 *)(t + 0x1C);
            f32 px = *(f32 *)(t + 0x10), py = *(f32 *)(t + 0x14);
            sp20.x = px - r;
            sp20.y = py - r;
            sp20.z = f6 - r;
            sp30.x = px + r;
            sp30.y = py + r;
            sp30.z = f6 + r;
            func_0013EF30(&sp20, &sp30, list, 0x40);
            {
                s32 i;
                for (i = 0; i < 4; i++) s.q[i].id = -1;
                s.b21 = -1;
                s.b20 = -1;
                for (i = 0; i < 4; i++) { s.h1[i] = 0; s.h2[i] = 0; }
                for (i = 0; i < 4; i++) {
                    if (s.q[i].id == -1 || s.q[i].id == 0x15) {
                        s.q[i].id = 0x15;
                        s.q[i].c = 0;
                        s.q[i].a = 1;
                        s.q[i].b = 1;
                        break;
                    }
                }
            }
            if (list[0]) {
                void **pp = list;
                char *o = (char *)*pp++;
                do {
                    if (o != t) func_001CE218(o, t, 100000, 0, 0, 0x0100C040, &s, 0, 1.0f, 1.0f);
                } while ((o = (char *)*pp++) != 0);
            }
        }
    }
    if (*(f32 *)(t + 0x18) < *(f32 *)(t + 0x60)) f21 = 1;
    if (f21) {
        func_001437E8(t);
        return;
    }
    func_001DFE98(pos, vel, 0, (f32)*(u8 *)(t + 0x28), 0.25f);
    if (f22) *(s16 *)(t + 0x5C) = *(s16 *)(t + 0x5C) / 2;
}
}
