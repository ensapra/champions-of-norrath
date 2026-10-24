typedef struct { u8 pad[0x24]; s32 serve; } SifClient;
extern SifClient D_008DDB40;
extern SifClient D_008DDB68;
extern SifClient D_008DDB90;
extern SifClient D_008DDBB8;
extern SifClient D_008DDBE0;
extern char D_0047B538[];
extern char D_0047B550[];
extern char D_0047B578[];
extern void func_002D7908(s32);
extern s32 func_002D80A0(SifClient *, u32, s32);
extern void func_002D4818(char *);
extern s32 func_002D4C40(void);

s32 func_002D4840(void) {
    s32 i;
    s32 ver;
    s32 major;

    func_002D7908(0);
    while (1) {
        if (func_002D80A0(&D_008DDB40, 0x80000901, 0) < 0) {
            func_002D4818(D_0047B538);
            return 0;
        }
        if (D_008DDB40.serve != 0) break;
        i = 0x10000;
        while (i--) ;
    }
    while (1) {
        if (func_002D80A0(&D_008DDB68, 0x80000902, 0) < 0) {
            func_002D4818(D_0047B538);
            return 0;
        }
        if (D_008DDB68.serve != 0) break;
        i = 0x10000;
        while (i--) ;
    }
    while (1) {
        if (func_002D80A0(&D_008DDB90, 0x80000903, 0) < 0) {
            func_002D4818(D_0047B538);
            return 0;
        }
        if (D_008DDB90.serve != 0) break;
        i = 0x10000;
        while (i--) ;
    }
    while (1) {
        if (func_002D80A0(&D_008DDBB8, 0x80000904, 0) < 0) {
            func_002D4818(D_0047B538);
            return 0;
        }
        if (D_008DDBB8.serve != 0) break;
        i = 0x10000;
        while (i--) ;
    }
    while (1) {
        if (func_002D80A0(&D_008DDBE0, 0x80000905, 0) < 0) {
            func_002D4818(D_0047B538);
            return 0;
        }
        if (D_008DDBE0.serve != 0) break;
        i = 0x10000;
        while (i--) ;
    }
    ver = func_002D4C40();
    major = ver >> 8;
    if (major != 3) {
        func_002D70D0(D_0047B550);
        func_002D70D0(D_0047B578, 3, 0, major, ver & 0xFF);
        return 0;
    }
    return 1;
}
