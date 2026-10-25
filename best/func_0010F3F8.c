typedef struct { s64 a, b; } Q;
typedef struct { s32 type; union { s64 v; f32 f; } u; } E;
extern char D_004C7520[], D_001BB740[];
s32 func_00161FDC(s32, void *, void *, s32);
void func_0014B460(s32);
void func_0010FC50(s32, s32 *, s32);

s32 func_0010F3F8(s32 a0, s32 *a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, Q q7, Q q8, f32 f) {
    E e[0x40];
    s32 n, r;
    e[0].type = 8;      e[0].u.v = a1[0];
    e[1].type = 0xA;    e[1].u.v = a1[1];
    e[2].type = 0xD;    e[2].u.v = a1[2];
    e[3].type = 0xF;    e[3].u.v = a1[3];
    e[4].type = 0xD4;   e[4].u.v = 1;
    e[5].type = 0xCD;   e[5].u.v = a4;
    e[6].type = 0xCE;   e[6].u.v = 1;
    e[7].type = 0x43;   e[7].u.v = 0;
    e[8].type = 0x44;   e[8].u.v = 0;
    e[9].type = 0x45;   e[9].u.v = 0;
    e[10].type = 0x46;  e[10].u.v = 0;
    e[11].type = 0x14;  e[11].u.v = 0;
    e[12].type = 0x63;  e[12].u.v = 0;
    e[13].type = 0x5E;  e[13].u.v = 0;
    e[14].type = 0x47;  e[14].u.v = 0;
    e[15].type = 0x3B;  e[15].u.v = 0;
    e[16].type = 0x3D;  e[16].u.v = 0;
    e[17].type = 0x3F;  e[17].u.v = 0;
    e[18].type = 0x41;  e[18].u.v = 0;
    e[19].type = 0x1A;  e[19].u.v = 1;
    e[20].type = 0x11;  e[20].u.v = a3;
    e[21].type = 0x13;  e[21].u.v = 0;
    e[22].type = 0xD6;  e[22].u.v = (s32)D_004C7520;
    e[23].type = 0x61;  e[23].u.v = (s32)&q7;
    e[24].type = 0x65;  e[24].u.v = (s32)D_001BB740;
    n = 0x19;
    if (a3 == 1) {
        e[25].type = 0x5C; e[25].u.v = (s32)&q8;
        e[26].type = 0x60; e[26].u.v = (s32)D_001BB740;
        n = 0x1B;
    }
    if (a6 != 0) {
        e[n].type = 0x66;     e[n].u.v = a6;
        e[n + 1].type = 0xC7; e[n + 1].u.f = f;
        e[n + 2].type = 0xC9; e[n + 2].u.v = a5;
        n += 3;
    }
    r = func_00161FDC(a0, D_004C7520, e, n);
    func_0014B460(r);
    if (a2 == 1) func_0010FC50(a0, a1, 1);
    return r;
}
