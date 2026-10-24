extern u8 D_008EBDD8[];
typedef struct { char pad[0x1C]; s32 st; char pad2[0x110-0x20]; } E;
s32 WaitSema_2(s32, s32);
s32 SignalSema_2(s32);
s32 func_002E73F8(s32 a) {
    u8 *g = D_008EBDD8;
    s32 n = a - 1;
    s32 r;
    if (*(s32 *)(g + 0x40) < n || n < 0) {
        r = 0x80000004;
    } else {
        E *tab = (E *)(g + 0x88);
        E *e = &tab[n];
        WaitSema_2(*(s32 *)(g + 0x2C), n);
        *(s32 *)(g + 0x58) -= 1;
        if (e->st == 4) e->st = 1;
        SignalSema_2(*(s32 *)(g + 0x2C));
        r = 0;
    }
    return r;
}
