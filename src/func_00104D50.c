s32 D_010B47E8[4];
s32 func_001AD9A0(s32);
s32 func_001ADAE0(s32, s32);
s32 func_001ADAC0(s32);

s32 func_00104D50(s32 arg0, s32 arg1, s32 arg2) {
    s32 h;

    D_010B47E8[1] = arg0;
    D_010B47E8[0] = arg1;
    D_010B47E8[2] = arg2;
    D_010B47E8[3] = 0;
    func_001AD9A0(0);
    h = func_001ADAE0((s32)D_010B47E8, 1);
    while (func_001ADAC0(h) >= 0)
        ;
    return h ? 0 : -1;
}
