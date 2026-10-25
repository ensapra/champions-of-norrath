typedef struct { char pad0[0x404]; s32 f404; char pad1[0x5BD0 - 0x408]; s32 f5bd0; s32 tab[4]; char pad2[0x5C68 - 0x5BE4]; void (*f5c68)(s32, s32); } St;
typedef struct { char pad[0x48]; s32 f48; } Obj;
extern char jtbl_004C006C[];
extern char func_001D1C80[];
extern char func_001E23F8[];
#define S ((St *)(func_001D1C80 + 0x6C0))
s32 func_001A2850(char *, s32);
s32 func_0019C00C(s32);
s32 func_00197958(void *);
s32 func_0019732C(void *);
s32 func_00181E68(s32);
s32 func_0019798C(void *, void *);
s32 func_0019BC38(s32);
void func_00182948(s8 flag) {
    s32 t;
    Obj *e;
    func_001A2850(jtbl_004C006C + 0xD88C, flag);
    func_001E23F8[0x48] = 1;
    func_0019C00C(2);
    if (flag) {
        e = (Obj *)((char *)S + 0x470 + S->f5bd0 * 0xE90);
        t = func_00197958(e);
        func_0019732C(e);
        func_00181E68(t);
        e->f48 = func_0019798C(e, e);
    }
    t = S->tab[S->f5bd0];
    func_0019BC38(t);
    if (S->f5c68) {
        if (t != 5)
            S->f5c68(5, 0);
        else
            S->f5c68(6, 0);
    }
    S->f404 = 0;
}
