extern s32 D_00484538, D_00483E5C, D_00484CD8;
extern f32 D_0047FCA4, D_00484CAC;
extern char D_0034B6B1[], D_004614B8[], D_004614C8[], D_00461518[], D_00461568[];
extern u8 D_00408600[];
f32 func_001D1008(void);
s32 func_00305328(char *, char *);
void func_00105F60(char *, void *, s32, s32);
f32 func_001080D8(void *);
void func_001ADF38(s32, void *, s32);
void func_001A5358(s32);
s32 func_001441B8(s32);
void func_0014B9E8(void *, void *, void *, s32);
s32 func_00104440(void *, s32, s32, s32, s32);

typedef struct { u32 a, b; u32 c; } V12x;

#define TAIL(TMP) { \
    u8 *base = D_00408600; \
    f32 d = func_001080D8(buf); \
    f32 *e = (f32 *)(base + n * 0x5DB0 + 0x130); \
    if (e[1] + d < e[2]) { \
        func_001ADF38(n, buf, 1); \
        func_001A5358(n); \
    } else if (func_001441B8(0x190)) { \
        u8 *src = *(u8 **)(base + n * 0x5DB0 + 0x5570); \
        TMP = *(V12x *)(src + 0x10); \
        func_0014B9E8(src, &TMP, buf, 0); \
    } }

s32 func_00139E10(void) {
    s32 n;
    u8 buf[0x50];
    V12x tmp1, tmp2;
    s32 k, j, r, q, t;
    for (n = 0; n < D_00484538; n++) {
        for (k = 3; k >= 0; k--) ((s16 *)(buf + 4))[k * 4 + 0] = -1;
        buf[0x20] = -1;
        buf[0x21] = -1;
        for (j = 0; j < 4; j++) {
            ((s16 *)(buf + 0x10))[j] = 0;
            ((s16 *)(buf + 0x18))[j] = 0;
        }
        D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
        r = (u32)D_00483E5C >> 16;
        q = (s32)((f32)r * func_001D1008() * D_0047FCA4);
        if (func_00305328(D_0034B6B1, D_004614B8)) {
            if (D_00484CD8 == 1) {
                func_00105F60(D_004614C8, buf, 0, 0);
                buf[0x20] = 0x12; buf[0x21] = 0x33;
            } else if (D_00484CD8 == 2) {
                func_00105F60(D_00461518, buf, 0, 0);
                buf[0x21] = 0x34; buf[0x20] = 0x33;
            } else if (D_00484CD8 == 3) {
                func_00105F60(D_00461568, buf, 0, 0);
                buf[0x20] = 0x24; buf[0x21] = 0x35;
            }
            TAIL(tmp1)
        }
        for (t = 0; t < 10; t++) {
            D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
            if (func_00104440(buf, q, (s32)D_00484CAC, -1, ((u32)D_00483E5C >> 16) & 1))
                break;
        }
        TAIL(tmp2)
    }
    return 0;
}
