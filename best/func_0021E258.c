extern s32 func_0021DF18(char **, s32);
extern s32 func_002FF990(char *);
extern s32 func_00304F60(char *, char *, s32);
extern char D_00470CB8[];
extern char D_00470CC8[];
extern char D_00485470[];
extern char D_0047E1F1[];

#define GETARG(res, a, name, len) do { \
    s32 cnt = 0; \
    char *p; \
    char **q; \
    res = 0; \
    if (a != 0) { \
        for (p = name; *p; p++) { \
            s8 c = *p; \
            *p = (D_0047E1F1[c] & 1) ? c + 0x20 : c; \
        } \
        for (q = a; *q; q++) { \
            if (func_00304F60(*q, name, len) == 0 && (*q)[len] == '=' && --cnt == -1) { \
                res = func_002FF990(*q + len + 1); \
                break; \
            } \
        } \
    } \
} while (0)

s32 func_0021E258(char **a) {
    s32 i, r;
    GETARG(r, a, D_00470CB8, 15);
    if (r) return 1;
    GETARG(r, a, D_00470CC8, 12);
    if (r) return 1;
    GETARG(r, a, D_00485470, 4);
    if (r) return 1;
    for (i = 0; i < 4; ) {
        if (func_0021DF18(a, i++)) return 1;
    }
    return 0;
}
