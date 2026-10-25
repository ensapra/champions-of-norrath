typedef struct { u8 b[8]; } Buf8;
extern s32 D_00485BE8;
extern u8 D_007F7D40[];
extern Buf8 D_007F8000[];
void func_002D16A0(u8 *);

#define BCD(x) ((((x) / 10U) << 4) | ((x) % 10U))

void func_002564C8(void) {
    s32 i;
    u8 *src = D_007F7D40;
    Buf8 *dst = D_007F8000;
    u8 buf[8];
    for (i = 0; i < D_00485BE8; i++) {
        u16 e = *(u16 *)(src + 0xE);
        u8 a = src[0xA];
        u8 c = src[0xC];
        u8 b = src[0xB];
        u8 d = src[0xD];
        u32 m;
        buf[0] = 0;
        buf[1] = 0;
        buf[2] = BCD(a);
        buf[3] = BCD(b);
        buf[5] = BCD(c);
        buf[6] = BCD(d);
        m = e % 100U;
        buf[7] = (m % 10U) | ((m / 10U) << 4);
        func_002D16A0(buf);
        dst[0] = *(Buf8 *)buf;
        e = *(u16 *)(src + 6);
        a = src[2];
        b = src[4];
        c = src[3];
        d = src[5];
        src += 0x40;
        buf[0] = 0;
        buf[1] = 0;
        buf[2] = BCD(a);
        buf[3] = BCD(c);
        buf[5] = BCD(b);
        buf[6] = BCD(d);
        m = e % 100U;
        buf[7] = (m % 10U) | ((m / 10U) << 4);
        func_002D16A0(buf);
        dst[1] = *(Buf8 *)buf;
        dst += 2;
    }
}
