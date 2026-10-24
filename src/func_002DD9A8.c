void GetOsdConfigParam_2(void *); void SetOsdConfigParam_2(void *);
s32 func_002DD9A8(void) {
    u32 stk[2]; u32 *p;
    GetOsdConfigParam_2(&stk[0]);
    p = &stk[1];
    stk[1] = (stk[0] & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam_2(p);
    GetOsdConfigParam_2(p);
    SetOsdConfigParam_2(&stk[0]);
    return ((stk[1] >> 13) & 7) == 0;
}
