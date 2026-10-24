extern s32 func_00191648(void *);
extern char func_002832B0[];
extern char func_00283768[];
s32 D_00486030;

s64 func_00284680(void) {
    s32 f = D_00486030;
    if (f == 0) {
        func_00191648(func_002832B0);
        return func_00191648(func_00283768);
    }
    return f;
}

extern u8 D_00438910[];
s32 D_00486CF0;
s32 D_00486D10;
extern void *func_003021B0(void *, s32, s32);
s64 func_00280978(void) {
    s32 n = D_00486CF0;
    D_00486D10 = 0;
    return (s64)func_003021B0((void *)(D_00438910 + n * 41), 0, 32);
}

extern char D_00476C38[];
extern s32 func_0013D2F8(void *);
extern s32 func_00143830(void *);
extern s32 func_00163830(void *, s32, s32);
extern s32 func_00165DC0(void *, void *);
s32 func_00284560(char *arg0, s8 *arg1) {
    s8 *p = arg1;
    arg1++;
    arg0[0x4D] = arg1[-1];
    arg1++;
    arg0[0x4E] = arg1[-1];
    if (arg1[-1] != 0) {
        func_0013D2F8(arg0 + 0x100);
        func_00163830(arg0 + 0xD8, func_00165DC0(arg0 + 0x90, D_00476C38), 3);
    }
    func_00143830(arg0);
    return (s32)(arg1 - p);
}
