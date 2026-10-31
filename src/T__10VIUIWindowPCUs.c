/* identical to func_00313248 (matched), with its names changed by decompdecomp */
extern char D_00463310[];
extern char D_00463320[];
extern char D_00483EE0[];

void func_00165DC0(char *a, char *b);
s32 func_001671F8(char *a);
void func_00191830(s32 a, s32 b);

void func_00313268(void) {
    func_00165DC0(D_00463310, D_00463320);
}

s64 T__10VIUIWindowPCUs(s64 a, s64 b) {
    return b;
}

void func_00313210(s32 unused, s32 arg1) {
    s32 x = func_001671F8(D_00483EE0);
    func_00191830(arg1, x);
}

void func_003131A0(s32 *a, s32 *b) {
    s32 t = *a;
    *a = *b;
    *b = t;
}
