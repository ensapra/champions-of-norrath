extern s32 func_001C68DC[];
extern s32 func_001C68E0[];

void func_001488D8(void) {
    s32 *p = func_001C68DC;
    s32 t = *p;
    *p = 0;
    func_001C68E0[0] = t;
}
