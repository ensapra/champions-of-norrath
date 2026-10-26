typedef struct Vt {
    char p0[0x14]; s32 (*f14)(void);
    char p1[0xE0 - 0x18]; void (*fE0)(s32);
    char p2[0x118 - 0xE4]; void (*f118)(s32, s32);
    void (*f11C)(s32, u32, void *, void *, s32);
} Vt;
typedef struct { s32 w[4]; } Q;
extern Vt *D_00480488;
extern s32 D_010F64A0[];
extern Q D_010F66E0[];
extern u8 D_004CEFC8[];
extern u8 D_004CEFE0[];
extern u8 D_004CF000[];
typedef struct { u8 p[0x80]; u8 a80; u8 p81; u8 a82; } A1;

void func_00197DB4(s32 arg0, A1 *arg1, s32 arg2, s32 arg3) {
    s32 i = 0;
    s32 n;
    s32 sel;
    s32 k;
    sel = D_00480488->f14();
    n = D_010F64A0[0];
    if (n == 0) return;
    D_00480488->f118(arg0, arg2);
    if (n == 1) {
        D_00480488->f11C(arg0, (arg1->a80 << 24) | 0x808080, (u8 *)D_010F64A0 + 0x240, D_004CEFE0 + 0x18, arg2);
    } else if (n > 0) {
        s32 v = 0;
        do {
            u32 c;
            if (i != 0) v = ((i ^ (n - 1)) != 0) ? 1 : 2;
            c = (arg1->a80 << 24) | 0x808080;
            if (sel == i)
                D_00480488->f11C(arg0, c, &D_010F66E0[i], D_004CEFE0 + v * 8, arg2);
            else
                D_00480488->f11C(arg0, c, &D_010F66E0[i], D_004CEFC8 + v * 8, arg2);
            i++;
            v = 0;
        } while (i < n);
    }
    k = 0;
    D_00480488->fE0(0xA0);
    D_00480488->f118(arg0, arg3);
    if (n > 0) {
        do {
            u32 c = 0x80808080;
            if (sel == k)
                c = (((u32)(arg1->a82 * 0xFF) >> 7) << 24) | 0xFF7070;
            D_00480488->f11C(arg0, c, (u8 *)D_010F64A0 + 0x2E0 + k * 16, D_004CF000 + D_010F64A0[0x82 + k] * 8, arg3);
            k++;
        } while (k < n);
    }
}
