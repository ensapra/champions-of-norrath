typedef struct { void *data; void *addr; u32 size; u32 mode; } SifDmaData;
extern s32 D_00362DBC;
extern u8 D_010F4610[];
extern u8 jtbl_004C006C[];
s32 sceSifDmaStat(s32);
s32 sceSifSetDma(SifDmaData *, s32);
s32 func_001AE018(void *, void *);
s32 func_001AF710(void *);
typedef struct { s32 count; } Dma;
typedef struct { u32 pad; Dma *dma; u8 *src; s32 id; } Entry;

s32 func_0018FDC8(s32 ch, s32 idx) {
    SifDmaData d;
    Entry *e = (Entry *)(D_010F4610 + idx * 0x1c + ch * 0x70);
    Dma *dma = e->dma;
    s32 n;
    u8 *dst;
    s32 ret;
    if (e->id == 0 || sceSifDmaStat(e->id) < 0) {
        n = dma->count + 1;
        dma->count = n;
        dst = e->src + ((n & 1) << 5);
        func_001AE018(dma, (u8 *)dma + 0x1f);
        d.data = dma;
        d.addr = dst;
        d.size = 0x20;
        d.mode = 0;
        ret = sceSifSetDma(&d, 1);
        if (ret != 0) {
            e->id = ret;
            return 1;
        }
    }
    if (D_00362DBC != 0)
        func_001AF710(jtbl_004C006C + 0xEAA4);
    return 0;
}
