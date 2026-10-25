s32 func_002E0478();
extern f32 D_00482020;
extern f32 D_00486BD4;
s64 func_0024BAA0(void) {
    s32 i = 0;
    s32 one = 1;
    f32 sc;
    func_002E0478(1, 0x8000, 0);
    func_002E0478(1, 0x8010, 0x980, 0x3FFF);
    sc = D_00482020;
    func_002E0478(1, 0x8010, 0xA80, 0x3FFF);
    func_002E0478(1, 0x8010, 0x981, (s32)(D_00486BD4 * sc));
    func_002E0478(1, 0x8010, 0xA81, (s32)(D_00486BD4 * sc));
    do {
        func_002E0478(1, 0x8010, i | 0xB80, 0);
        func_002E0478(1, 0x8010, i | 0xC80, 0);
        func_002E0478(1, 0x8010, i | 0xF80, 0);
        func_002E0478(1, 0x8010, i | 0x1080, 0);
        if (i == one) {
            func_002E0478(1, 0x8010, 0xD81, 0x7FFF);
            func_002E0478(1, 0x8010, 0xE81, 0x7FFF);
        }
        func_002E0478(1, 0x8030, i | 0x1300, 0);
        func_002E0478(1, 0x8030, i | 0x1400, 0);
    } while (++i < 2);
    func_002E0478(1, 0x8010, 0x800, 0xC00);
    return func_002E0478(1, 0x8010, 0x801, 0xC0C);
}
