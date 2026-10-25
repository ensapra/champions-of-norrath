s8 D_00483B11;
extern u8 D_00483B10[];
extern s32 func_00144368(s32, u8*);
extern s32 func_002FF9D8(s32, s32);
extern s32 func_003021B0(s32, s32, s32);

s32 func_00144A48(s32 arg0, s32 arg1) {
    if (D_00483B11 == 0) return func_002FF9D8(arg0, arg1);
    {
        s32 product = arg0 * arg1;
        s32 result = func_00144368(product, D_00483B10);
        func_003021B0(result, 0, product);
        return result;
    }
}
