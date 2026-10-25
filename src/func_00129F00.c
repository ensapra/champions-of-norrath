extern char D_004608A0[];
extern u32 D_00483E58;
extern s8 D_00485AAC;
extern s32 D_00485C64;
extern s32 D_00485C68;
extern u8 D_004E6757[];
void func_001910C0(s32, s32, s32, s32);
void func_00191868(char *, char *);
void func_001C7600(char *, s32, s32, s32);
void func_00303EB8(char *, char *, s32, s32);

typedef struct { s32 a; s32 b; s32 c; } S129;

void func_00129F00(S129 *a, S129 *b, s32 idx)
{
    char buf[0x50];
    char msg[0xA0];
    u32 s1, s2, s3;

    if (a->a != 0 && a->c != b->c) {
        if (D_00485AAC != 0) {
            func_00303EB8(buf, D_004608A0, D_00485C64, D_00485C68);
            func_00191868(msg, buf);
            func_001C7600(msg, 0x12C, -1, 0);
            s1 = D_00483E58 * 0x19660D + 0x3C6EF35F;
            s2 = s1 * 0x19660D + 0x3C6EF35F;
            s3 = s2 * 0x19660D + 0x3C6EF35F;
            D_00483E58 = s3;
            func_001910C0((s1 >> 16) & 0xFF, (s2 >> 16) & 0xFF, (s3 >> 16) & 0xFF, 0x80);
        }
        D_004E6757[idx * 0x44E0] = 1;
    }
}
