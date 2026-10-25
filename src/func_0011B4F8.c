extern char *D_010C4CD4[];
extern char *D_010C4CD8[];
extern char D_004C8ED0[];
s32 func_0011AE10();
s32 func_0011B700(s32);
void func_0011B840(char *, s32, s32);
void func_001A3D78(char *, char *, ...);
void func_001A3EB8(char *, char *);
void func_001A42B8(char *, char *);

s32 func_0011B4F8(s32 arg0, s32 arg1)
{
    char buf[16];
    s32 v;

    switch (D_010C4CD8[0][arg1]) {
    case 0:
        return 1;
    case 'a':
    case 'A':
        v = 0;
        break;
    case 'i':
    case 'I':
        v = 1;
        break;
    case 'u':
    case 'U':
        v = 2;
        break;
    case 'e':
    case 'E':
        v = 3;
        break;
    case 'o':
    case 'O':
        v = 4;
        break;
    default:
        return func_0011B700(arg1);
    }
    buf[0] = 0;
    func_0011B840(buf, arg0, v);
    if (buf[0] == 0) {
        func_001A3D78(D_010C4CD4[0], D_004C8ED0, D_010C4CD4[0], *D_010C4CD8[0]);
        func_001A42B8(D_010C4CD8[0], D_010C4CD8[0] + 1);
        return func_0011AE10();
    }
    func_001A3EB8(D_010C4CD4[0], buf);
    *D_010C4CD8[0] = 0;
    return 0;
}
