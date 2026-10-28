s32 func_00143D10(s32);
void *func_00304640(s32, s32);
s32 func_00152CC8(void *, void *);
void func_001601F8(s32);
void func_001637A8(s32);
void func_00163830(s32, s32, s32);
s32 func_00165DC0(s32, s32);
s64 func_0016C970(s32, s32);
extern s8 D_004857E0;
extern char D_00485828[];

#define NEXT(T) (*(T *)((p = (volatile s32 *)((char *)p + 4)) - 1))

s32 func_00231978(char *o, s32 *args) {
    volatile s32 *p = args;
    s32 a, b, r;
    func_00304640((s32)(o + 0x3C0), func_00143D10(NEXT(s32)));
    func_00304640((s32)(o + 0x3E0), func_00143D10(NEXT(s32)));
    func_00304640((s32)(o + 0x400), func_00143D10(NEXT(s32)));
    a = NEXT(s32);
    b = NEXT(s32);
    *(f32 *)(o + 0xB0) = NEXT(f32);
    *(s16 *)(o + 0x42A) = a;
    *(s32 *)(o + 0xF4) = b;
    *(s32 *)(o + 0x420) = func_00165DC0((s32)(o + 0x3C0), (s32)(o + 0x3E0));
    *(s32 *)(o + 0x424) = func_00165DC0((s32)(o + 0x3C0), (s32)(o + 0x400));
    func_001637A8((s32)(o + 0x120));
    r = func_00152CC8(o, D_00485828);
    if (r) {
        func_00163830((s32)(o + 0x120), r, 1);
        func_001601F8((s32)(o + 0x120));
    }
    *(s64 *)(o + 0x228) = func_0016C970(*(s32 *)(o + 0x420), *(s32 *)(o + 0xF4));
    D_004857E0 = 0;
    return (char *)p - (char *)args;
}
