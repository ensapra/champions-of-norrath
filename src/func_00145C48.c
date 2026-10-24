extern s32 jtbl_004C006C[];
extern u8 D_0110B000[];
extern s32 D_0110B040[];
extern s32 D_0110B080[];
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, s32, s32);

s32 func_001B4B40(s32 a)
{
    if (jtbl_004C006C[0x3F48 / 4] < 0)
        return 0;
    D_0110B080[0] = a;
    if (func_001B08B0(D_0110B000, 8, 0, D_0110B080, 4, D_0110B040, 4, 0, 0) < 0)
        return -1;
    return D_0110B040[0];
}

typedef struct {
    s32 type;
    s32 pad;
    s64 v;
    u8 rest[0x30];
} Msg40;
extern s32 D_001C6878[];
extern char D_010D44D8[][4];
extern s32 D_010D44B0[];
void func_001A3D78(char *, char *, ...);
void func_0014CBF4(s32, Msg40 *, s32);

void func_00145DF0(s32 i)
{
    Msg40 m;
    char *s = D_010D44D8[i];
    func_001A3D78(s, (char *)jtbl_004C006C + 0xB0B4, D_001C6878[i]);
    m.type = 0x66;
    m.v = (s32)s;
    func_0014CBF4(D_010D44B0[i], &m, 1);
}

extern void (*D_010D44EC)(void *);
void func_00145618(void);
void func_00145C80(void)
{
    D_010D44EC(D_001C6878);
    func_00145618();
}

extern void func_0010B378(s32, void *, ...);
extern s32 D_010D44C0[];
void func_00145C48(s32 a, s64 b)
{
    func_0010B378(D_010D44C0[(s32)b], (u8 *)jtbl_004C006C + 0xB0A4);
}
