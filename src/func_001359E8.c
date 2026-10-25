typedef struct {
    s32 size;
    u16 magic;
    u8 f6;
    s8 ver;
    u16 flags;
    u16 hsize;
    s32 relocStart;
    s32 f10;
    s32 relocOff;
    s32 end;
} Hdr;

typedef struct {
    Hdr *hdr;
    void *f4;
    void *f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    s32 f28;
} Ctx;

s32 D_004839F8;
extern void func_00138300(void);
extern void func_00138360(void);
extern void func_001357C0(Ctx *);

s32 func_001359E8(Ctx *ctx, Hdr *hdr)
{
    u16 t;
    s32 flags;

    if (hdr->magic != 0xF1E0 || hdr->hsize != 0x18) {
        return 0x11;
    }
    if (hdr->ver >= 4) {
        return 0x12;
    }
    if ((u32)(hdr->end - 1) > 0x7FFFFFFD) {
        return 0x11;
    }
    flags = hdr->flags;
    if (flags & 1) {
        return 0x11;
    }
    if (flags & 4) {
        s32 base = (s32)hdr + hdr->relocStart;
        s32 n = hdr->size - hdr->relocStart;
        s32 off = hdr->relocOff - hdr->relocStart;
        u8 *p;
        u32 val;
        u32 c;
        s32 shift;
        while (n > 0) {
            val = 0;
            shift = 0;
            p = (u8 *)(n + base);
            do {
                p--;
                n--;
                c = *p;
                val |= (c & 0x7F) << shift;
                shift += 7;
            } while (n > 0 && (p[-1] & 0x80));
            if (c & 0x40) {
                for (; shift < 32; shift += 8) {
                    val |= 0xFF << shift;
                }
            }
            off -= 4;
            *(u32 *)(base + off) = val;
        }
    }
    if (ctx->f20 & 0x2000) {
        return 0;
    }
    ctx->f20 |= 0x2000;
    ctx->hdr = hdr;
    hdr->end -= 4;
    *(s32 *)((u8 *)hdr + hdr->end) = 0;
    ctx->f14 = hdr->relocOff - hdr->f10;
    ctx->f18 = ctx->f1C = hdr->end - hdr->f10;
    if (ctx->f4 == 0) {
        ctx->f4 = func_00138300;
    }
    if (ctx->f8 == 0) {
        ctx->f8 = func_00138360;
    }
    ctx->f24 = 0;
    ctx->f28 = 0;
    t = 0xFF;
    D_004839F8 = *(u8 *)&t == 0xFF;
    func_001357C0(ctx);
    return 0;
}
