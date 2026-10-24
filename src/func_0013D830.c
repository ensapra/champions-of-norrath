extern s32 D_010CFB3C[];
extern s32 D_010CFB40[];
extern s32 D_010CFB48[];
extern s32 D_010CFB50[];
extern s32 D_001C6830[];
extern u8 jtbl_004C006C[];
extern s32 func_00140020(void);
extern s32 func_001404D0(void);
extern void func_001403B8(void);
extern void func_00140E08(void *);
extern void func_00140900(s32, s32, s32);
s32 func_0013DA28(u8 *o);
s32 func_0013D8E8(u8 *o);

s32 func_0013D830(u8 *o) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFB3C[0] > 0) {
        D_010CFB3C[0]--;
        return 0;
    }
    func_001403B8();
    func_00140900(2, D_001C6830[0] + D_010CFB48[0] * 0x20C + 0x10C, D_010CFB40[0]);
    *(void **)(o + 0x18) = func_0013D8E8;
    return 0;
}

s32 func_0013D9A0(u8 *o) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFB3C[0] > 0) {
        D_010CFB3C[0]--;
        return 0;
    }
    func_001403B8();
    func_00140E08(D_010CFB50);
    *(void **)(o + 0x18) = func_0013DA28;
    return 0;
}

void func_0013DA98(u8 *base) {
    u8 val = jtbl_004C006C[0xAF04];
    *(s32 *)(base + 0x1300) = -1;
    base[0x1200] = val;
    base[0x0] = val;
    base[0x100] = val;
    base[0x200] = val;
    base[0x300] = val;
    base[0x400] = val;
    base[0x500] = val;
    base[0x600] = val;
    base[0x700] = val;
    base[0x800] = val;
    base[0x900] = val;
    base[0xA00] = val;
    base[0xB00] = val;
    base[0xC00] = val;
    base[0xD00] = val;
    base[0xE00] = val;
    base[0xF00] = val;
    base[0x1000] = val;
    base[0x1100] = val;
    *(s32 *)(base + 0x1304) = -1;
    *(s32 *)(base + 0x1308) = -1;
    *(s32 *)(base + 0x130C) = -1;
    base[0x1310] = -1;
    base[0x1311] = -1;
    base[0x1312] = -1;
    base[0x1313] = 0;
    base[0x1314] = 0;
    base[0x1315] = -1;
    base[0x1316] = -1;
    base[0x1317] = -1;
    base[0x1318] = -1;
    *(s32 *)(base + 0x131C) = -1;
}

extern s32 Copy_2(s32, void *, s32);
extern s32 FlushCache(s32);
extern s32 GetEntryAddress_2(s32);
extern s32 SetSyscall_3(s32, s32);
extern s32 func_001B5FE8();

void func_001B6050(void) {
    if (func_001B5FE8() != 0) {
        s32 *t = (s32 *)(jtbl_004C006C + 0x471C);
        s32 *p = t + 4;
        u32 i = 2;
        SetSyscall_3(t[0], t[1]);
        Copy_2(0x80074000, jtbl_004C006C + 0x3F74, 0x7A8);
        FlushCache(0);
        FlushCache(2);
        SetSyscall_3(t[2], t[3]);
        do {
            i++;
            SetSyscall_3(*p, GetEntryAddress_2(*p));
            p += 2;
        } while (i < 3);
    }
}
