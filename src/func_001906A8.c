typedef union { f64 d; struct { u32 lo; u32 hi; } w; } DU;
f64 func_0019F848(f64 x) {
    DU u;
    u32 high;
    u.d = x;
    high = u.w.hi;
    u.w.hi = high & 0x7FFFFFFF;
    return u.d;
}

typedef struct { s32 a, b, c, d; s32 state; s32 f, g; } Ent;
typedef struct { Ent e[4]; } Row;
extern Row D_010F4610[];
u8 *func_001903E0(s32, s32);

s32 func_001906A8(s32 a, s32 b, s32 v) {
    if (D_010F4610[a].e[b].state == 0) return 0;
    func_001903E0(a, b)[0x71] = v;
    return 1;
}
