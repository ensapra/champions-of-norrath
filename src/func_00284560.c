extern char D_00476C38[];
extern s32 func_0013D2F8(void *);
extern s32 func_00143830(void *);
extern s32 func_00163830(void *, s32, s32);
extern s32 func_00165DC0(void *, void *);
s32 func_00284560(char *arg0, s8 *arg1) {
    s8 *p = arg1;
    s32 a, b;
    arg1++;
    a = arg1[-1];
    arg1++;
    arg0[0x4D] = a;
    b = arg1[-1];
    arg0[0x4E] = b;
    if (b != 0) {
        func_0013D2F8(arg0 + 0x100);
        func_00163830(arg0 + 0xD8, func_00165DC0(arg0 + 0x90, D_00476C38), 3);
    }
    func_00143830(arg0);
    return (s32)(arg1 - p);
}
