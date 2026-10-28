extern s32 D_010D4478[], D_010D446C[], D_010D4468[], D_010D444C[];
void func_00149AE4(s32, s32);
void func_001423C0(s32 unused, s64 mode) {
    s32 t, a, limit;
    switch ((s32)mode) {
    case 0:
        t = D_010D4478[0] - 1;
        limit = D_010D446C[0] - D_010D4468[0];
        if (t < 0) t = 0;
        
        D_010D4478[0] = t;
        a = D_010D4478[0];
        if (limit < a) { D_010D4478[0] = limit; a = limit; }
        func_00149AE4(D_010D444C[0], a); return;
    case 1:
        t = D_010D4478[0] + 1;
        limit = D_010D446C[0] - D_010D4468[0];
        if (t < 0) t = 0;
        
        D_010D4478[0] = t;
        a = D_010D4478[0];
        if (limit < a) { D_010D4478[0] = limit; a = limit; }
        func_00149AE4(D_010D444C[0], a); return;
    }
}
