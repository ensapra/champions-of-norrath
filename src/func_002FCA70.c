typedef struct { s32 v; } __attribute__((packed)) PU32;
typedef struct { char *p; s32 f4; s32 f8; s32 fC; s32 f10; } A1;
extern char D_0047DF20[], D_0047DF28[];
extern s32 func_003044FC(char *, char *);
extern s32 func_00304CFC(char *);
extern char *func_002FBD18(char *, s32 *);
extern char *func_002FBD60(char *, s32 *);
char *func_002FCA70(s32 *a0, A1 *a1) {
    char *s;
    char *e;
    s32 loc;
    a1->p = (char *)a0 - a0[1] + 0xD;
    if (func_003044FC(a1->p, D_0047DF20) != 0) {
        if (func_003044FC(a1->p, D_0047DF28) != 0) {
            if (*a1->p != 'z') return 0;
        }
    }
    e = a1->p + func_00304CFC(a1->p);
    s = e + 1;
    if (func_003044FC(a1->p, D_0047DF28) == 0) {
        a1->f4 = ((PU32 *)s)->v;
        s = e + 5;
    } else {
        a1->f4 = 0;
    }
    s = func_002FBD18(s, &a1->f8);
    s = func_002FBD60(s, &a1->fC);
    a1->f10 = *(u8 *)s;
    s++;
    if (*a1->p == 'z') {
        s = func_002FBD18(s, &loc) + loc;
    }
    return s;
}
