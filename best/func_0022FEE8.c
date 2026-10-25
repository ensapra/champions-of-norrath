typedef struct { s16 id, x, y, z; } E;
typedef struct { char p0[0x10]; s16 a10[4]; s16 a18[4]; s8 a20, a21; char p22[2]; E e[4]; } L;
s32 D_004844A4;
void func_001CE218(void *, void *, s32, s32, s32, s32, void *, s32, f32, f32);
void func_0022FEE8(char *o, char *r) {
    L l;
    s32 i, n;
    if ((*(s32 *)(r + 0xC) & 0x40) && *(s8 *)(o + 0x8A) != 2 && *(s8 *)(o + 0x8A) != 3) {
        if (D_004844A4 % 12 == 0) {
            for (i = 3; i >= 0; i--) l.e[i].id = -1;
            l.a21 = -1;
            l.a20 = -1;
            for (i = 0; i < 4; i++) { l.a10[i] = 0; l.a18[i] = 0; }
            n = 0;
            for (i = 0; ; i++) {
                s16 id = l.e[i].id;
                if (id == -1) {
                    l.e[i].id = 0x15;
                    l.e[i].z = 0; l.e[i].x = 1; l.e[i].y = 1;
                    break;
                }
                n++;
                if (id == 0x15) {
                    l.e[i].id = 0x15;
                    l.e[i].z = 0; l.e[i].x = 1; l.e[i].y = 1;
                    break;
                }
                if (n >= 4) break;
            }
            func_001CE218(r, o, 0x989680, 0, 0, 0x100C040, &l, 0, 0.0f, 0.0f);
        }
    }
}
