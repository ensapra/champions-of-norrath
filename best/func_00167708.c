typedef struct { u8 b0; u8 b1; u8 b2; u8 b3; u8 b4; u8 b5; u8 b6; u8 b7; u8 pad[8]; u8 b10; u8 b11; u8 pad2[14]; } E167708;
extern s8 D_00484060;
extern s8 D_00484058[8];
extern s8 D_00486928[8];
extern E167708 D_006E1CC0[];
extern s8 D_00484660[2];
extern s8 D_00486F28[8];
s32 func_002D3A60(s32, s32, void *);
void func_002D40E0(s32, s32, s32, s32);
void func_002D4258(s32, s32, void *);
s32 func_002D4498(s32, s32);
void func_002D44F8(s32, s32);
void func_003021B0(void *, s32, s32);

s32 func_00167708(s32 arg0, u8 *arg1) {
    s32 a, b, n;
    s8 *flag;
    u8 t;
    E167708 *e;
    if (arg0 < D_00484060) { b = 0; a = arg0; } else { a = arg0 - D_00484060; b = 1; }
    n = 0;
    if (a < D_00484660[b]) n = func_002D3A60(b, a, &D_006E1CC0[arg0]);
    func_003021B0(arg1, 0, 8);
    arg1[3] = 0x80; arg1[4] = 0x80; arg1[5] = 0x80; arg1[2] = 0x80;
    if (n > 0) {
        t = D_006E1CC0[arg0].b1;
        if ((t & 0xF0) != 0x70) {
            func_002D40E0(b, a, 1, 3);
            D_00486F28[arg0] = 1;
            return 0;
        }
        flag = &D_00486928[arg0];
        if (*flag) {
            func_002D4258(b, a, D_00484058);
            *flag = 0;
            return 0;
        }
        if (t != 0x79 && func_002D4498(b, a) == 1) {
            func_002D44F8(b, a);
            return 0;
        }
        e = &D_006E1CC0[arg0];
        *(s16 *)arg1 = ~(e->b3 | (e->b2 << 8));
        arg1[4] = e->b4; arg1[5] = e->b5; arg1[2] = e->b6; arg1[3] = e->b7;
        arg1[6] = e->b10; arg1[7] = e->b11;
        return 1;
    }
    return 0;
}
