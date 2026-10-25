typedef struct {
    char name[16];
    s32 data;
    s32 flags;
    s32 unk18[4];
} LumpEntry;

extern LumpEntry D_006CB280[];
extern s32 D_00483F8C;
extern s32 D_00483F90;
extern u8 D_00484011;
extern s32 D_00484014;
extern s32 D_00484018;
extern char D_006D86C0[];
extern char D_0037F988[];
extern char D_00463458[];
extern char D_00463470[];
extern char D_00463480[];
extern char D_00463490[];
extern char D_00484030[];

s32 func_003044FC(const char *, const char *);
s32 func_00164F00(char *, s32 *, s32 *, s32);
s32 func_00144368(s32, LumpEntry *);
void func_00165120(char *, s32, s32, s32);
void func_00304640(char *, char *);
void func_00165238(void);
void func_002D70D0(char *);

static inline s32 find_lump(char *name)
{
    s32 i;
    LumpEntry *e = D_006CB280;
    for (i = 0; i < D_00483F8C; i++, e++) {
        if (func_003044FC(D_006CB280[i].name, name) == 0) {
            if ((e->flags ^ 1) & 1) {
                break;
            }
        }
    }
    if (i < D_00483F8C) {
        return D_006CB280[i].data;
    }
    return 0;
}

s32 func_00165B30(char *name) {
    s32 r;
    s32 a;
    s32 size;

    r = find_lump(name);
    if (r != 0) {
        return r;
    }
    if (func_00164F00(name, &a, &size, 0)) {
        if (func_003044FC(name, D_00463470) == 0) {
            if (func_003044FC(D_0037F988, D_00484030) != 0) {
                D_00483F90 = 1;
            }
        }
        if (func_003044FC(name, D_00463480) == 0) {
            if (func_003044FC(D_0037F988, D_00463490) != 0) {
                D_00483F90 = 1;
            }
        }
        r = func_00144368(((size + 0x7FF) & ~0x7FF) + 0x100, &D_006CB280[D_00483F8C]);
        func_00165120(name, r, 0, 0);
        D_00484014 = r;
        D_00484018 = size;
        D_00484011 = 1;
        func_00304640(D_006D86C0, name);
        func_00165238();
        D_00483F90 = 0;
    } else {
        func_002D70D0(D_00463458);
        *(s32 *)0 = 0;
    }
    return find_lump(name);
}
