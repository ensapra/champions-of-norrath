extern u8 D_010B4580[];
extern s32 D_001BAC64[];
extern char D_004C6178[];
extern char D_004C6190[];
extern char D_004C6198[];
s32 func_00104CA8(s32, void *);
s32 func_001B4778(s32);
s32 func_001B4900(void *, s32);
s32 func_001A2850(char *, ...);

void func_00104B60(void) {
    u8 *buf = D_010B4580;
    s32 *pid = D_001BAC64;
    s32 r;
    r = func_001B4778(func_00104CA8(0x9080, buf));
    *pid = r;
    if (r == 0) {
        func_001A2850(D_004C6178, D_004C6190);
        return;
    }
    r = func_001B4900(buf, r);
    if (r < 0) {
        func_001A2850(D_004C6198, r);
        return;
    }
}

typedef struct { u8 pad[0x24]; s32 done; } Sema;
extern Sema D_010B47C0;
s32 func_001B06E0(void *, s32, s32);

s32 func_00104C10(void) {
    Sema *s = &D_010B47C0;
    s32 i;
    do {
        if (func_001B06E0(&D_010B47C0, 0x12346, 0) < 0) {
            while (1) ;
        }
        i = 10000;
        while (i--) ;
    } while (s->done == 0);
    return 1;
}
