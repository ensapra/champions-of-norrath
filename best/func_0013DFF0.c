extern s32 D_010CFC58[];
extern s32 D_010CFC5C[];
extern s32 D_010CFC68[];
extern s32 D_010CFC6C[];
extern s32 D_010CFC70[];
extern u8 D_010CFC78[];
extern s32 D_001C6828[];
s32 func_001404D0(void *);
s32 func_00141078(s32);
void func_001407E8(s32, s32, void *, s32);
void func_00140868(s32, s32, s32, s32, s32);
s32 func_0013E0E0(void *);

s32 func_0013DFF0(void *arg0)
{
    s32 p;
    if (func_001404D0(arg0) != 0) {
        return 0;
    }
    if (func_00141078(D_010CFC5C[0]) >= 0) {
        return 0;
    }
    switch (D_010CFC70[0]) {
    case 1:
        func_001407E8(D_010CFC58[0], 0, D_010CFC78, D_010CFC68[0]);
        break;
    case 2:
        p = D_001C6828[0] + D_010CFC6C[0] * 0x20C + 0x10C;
        func_00140868(D_010CFC58[0], 0, p, p, D_010CFC68[0]);
        break;
    }
    *(s32 (**)(void *))((u8 *)arg0 + 0x18) = func_0013E0E0;
    return 0;
}
