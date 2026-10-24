/* identical to func_001B5D58 (matched), with its names changed by decompdecomp */
s32 func_001B5FA0(s32 *d,s32 *s,u32 n){u32 i=0;n>>=2;if(n)do{ s32 v=*s; i++; s++; *d=v; d++;}while(i<n);return 0;}

extern s32 sceSifGetReg(s32);
extern void func_001ADBA0(void);
extern void func_001B7DF0(s32, s32);

s32 func_001B5B20(void) {
    s32 val = sceSifGetReg(4);
    if (val & 0x40000) {
        func_001ADBA0();
        func_001B7DF0(1, 1);
        func_001B7DF0(0, 1);
        return 1;
    }
    return 0;
}

s32 func_001B5AF8(void) {
    return (sceSifGetReg(4) & 0x10000) != 0;
}

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
