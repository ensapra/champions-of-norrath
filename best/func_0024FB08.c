extern u16 D_0042DF0C[];
extern u16 D_0042E010[];

u16 func_0024FB08(u8 c) {
    s32 b = 0, a = 0;
    if ((u8)(c - 0x20) < 0x10) a = 1;
    else if ((u8)(c - 0x30) < 10) { b = 0; a = 0; }
    else if ((u8)(c - 0x3A) < 7) a = 0xB;
    else if ((u8)(c - 0x41) < 0x1A) b = 1;
    else if ((u8)(c - 0x5B) < 6) a = 0x25;
    else if ((u8)(c - 0x61) < 0x1A) b = 2;
    else if ((u8)(c - 0x7B) < 4) a = 0x3F;
    else return 0;
    if (a) return D_0042DF0C[(c - a) * 2];
    return (D_0042E010[b * 2] + c - D_0042E010[b * 2 + 1]) & 0xFFFF;
}
