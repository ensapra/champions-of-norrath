extern u8 D_00408600[];
extern char D_00466A60[];
extern char D_00466A70[];
extern char D_00466A80[];
extern char D_00466A90[];
extern char D_00466AA0[];
extern char D_00466AB0[];
extern char D_00466AC0[];
extern char D_00466AD0[];
extern char D_00466AE0[];
extern char D_00466AF0[];
extern char D_00466B00[];
extern char D_00466B10[];
extern char D_00466B20[];
extern char D_00466B30[];
extern char D_00466B40[];
extern char D_00466B50[];
extern char D_00466B60[];
f32 D_00480598;

extern s32 func_00163D58(s32, s32);
extern s32 func_00165DC0(void *, const char *);
extern void func_00160128(s32, s32, f32, s32);

void func_001B01B0(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp[13];
    s32 var_s0 = arg1;
    u8 *base = D_00408600;
    u8 *p = base + arg0 * 0x5DB0;
    s32 idx;
    const char *str2;
    f32 f20;
    s32 r1, r2;

    if (*(s32 *)(p + 0x5570) == 0) return;
    idx = *(s32 *)(p + 0x54);
    if ((u32)idx >= 10) return;

    switch (idx) {
        case 0:
            *(u64 *)(sp + 0) = *(u64 *)D_00466A60;
            *(u16 *)(sp + 8) = *(u16 *)(D_00466A60 + 8);
            sp[10] = *(u8 *)(D_00466A60 + 10);
            break;
        case 1:
            *(u64 *)(sp + 0) = *(u64 *)D_00466A70;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466A70 + 8);
            break;
        case 2:
            *(u64 *)(sp + 0) = *(u64 *)D_00466A80;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466A80 + 8);
            break;
        case 3:
            *(u64 *)(sp + 0) = *(u64 *)D_00466A90;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466A90 + 8);
            sp[12] = *(u8 *)(D_00466A90 + 12);
            break;
        case 4:
            *(u64 *)(sp + 0) = *(u64 *)D_00466AA0;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466AA0 + 8);
            sp[12] = *(u8 *)(D_00466AA0 + 12);
            break;
        case 5:
            *(u64 *)(sp + 0) = *(u64 *)D_00466AB0;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466AB0 + 8);
            sp[12] = *(u8 *)(D_00466AB0 + 12);
            break;
        case 6:
            *(u64 *)(sp + 0) = *(u64 *)D_00466AC0;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466AC0 + 8);
            sp[12] = *(u8 *)(D_00466AC0 + 12);
            break;
        case 7:
            *(u64 *)(sp + 0) = *(u64 *)D_00466AD0;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466AD0 + 8);
            break;
        case 8:
            *(u64 *)(sp + 0) = *(u64 *)D_00466AE0;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466AE0 + 8);
            sp[12] = *(u8 *)(D_00466AE0 + 12);
            break;
        case 9:
            *(u64 *)(sp + 0) = *(u64 *)D_00466AF0;
            *(u32 *)(sp + 8) = *(u32 *)(D_00466AF0 + 8);
            sp[12] = *(u8 *)(D_00466AF0 + 12);
            break;
    }

    f20 = D_00480598;
    if (arg2 != 0) f20 = 0.0f;

    {
        s32 byte = *(s8 *)(D_00408600 + arg0 * 0x5DB0 + 0x5C1E);
        if (byte == 1) str2 = D_00466B00;
        else if (byte == 2) str2 = D_00466B10;
        else if (byte == 3) str2 = D_00466B20;
        else if (byte == 4) str2 = D_00466B30;
        else if (byte == 5) str2 = D_00466B40;
        else if (byte == 7) str2 = D_00466B50;
        else str2 = D_00466B60;
    }

    r1 = func_00165DC0(sp, str2);
    r2 = func_00163D58(var_s0, r1);
    if (r2 != 0) return;
    r1 = func_00165DC0(sp, str2);
    func_00160128(var_s0, r1, f20, 0x43);
}
