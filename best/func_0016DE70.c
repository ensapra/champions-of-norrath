typedef struct { s32 id; s64 v; } E;
s32 func_0015FC94(s32, void *, E *, s32);
s32 func_00161FDC(s32, void *, E *, s32);
s32 D_004803C0;
#define F(T, off) (*(T *)(o + (off)))
#define P32(off) ((s64)(u64)(u32)(o + (off)))
#define PS(off) ((s64)(s32)(o + (off)))
void func_0016DE70(u8 *o) {
    E e[64];
    F(s32, 0x4D0) = 2;
    F(s32, 0x920) = 0;
    if (F(s32, 0x930) > F(s32, 0x5AC)) F(s32, 0x930) = (F(s32, 0x5AC) / 10) >> 1;
    e[0].id = 9;    e[0].v = F(s32, 0x5A0);
    e[1].id = 0xB;  e[1].v = F(s32, 0x5A4);
    e[2].id = 0xE;  e[2].v = F(s32, 0x92C);
    e[3].id = 0x10; e[3].v = F(s32, 0x5B0);
    e[4].id = 0x6D; e[4].v = F(s32, 0x9C4);
    e[5].id = 0x48; e[5].v = F(s32, 0x9C0);
    e[6].id = 0x6C; e[6].v = P32(0x990);
    e[7].id = 0x39; e[7].v = P32(0x9B0);
    F(s32, 0x910) = func_0015FC94(0, o + 0x58, e, 8);
    e[0].id = 9;    e[0].v = F(s32, 0x5A0) + F(s32, 0x92C);
    e[1].id = 0xB;  e[1].v = F(s32, 0x5A4);
    e[2].id = 0xE;  e[2].v = F(s32, 0x5AC) - F(s32, 0x92C);
    e[3].id = 0x10; e[3].v = F(s32, 0x5B0);
    e[4].id = 0x6D; e[4].v = F(s32, 0x9C4);
    e[5].id = 0x48; e[5].v = F(s32, 0x9C0);
    e[6].id = 0x6C; e[6].v = PS(0x9A0);
    e[7].id = 0x39; e[7].v = PS(0x9B0);
    F(s32, 0x914) = func_0015FC94(0, o + 0x58, e, 8);
    e[0].id = 9;    e[0].v = F(s32, 0x92C) - (F(s32, 0x930) >> 1);
    e[1].id = 0xB;  e[1].v = F(s32, 0x5A4);
    e[2].id = 0xE;  e[2].v = F(s32, 0x930);
    e[3].id = 0x10; e[3].v = F(s32, 0x934);
    e[4].id = 0x61; e[4].v = PS(0x940);
    e[5].id = 0x5C; e[5].v = PS(0x940);
    e[6].id = 0x62; e[6].v = PS(0x950);
    e[7].id = 0x5D; e[7].v = PS(0x950);
    e[8].id = 0x43; e[8].v = F(s32, 0x964);
    e[9].id = 0x44; e[9].v = F(s32, 0x968);
    e[10].id = 0x45; e[10].v = F(s32, 0x96C);
    e[11].id = 0x46; e[11].v = F(s32, 0x970);
    e[12].id = 0x3C; e[12].v = F(s32, 0x974);
    e[13].id = 0x3E; e[13].v = F(s32, 0x978);
    e[14].id = 0x40; e[14].v = F(s32, 0x97C);
    e[15].id = 0x42; e[15].v = F(s32, 0x980);
    e[16].id = 0x11; e[16].v = 1;
    e[17].id = 0x48; e[17].v = F(s32, 0x938);
    e[18].id = 0x66; e[18].v = (s64)(s32)&D_004803C0;
    F(s32, 0x918) = func_00161FDC(0, o + 0x58, e, 0x13);
}
