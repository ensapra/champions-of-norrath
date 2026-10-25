typedef struct { s32 a; s32 b; } Res;
extern s32 D_0042A418[];
extern char D_0046C6F8[], D_0046C9C0[], D_0046C9D0[], D_0046C9E0[], D_0046C9F0[], D_0046CA00[], D_0046CA10[], D_0046CA20[], D_0046CA30[], D_0046CA40[], D_0046CA58[];
s32 func_00165B30(char *);
Res *func_00166580(s32, char *);
s32 func_001C40C0(void);

s64 func_001CD2B0(void) {
    s32 h = func_00165B30(D_0046C6F8);
    D_0042A418[0x78/4] = func_00166580(h, D_0046C9C0)->b;
    D_0042A418[0x7C/4] = func_00166580(h, D_0046C9D0)->b;
    D_0042A418[0x80/4] = func_00166580(h, D_0046C9E0)->b;
    D_0042A418[0x84/4] = func_00166580(h, D_0046C9F0)->b;
    D_0042A418[0x90/4] = func_00166580(h, D_0046CA00)->b;
    D_0042A418[0x88/4] = func_00166580(h, D_0046CA10)->b;
    D_0042A418[0x8C/4] = func_00166580(h, D_0046CA20)->b;
    D_0042A418[0x94/4] = func_00166580(h, D_0046CA30)->b;
    D_0042A418[0x70/4] = func_00166580(h, D_0046CA40)->b;
    D_0042A418[0x64/4] = func_00166580(h, D_0046CA58)->b;
    return func_001C40C0();
}
