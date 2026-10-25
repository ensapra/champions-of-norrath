extern s32 D_00486AB0;
extern char D_007CCBE0[];
typedef struct { char b[0x48]; } Ent;
typedef struct { Ent e[0x40]; s32 n; char pad[4]; } Grp;
s32 func_001084E0(void *, s32);
s32 func_00134F68(s32, void *, s32);
void func_001BBD68(s8 arg0, s32 arg1) {
    char buf[0x190];
    char *p = buf;
    Grp *g = (Grp *)D_007CCBE0;
    Ent *found = 0;
    s32 grp = 2;
    do {
        s32 i = 0;
        if (g->n > 0) {
            Ent *e = g->e;
            do {
                i++;
                if (func_001084E0(e, arg1))
                    found = e;
                e++;
            } while (i < g->n);
        }
        grp--;
        g++;
    } while (grp >= 0);
    if (found) {
        *p++ = 0;
        *p++ = arg0;
        *(s16 *)p = 0;
        p += 2;
        *(Ent **)p = found;
        p += 4;
        func_00134F68(D_00486AB0, buf, p - buf);
    }
}
