typedef struct Reent { u8 pad[0x38]; s32 __sdidinit; } Reent;
typedef struct SFile {
    u8 pad[0x54];
    Reent *_data;
} SFile;

extern u8 jtbl_004C006C[];
void func_001A9A78(Reent *);
s32 func_001A4D60(Reent *, SFile *, const char *, void *);

s32 func_001A4CE8(SFile *fp, const char *fmt, void *ap)
{
    Reent *d = fp->_data;
    if (d == 0) {
        d = *(Reent **)(jtbl_004C006C + 0x3A14);
        fp->_data = d;
    }
    if (!d->__sdidinit) {
        func_001A9A78(d);
        d = fp->_data;
    }
    return func_001A4D60(d, fp, fmt, ap);
}

typedef int u128 __attribute__((mode(TI)));

void *func_001A24AC(void *dst0, const void *src0, u32 len)
{
    u8 *dst = dst0;
    const u8 *src = src0;
    u128 *adst;
    const u128 *asrc;

    if (len >= 32 && (((u32)src | (u32)dst) & 15) == 0) {
        adst = (u128 *)dst;
        asrc = (const u128 *)src;
        do {
            *adst++ = *asrc++;
            *adst++ = *asrc++;
            len -= 32;
        } while (len >= 32);
        while (len >= 8) {
            *(u64 *)adst = *(const u64 *)asrc;
            adst = (u128 *)((u8 *)adst + 8);
            asrc = (const u128 *)((const u8 *)asrc + 8);
            len -= 8;
        }
        dst = (u8 *)adst;
        src = (const u8 *)asrc;
    }
    while (len--)
        *dst++ = *src++;
    return dst0;
}

s32 *func_001A09B0(s32 *p, u32 addr)
{
    s32 n = p[0];
    while (n != 0) {
        if (p[1] != 0 && p[2] != 0 && addr - p[2] < (u32)p[3])
            return p;
        p = (s32 *)((u8 *)p + n) + 1;
        n = *p;
    }
    return 0;
}
