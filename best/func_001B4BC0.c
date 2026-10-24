extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);
u32 func_001B4AD0(void) {
    if (jtbl_004C006C[0x3F48 / 4] < 0) return 0;
    if (func_001B08B0(D_0110B000, 7, 0, 0, 0, D_0110B040, 4, 0, 0) < 0) return 0xFFFFFFFF;
    return D_0110B040[0];
}
u32 func_001B4B40(s32 a) {
    if (jtbl_004C006C[0x3F48 / 4] < 0) return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 8, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0) return 0xFFFFFFFF;
    return D_0110B040[0];
}
u32 func_001B4BC0(s32 a) {
    if (jtbl_004C006C[0x3F48 / 4] < 0) return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 9, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0) return 0xFFFFFFFF;
    return D_0110B040[0];
}
typedef struct{s32 size;s32 count;u8 *rd;u8 *wr;u8 data[1];}Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if (r->wr == r->data + r->size) r->wr = r->data; }
