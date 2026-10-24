extern u8 *D_008DEA24[];
extern u8 *D_008DEA2C[];
typedef struct { s32 a; s32 b; s32 c; } E12;
void func_002D7508(s32 i) {
    if (i < 0) {
        ((E12 *)D_008DEA24[0])[i & 0x7FFFFFFF].a = 0;
    } else {
        ((E12 *)D_008DEA2C[0])[i].a = 0;
    }
}
void func_002D5C90(s32);
void RemoveDmacHandler_2(s32, s32);
extern s32 D_008DEA14[];
extern s32 D_00444964[];
void func_002D7428(void) {
    func_002D5C90(5);
    RemoveDmacHandler_2(5, D_008DEA14[0]);
    D_00444964[0] = 0;
}
extern u8 *D_008DEA18[];
void func_002D7490(s32 idx, s32 a, s32 b) {
    E12 *e;
    if (idx < 0) {
        e = &((E12 *)D_008DEA18[3])[idx & 0x7FFFFFFF];
        e->b = b;
        e->a = a;
        e->c = 0;
    } else {
        e = &((E12 *)D_008DEA18[5])[idx];
        e->b = b;
        e->a = a;
        e->c = 0;
    }
}
