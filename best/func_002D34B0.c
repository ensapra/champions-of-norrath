typedef struct { s8 pad[0x24]; s32 ready; } PadSif;
extern s32 D_004448F8[];
extern s32 D_004448FC[];
extern char D_0047B428[];
extern char D_0047B450[];
extern PadSif D_008DD880[2];
s32 func_002D35F0(s32);
s32 func_002D4748(void);
s32 func_002D70D0(const char *, ...);
s32 func_002D80A0(void *, u32, s32);

s32 func_002D34B0(s32 arg0)
{
    s32 i;
    s32 ver;
    s32 major;

    D_004448F8[0] = 1;
    for (;;) {
        func_002D80A0(&D_008DD880[0], 0x80000100, 0);
        if (D_008DD880[0].ready != 0) break;
        i = 0x10000;
        while (--i != -1);
    }
    for (;;) {
        func_002D80A0(&D_008DD880[1], 0x80000101, 0);
        if (D_008DD880[1].ready != 0) break;
        i = 0x10000;
        while (--i != -1);
    }
    ver = func_002D4748();
    major = ver >> 8;
    if (major != 4) {
        if (D_004448FC[0] != 0) {
            func_002D70D0(D_0047B428);
            func_002D70D0(D_0047B450, 4, 0, major, ver & 0xFF);
        }
        return 0;
    }
    return func_002D35F0(arg0);
}
