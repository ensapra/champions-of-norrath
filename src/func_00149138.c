s32 func_0014918C(s32 *);
s32 func_00149138(s32 arg0) {
    s32 n;
    n = 0;
    goto test;
inc:
    n++;
test:
    if (func_0014918C(&arg0)) goto inc;
    return n;
}
