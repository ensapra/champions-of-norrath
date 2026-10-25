void func_001A1C98(s8);
void func_001A8358(s32, s16, s16, s16, s16);
void func_001ACC20(s8, s8, s8);
void func_001AEB00(s8, s8, s32);
void func_001AEC78(s16, s32, s8);
void func_001AF3A8(s16, s32);
void func_001B0578(s8, s32, s8, s16, s16, s8, s8);
void ovl_ntgui2_func_001B1938(s8, s16);
void func_001B9FD8(s8, s32, s32, s32);
extern u8 D_00408658[];
extern u8 D_0040DB70[];
extern u8 D_0040E21E[];

#define RD(T) (p += sizeof(T), *(T *)(p - sizeof(T)))

void func_001AC6C8(s8 *p) {
    switch (RD(s8)) {
    case 0: {
        s8 a = RD(s8);
        s16 b = RD(s16);
        s32 c = RD(s32);
        s16 d = RD(s16);
        s8 e = RD(s8);
        s8 f = RD(s8);
        s8 g = RD(s8);
        func_001B0578(a, c, e, b, d, f, g);
        return;
    }
    case 1: {
        s8 e = RD(s8);
        s16 a = RD(s16);
        s32 b = RD(s32);
        func_001AEC78(a, b, e);
        return;
    }
    case 2: {
        s16 a;
        s32 b;
        p++;
        a = RD(s16);
        b = RD(s32);
        func_001AF3A8(a, b);
        return;
    }
    case 4: {
        s8 a = RD(s8);
        s8 b = RD(s8);
        s8 c = RD(s8);
        func_001ACC20(a, b, c);
        return;
    }
    case 5: {
        s8 a = RD(s8);
        s8 b = RD(s8);
        D_0040E21E[a * 0x5DB0] = b;
        func_001A1C98(a);
        return;
    }
    case 6: {
        s8 a = RD(s8);
        s16 b = RD(s16);
        ovl_ntgui2_func_001B1938(a, b);
        return;
    }
    case 7: {
        s8 a = RD(s8);
        s8 b = RD(s8);
        s32 c;
        p++;
        c = RD(s32);
        func_001AEB00(a, b, c);
        return;
    }
    case 8: {
        s8 a = RD(s8);
        s32 b, c, d;
        p += 2;
        b = RD(s32);
        c = RD(s32);
        d = RD(s32);
        func_001B9FD8(a, b, c, d);
        return;
    }
    case 9: {
        s8 a = RD(s8);
        s16 b = RD(s16);
        D_00408658[a * 0x5DB0] = b;
        return;
    }
    case 10: {
        s8 a = RD(s8);
        s16 b = RD(s16);
        s16 c = RD(s16);
        s16 d = RD(s16);
        s16 e = RD(s16);
        func_001A8358(*(s32 *)&D_0040DB70[a * 0x5DB0], b, c, d, e);
        return;
    }
    }
}
