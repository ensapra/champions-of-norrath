s32 func_002F5760(f32, f32 *);
f32 func_002F6C40(f32, f32);
f32 func_002F75F8(f32, f32, s32);

typedef union {
    f32 value;
    u32 word;
} ieee_float_shape_type;

#define GET_FLOAT_WORD(i,d) do { ieee_float_shape_type gf_u; gf_u.value = (d); (i) = gf_u.word; } while (0)

f32 func_002F1290(f32 x) {
    f32 y[2], z = 0.0f;
    s32 n, ix;

    GET_FLOAT_WORD(ix, x);

    ix &= 0x7fffffff;
    if (ix <= 0x3f490fd8) {
        return func_002F6C40(x, z);
    } else {
        n = func_002F5760(x, y);
        switch (n & 3) {
        case 0:
            return func_002F6C40(y[0], y[1]);
        case 1:
            return -func_002F75F8(y[0], y[1], 1);
        case 2:
            return -func_002F6C40(y[0], y[1]);
        default:
            return func_002F75F8(y[0], y[1], 1);
        }
    }
}
