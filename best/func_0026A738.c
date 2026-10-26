typedef struct { f32 x, y, z; } V3;
extern char D_00485DE8[], D_00485DF0[], D_00475BE0[], D_00475AC8[], D_00485DB8[], D_00485DC0[], D_00485D78[];
extern s32 D_00435B68[];
s32 D_00485E1C;
s32 D_00483E58;
s32 (*D_00483B00)(char *);
s32 func_00303F50(char *, char *, char *);
s32 func_00305118(char *, char *, s32);
s32 func_002686A8(char *);
s32 func_00268798(void);
s32 func_00269FC0(char *);
void func_00269B80(void *, V3 *, s32, s32, s32, s32, char *);
s32 func_00305328(char *, char *);
f32 *func_00143D38(s32, void *, s32, s32, s32);
s32 func_00304168(char *, char *);

void func_0026A738(V3 pos, s32 a1, s32 a2, s16 a3, char *s, s32 a5, s32 var16, s32 a7) {
    char buf[256];
    char buf2[256];
    char out[16];
    u8 blk[16];
    char *p, *q;
    s32 flag, depth, len, seed, c, idx, v;
    f32 *r;

    if (*s != '(') {
        func_00303F50(s, D_00485DE8, buf);
    } else {
        p = s + 1;
        func_00303F50(p, D_00485DF0, buf);
        c = *p;
        if (c != ';' && c != ')') {
            do {
                p++;
                c = *p;
            } while (c != ';' && c != ')');
        }
        if (c != ')') {
            p++;
            do {
                q = p;
                depth = 0;
                if (*q != ';') {
                    do {
                        c = *q;
                        if (c == '(') depth++;
                        if (c == ')') depth--;
                        q++;
                    } while (depth >= 0 && *q != ';');
                }
                if (!~depth) q--;
                len = q - p;
                func_00305118(buf2, p, len);
                buf2[len] = 0;
                v = func_002686A8(buf2);
                idx = D_00485E1C;
                D_00485E1C = idx + 1;
                D_00435B68[idx] = v;
                p = q;
                c = *p;
                p++;
            } while (c != ')');
        }
        var16 = func_00268798();
    }
    flag = 0;
    if (a7 == -1) {
        flag = 1;
        a7 = func_00269FC0(buf);
    }
    func_00269B80(blk, &pos, a1, a2, a3, a7, out);
    if (out[0] != 0) {
        if (a5 == 0 || (D_00483B00 != 0 && D_00483B00(buf) != 0)) {
            s32 t = func_00305328(s, buf);
            D_00483E58 = D_00483E58 * 0x19660D + 0x3C6EF35F;
            seed = D_00483E58;
            r = func_00143D38(t, blk, seed >> 16, var16, seed);
            if (r != 0 && r[7] != (f32)a7 && flag
                && func_00304168(buf, D_00475BE0) && func_00304168(buf, D_00475AC8)
                && func_00304168(buf, D_00485DB8) && func_00304168(buf, D_00485DC0))
                func_00304168(buf, D_00485D78);
        }
    }
}
