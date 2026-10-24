typedef void (*Fn)(void);
extern u8 D_004C55C8[];
extern void *D_004C3780[];
extern s32 D_004C3784[];
extern void func_001A0800(void *);
void func_0019FE38(void) {
    while (*(void **)D_004C3780[0]) {
        void **q = D_004C3780[0];
        D_004C3780[0] = q + 1;
        ((Fn)*q)();
    }
    if (D_004C3784[0] == 0) {
        D_004C3784[0] = 1;
        func_001A0800(D_004C55C8);
    }
}
