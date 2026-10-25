f32 func_002655E8(s32, s32, s32);
s32 func_00266DA0();
double func_002F1640(double, double);
double func_002FB320(f32);
double func_002FB5C0(double, double);
double func_002FB618(double, double);
double func_002FB680(s32, double);
double func_002FB908(double, double);
double func_002FBA98(s32);
s32 func_002FBC20(double);

s64 func_00265F78(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    double a, b;
    s32 t, v;
    v = arg3;
    if (arg2 == -1) v = 0;
    t = func_00266DA0();
    if (t == 1) t = 2;
    b = func_002FB618(1.0, func_002FB908(2.0, func_002F1640(2.0, func_002FBA98(t - 2))));
    a = func_002FB680(v, func_002FB320(func_002655E8(arg0, arg1, arg2)));
    return func_002FBC20(func_002F1640(2.0, func_002FB5C0(a, func_002FB680(arg4, b))));
}
