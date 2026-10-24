void func_001919A0(s32 **pp, s64 v) {
    s32 *p = *pp;
    p[0] = (s32)v;
    p++;
    p[0] = (s32)(v >> 32);
    *pp = p + 1;
}

void func_001919C8(s32 **pp, s32 a1, s64 v) {
    s32 *p = *pp;
    p[0] = (s32)v;
    p++;
    p[0] = (s32)(v >> 32);
    *pp = p + 3;
    p[1] = a1;
    p[2] = 0;
}
