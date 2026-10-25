typedef struct { s32 v[8]; } S0010CFC8;
typedef struct { s32 pad[3]; s32 count; } SLines;
extern s32 D_010C21DC[];
extern char *D_010C21E0[];
extern s32 D_010C21E4[];
extern char *D_010C21E8[];
extern s32 D_010C21EC[];
extern SLines D_001BD8C8;
void func_0010CFC8(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0013C280(SLines *);
s32 func_001A444C(const char *);
char *func_001A4738(char *, const char *, s32);
void ovl_ntgui2_func_0013BE30(SLines *, char *);

void func_0010DBC0(void) {
    char buf[0x260];
    S0010CFC8 s;
    s32 len;
    s32 i;
    s32 start;
    s32 n;

    if (D_010C21E4[0] == 0) return;
    if (D_010C21DC[0] != 0) return;
    if (func_001A444C(D_010C21E8[0]) == 0) return;
    if (--D_010C21EC[0] > 0) return;
    D_010C21EC[0] = 0;
    start = 0;
    D_010C21DC[0] = D_010C21E4[0];
    i = 0;
    D_010C21E0[0] = D_010C21E8[0];
    len = func_001A444C(D_010C21E8[0]);
    func_0013C280(&D_001BD8C8);
    for (i = 0; i < len; i++) {
        if (i == len - 1 || D_010C21E0[0][i] == '\n') {
            n = i - start;
            func_001A4738(buf, D_010C21E0[0] + start, n + 1);
            if (buf[n] == '\n') {
                buf[n] = 0;
            } else {
                buf[n + 1] = 0;
            }
            ovl_ntgui2_func_0013BE30(&D_001BD8C8, buf);
            start = i + 1;
        }
    }
    if (D_001BD8C8.count > 0) {
        func_0010CFC8(s.v[0], s.v[1], s.v[2], s.v[3], s.v[4], s.v[5], s.v[6], s.v[7]);
    }
}
