typedef struct { s32 a, b, c; u16 d; } Buf155040;
s32 func_00152C8C(s32, Buf155040 *);
void func_001A2850(char *);
extern char jtbl_004C006C[];

s32 func_00155040(char *a, s32 b) {
    Buf155040 buf;
    s32 v;
    u32 t;
    f32 s;
    if (func_00152C8C(b, &buf) == -1) {
        func_001A2850(jtbl_004C006C + 0xB4C4);
    }
    t = buf.d;
    s = *(f32 *)(a + 0x9B8);
    if (b < 128) {
        v = (s16)t + *(s32 *)(a + 0x9AC);
    } else {
        v = (s16)t;
    }
    return (s32)((f32)v * s);
}
