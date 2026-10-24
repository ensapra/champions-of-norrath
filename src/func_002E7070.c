void func_002D2B50(void *);

void func_002D3130(void *p) {
    func_002D2B50(p);
    *(s32 *)((char *)p + 0x20) = 0;
    *(s32 *)p = (((*(s32 *)p & ~0xC) | 4) & ~1) | 0x100;
}

extern char D_0047BF30[];
extern char D_0047BF38[];
extern char D_0047BF50[];
s32 func_002DCC68(char *);
void func_002E6D70(void);
s32 func_002DC9D0(s32, s32, s32, s32 *);
s32 func_002DCBD8(s32);
s32 func_00302560(char *, ...);

s32 func_002E7070(void) {
    s32 status;
    s32 id = func_002DCC68(D_0047BF30);
    if (id < 0) {
        return 0x80000000;
    }
    func_002E6D70();
    if (func_002DC9D0(id, 0, 0, &status) < 0) {
        func_00302560(D_0047BF38);
        return 0x80000000;
    }
    if (func_002DCBD8(id) < 0) {
        func_00302560(D_0047BF50);
        return 0x80000000;
    }
    return 0;
}

extern s32 D_008EBE08;
s32 ChangeThreadPriority_2(s32, s32);

s32 func_002E70F8(s32 prio) {
    if (D_008EBE08 == 0) {
        return 0x80000000;
    }
    return ChangeThreadPriority_2(D_008EBE08, prio);
}

typedef struct {
    u8 pad0[0x30];
    s32 tid;
    s32 pad34[2];
    s32 f3C;
} S_008EBDD8;
extern S_008EBDD8 D_008EBDD8;
s32 SuspendThread_2(s32);

s32 func_002E7188(void) {
    S_008EBDD8 *s = &D_008EBDD8;
    s32 r = 0x80000000;
    if (s->tid != 0) {
        if (SuspendThread_2(s->tid) == s->tid) {
            s->f3C = 1;
            r = 0;
        } else {
            r = 0x80000000;
        }
    }
    return r;
}
