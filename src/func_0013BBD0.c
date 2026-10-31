/* identical to func_0010CC90 (matched), with its names changed by decompdecomp */
extern u8 D_010CE59C[];
extern u8 xmlListPopFront[];
extern u8 runStats__Fii[];
s32 func_001167E0(void);
void func_0010CBC8(s32, s32, s32, s32);
void func_0013C2E8(void *, s32, void *, void *);

void func_0013BBD0(void) {
    void (*fp)(void);
    fp = *(void (**)(void))(D_010CE59C + 0x40);
    if (fp != NULL) {
        fp();
    }
}

void func_0010CC58(s32 arg0) {
    *(s32 *)(D_010CE59C + 0x40) = arg0;
}

void func_0010CC08(void) {
    if (func_001167E0() == 2) {
        func_0010CBC8(*(s32 *)(xmlListPopFront + 0x24), *(s32 *)(xmlListPopFront + 0x18), *(s32 *)(xmlListPopFront + 0x1C), *(s32 *)(xmlListPopFront + 0x20));
    }
}

void func_0010CF70(void) {
    u8 *p68 = D_010CE59C + 0x68;
    u8 *p60 = D_010CE59C + 0x60;
    s32 i;
    for (i = 0; i < 2; i++) {
        *(s32 *)(p68 + i * 4) = 0;
        *(s32 *)(p60 + i * 4) = 0;
    }
    func_0013C2E8(runStats__Fii + 0xD90, i, p60, p68);
}
