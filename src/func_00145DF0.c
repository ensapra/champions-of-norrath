extern s32 jtbl_004C006C[];
typedef struct {
    s32 type;
    s32 pad;
    s64 v;
    u8 rest[0x30];
} Msg40;
extern s32 D_001C6878[];
extern char D_010D44D8[][4];
extern s32 D_010D44B0[];
s32 func_001A3D78(char *, char *, ...);
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

extern void (*D_010D44EC[])(void *);
void func_00145618(void);
void func_00145C80(void)
{
    D_010D44EC[0](D_001C6878);
    func_00145618();
}
