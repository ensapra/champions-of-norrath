/* identical to func_0012A800 (matched), with its names changed by decompdecomp */
extern void func_00140010(void);
extern s32 func_0011BA18(s32);
extern s32 func_001107E8(s32, void *, s32, void *, void *);
extern void func_0013FFF8(void);
extern s32 func_00106C78(s32, s32, s32);

extern char D_010D1224[];
extern char helpMessageFrame__Fv[];
extern char Write__6VIFilePCvi[];

void func_00140168(void *arg0) {
    func_00140010();
    void (*fp)(void *) = *(void (**)(void *))((char *)arg0 + 8);
    if (fp != NULL) {
        fp(*(void **)(D_010D1224 + 0x60));
    }
}

void func_0012A838(void) {
    s32 r = func_0011BA18(0x109);
    func_001107E8(r, (void *)(D_010D1224 + 0x70), 3,
                  (void *)(D_010D1224 + 0x90),
                  (void *)(D_010D1224 + 0x94));
    *(s32 *)(D_010D1224 + 0x68) = r;
}

void func_0012A648(void) {
    *(s32 *)(helpMessageFrame__Fv + 0x274) = 0;
    func_0013FFF8();
    *(s32 *)(D_010D1224 + 0x64) = 3;
}

void func_0012A440(void) {
    s32 *p = (s32 *)(Write__6VIFilePCvi + 0x18);
    s32 n = 1;
    do {
        s32 v = *p;
        p = p + 1;
        n = n - 1;
        func_00106C78(0, v, 0);
    } while (n >= 0);
}
