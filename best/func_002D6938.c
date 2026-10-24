extern s32 func_002FBA48(f64, f64);
extern f64 func_002FB618(f64, f64);
extern f64 func_002FB680(f64, f64);
extern f64 func_002FB908(f64, f64);
extern s32 func_002F9BD8(f64);
extern s32 func_002D68A0(s32);
extern void func_002D7098(char *, ...);
extern void (*D_00444960[])(s32);
extern char D_0047B710[];
extern char D_0047B718[];
extern char D_0047B720[];

void func_002D6938(f64 x) {
    s32 e = 0;
    if (func_002FBA48(x, 0.0) < 0) {
        x = func_002FB618(0.0, x);
        D_00444960[0](0x2D);
    }
    if (func_002FBA48(x, 0.1) < 0) {
        while (func_002FBA48(x, 0.1) < 0) {
            x = func_002FB680(x, 10.0);
            e--;
        }
    } else {
        if (func_002FBA48(x, 1.0) >= 0) {
            while (func_002FBA48(x, 1.0) >= 0) {
                x = func_002FB908(x, 10.0);
                e++;
            }
        }
    }
    x = func_002FB680(x, 10000000.0);
    func_002D7098(D_0047B710, func_002D68A0(func_002F9BD8(x)));
    if (e >= 0)
        func_002D7098(D_0047B718, e);
    else
        func_002D7098(D_0047B720, e);
}
