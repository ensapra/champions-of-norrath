extern char D_0034B6B1[], D_00485E70[];
s32 func_003044FC(char *, char *);
void func_002716A8(s32, s32);
void func_00277B88(s32 a) {
    if (func_003044FC(D_0034B6B1, D_00485E70) == 0) {
        func_002716A8(a, 0);
        func_002716A8(a, 1);
        func_002716A8(a, 2);
        func_002716A8(a, 3);
    }
}
typedef struct { u8 p0[0x328]; f32 f328; u8 p1[0x3D0 - 0x32C]; s32 n; s32 m; } O;
s32 func_00277CE0(O *o) {
    s32 r = 0;
    if (o->m < o->n && o->f328 == 0.0f) r = 1;
    return r;
}
s32 func_00277D18(u8 *o, s32 v) {
    s32 n = *(s32 *)(o + 0x3D0);
    s32 i = 0;
    if (n > 0) {
        s32 *p = (s32 *)(o + 0x3C0);
        do {
            if (*p++ == v) return 1;
            i++;
        } while (i < n);
    }
    return 0;
}
