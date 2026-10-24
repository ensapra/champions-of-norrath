s64 func_001708F0(s64 u, s64 v) {
    u32 ul = (u32)u, vl = (u32)v;
    s32 uh = (s32)(u >> 32), vh = (s32)(v >> 32);
    u64 p = (u64)ul * vl;
    u32 hi = (u32)(p >> 32) + (ul * vh + uh * vl);
    return ((s64)hi << 32) | (u32)p;
}
