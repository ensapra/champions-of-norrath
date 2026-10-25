f32 func_002F16D0(f32, f32);
f32 D_0047FEF8;
u32 D_00483E58;
extern s16 D_006021C8[];

void func_001581B8(void) {
    f32 v[4];
    f32 d[4];
    f32 w[4];
    s32 i;
    s32 j;
    s32 m;
    s32 n;
    s32 k;
    s32 bit;
    u32 x;
    f32 r;
    f32 sum;

    for (i = 0; i < 4; i++) {
        w[i] = func_002F16D0((f32)(1 << (3 - i)), -1.0f);
        v[0] = 0.0f;
        d[0] = 0.0f;
    }
    k = 0;
    for (n = 0; n < 256; n++) {
        x = D_00483E58;
        for (j = 0; j < 4; j++) {
            bit = 1 << j;
            if (((bit - 1) & k) == 0) {
                x = x * 0x19660D + 0x3C6EF35F;
                r = (f32)(s32)(x >> 16) * (1.0f / 65536.0f) - 0.5f;
                if (n >= 241) {
                    r = 0.0f;
                }
                d[j] = (r - v[j]) * (1.0f / bit);
            }
            v[j] += d[j];
        }
        D_00483E58 = x;
        k++;
        sum = 0.0f;
        for (m = 0; m < 4; m++) {
            sum += v[m] * w[m];
        }
        D_006021C8[n] = sum * D_0047FEF8;
    }
}
