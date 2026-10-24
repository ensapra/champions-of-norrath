#define F(p, o) (*(s32 *)((char *)(p) + (o)))
s32 func_00170894(s32, s32, s32, s32, s32);

void func_0015E3C8(void *arg0)
{
    s32 t = F(arg0, 0xE94) & 0x0FFFFFFF;
    F(arg0, F(arg0, 0x4EC) * 0xA0 + 0xAD0) = 0x30000040;
    F(arg0, F(arg0, 0x4EC) * 0xA0 + 0xAD4) = t;
    F(arg0, F(arg0, 0x4EC) * 0xA0 + 0xAD8) = 0;
    F(arg0, F(arg0, 0x4EC) * 0xA0 + 0xADC) = func_00170894(0x50, 0, 0x40, 0, t);
}

void func_0015EA98(char *arg0)
{
    s32 i;
    s32 off = 0x5C0;
    u8 *dst = (u8 *)arg0 + F(arg0, 0x4EC) * 0x170 + 0xC30;
    for (i = 3; i >= 0; i--) {
        u8 *src = (u8 *)arg0 + off;
        off += 4;
        dst[0] = src[0];
        dst[1] = src[1];
        dst[2] = src[2];
        dst[3] = (F(arg0, 0x618) * src[3]) / 255;
        dst += 0x30;
    }
}

extern char func_001C8098[];
void func_0014CA30(s32);
void func_00171AE0(void *);

void func_0015CBD4(char *arg0)
{
    ((void (*)(void *))(*(void **)(func_001C8098 + 0xD68)))(arg0);
    if (F(arg0, 0xD08) != 0) {
        func_0014CA30(F(arg0, 0x910));
    }
    func_00171AE0(arg0 + (F(arg0, 0x4EC) ^ 1) * 0x1D0 + 0x920);
}
