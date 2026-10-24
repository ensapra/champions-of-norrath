typedef struct { void *src; s32 dest; s32 size; s32 attr; } SifDma;
extern u8 D_008E20C0[128];
void func_002DF7B0(s32, s32);
void sceSifStopDma_2(void);
s32 sceSifGetReg_2(s32);
s32 sceSifSetReg_2(s32, s32);
s32 sceSifSetDma_2(SifDma *, s32);
void func_002D7858(void *, s32);
s32 func_002DD360(char *name, s32 arg) {
    SifDma dma;
    s32 reg, i;
    func_002DF7B0(0, 0);
    func_002DF7B0(1, 0);
    sceSifStopDma_2();
    reg = sceSifGetReg_2(0x80000000);
    *(s32 *)(D_008E20C0 + 0x14) = arg;
    i = 0;
    if (name[0] != 0) {
        do {
            D_008E20C0[0x18 + i] = name[i];
            i++;
        } while (name[i] != 0);
    }
    *(s32 *)(D_008E20C0 + 4) = 0;
    *(s32 *)(D_008E20C0 + 8) = 0x80000003;
    *(s32 *)(D_008E20C0 + 0x10) = i;
    *(u64 *)D_008E20C0 &= 0xFFFFFFFFFFFFFF00ULL;
    D_008E20C0[0] = 0x68;
    dma.src = D_008E20C0;
    dma.dest = reg;
    dma.size = 0x68;
    dma.attr = 0x44;
    func_002D7858(D_008E20C0, 0x68);
    sceSifSetReg_2(4, 0x40000);
    if (sceSifSetDma_2(&dma, 1)) {
        sceSifSetReg_2(4, 0x10000);
        sceSifSetReg_2(4, 0x20000);
        sceSifSetReg_2(0x80000002, 0);
        sceSifSetReg_2(0x80000000, 0);
        return 1;
    }
    return 0;
}
