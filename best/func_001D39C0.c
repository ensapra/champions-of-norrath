extern s32 func_003044FC(char *, char *);
extern char *func_00304640(char *, char *);
extern s32 func_00304CFC(char *);
extern u8 D_0047E1F1[];
extern char D_007D35E8[];

s8 func_001D39C0(char *name) {
    char buf[256];
    u8 *p;
    char *q;

    func_00304640(buf, name);
    p = (u8 *)buf;
    if (buf[0] != 0) {
        do {
            s8 sc = *p;
            s32 d = sc;
            if (*(u8 *)((u8 *)D_0047E1F1 + sc) & 1) d = sc + 0x20;
            *p = d;
            p++;
        } while (*p != 0);
    }
    for (q = D_007D35E8; *q != 0; q = q + func_00304CFC(q) + 2) {
        if (func_003044FC(q, buf) == 0) {
            return q[func_00304CFC(q) + 1];
        }
    }
    func_00304640(q, buf);
    q[func_00304CFC(q) + 1] = 0;
    return 0;
}
