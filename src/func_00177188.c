typedef struct { u8 b[0x40]; } Blk40;
extern s32 D_001D03C0[];
extern s32 D_001D0370[];
extern u8 D_001D03D0[];
extern Blk40 D_010EB0F0[];
s32 func_00192560(void *, void *);
s32 func_00192708(void *, void *);

s32 func_00177188(void *arg) {
    s32 *cnt = D_001D03C0;
    s32 n = *cnt - 1;
    s32 v = D_001D0370[0];
    s32 r;
    *cnt = n;
    if (v >= 0) {
        func_00192560(arg, &D_010EB0F0[n]);
        if (*cnt == 0) {
            r = func_00192708(D_001D03D0, arg);
        } else {
            r = func_00192560(D_001D03D0, arg);
        }
        return r;
    }
}
