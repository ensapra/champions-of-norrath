typedef struct { s16 id; char pad[6]; } Ent;
typedef struct { Ent *ents; char *name; s32 count; } Grp;
extern s32 D_004845A8, D_004845AC;
extern Grp *D_00486A70, *D_00486A74;
char *func_00304640(char *, char *);
char *func_003052D8(char *, s32);
s32 func_00304CFC(char *);
s32 func_002FF990(char *);
s32 func_003044FC(char *, char *);

Ent *func_001951D0(char *name, s32 flag) {
    char buf[80];
    char *p;
    s32 num, r, cnt, i, j;
    Grp *g;
    if (flag) {
        cnt = D_004845AC;
        g = D_00486A74;
    } else {
        cnt = D_004845A8;
        g = D_00486A70;
    }
    func_00304640(buf, name);
    if (func_003052D8(buf, '.')) {
        *func_003052D8(buf, '.') = 0;
    }
    if (buf[0] == 0) return 0;
    p = buf + func_00304CFC(buf) - 1;
    while (p > buf && *p >= '0' && *p <= '9') p--;
    p++;
    r = func_002FF990(p);
    num = -1;
    if (*p) num = r;
    *p = 0;
    for (i = 0; i < cnt; i++) {
        if (func_003044FC(buf, g[i].name) == 0) {
            for (j = 0; j < g[i].count; j++) {
                if (g[i].ents[j].id == num) return &g[i].ents[j];
            }
        }
    }
    return 0;
}
