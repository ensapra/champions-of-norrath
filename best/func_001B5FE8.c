/* identical to func_002DD9A8 (matched), with its names changed by decompdecomp */
void GetOsdConfigParam(void *); void SetOsdConfigParam(void *);
s32 func_001B5FE8(void) {
    u32 stk[2]; u32 *p;
    GetOsdConfigParam(&stk[0]);
    p = &stk[1];
    stk[1] = (stk[0] & 0xFFFF1FFF) | 0x2000;
    SetOsdConfigParam(p);
    GetOsdConfigParam(p);
    SetOsdConfigParam(&stk[0]);
    return ((stk[1] >> 13) & 7) == 0;
}
