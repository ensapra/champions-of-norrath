extern s32 D_001BD934[];
extern s32 D_001BD938[];
s32 func_00112FE0(s32, s32, s32);
s32 func_00113178(s32, s32, s32);
s32 func_00113DD0(s32);

void func_00114750(s32 arg0) {
    s32 old = D_001BD934[0];
    s32 r;
    D_001BD938[0] = arg0;
    if (arg0 == -1) {
        func_00112FE0(0, -1, 0);
        r = func_00113DD0(old);
        if (r != 0)
            func_00113178(r, old, 0);
    } else if (old != arg0) {
        r = func_00113DD0(arg0);
        if (r != 0)
            func_00112FE0(r, arg0, 0);
        r = func_00113DD0(old);
        if (r != 0)
            func_00113178(r, old, 0);
    }
}
