typedef union { s64 ll; struct { u32 low; s32 high; } s; } DWu;

s64 func_001708F0(s64 u, s64 v) {
    DWu w, uu, vv;
    uu.ll = u;
    vv.ll = v;
    w.s.low = uu.s.low * vv.s.low;
    w.s.high = (u32)(((u64)uu.s.low * vv.s.low) >> 32);
    w.s.high += uu.s.low * vv.s.high + uu.s.high * vv.s.low;
    return w.ll;
}
