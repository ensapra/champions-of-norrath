#define I(p, o) (*(s32 *)((char *)(p) + (o)))
#define FL(p, o) (*(f32 *)((char *)(p) + (o)))
void func_00154068(s32);
void func_00154130(s32);
void func_00154394(s32);
extern char func_001C8098[];
void func_00152D0C(s32, s32, s32, s32, s32, s32, f32);
s32 func_001516C4(s32, s32, s32);

void func_0015398C(s32 arg0) {
    (*(void (**)(void))(func_001C8098 + 0xD70))();
    func_00154068(arg0);
    func_00154130(arg0);
    func_00154394(arg0);
}

void func_0015496C(void *s) {
    if (I(s, 0x924) == 0) {
        return;
    }
    if (I(s, 0x92C) != 0) {
        func_00152D0C(I(s, 0x918), I(s, 0x91C), I(s, 0x9AC), 0, I(s, 0x92C) - 1, I(s, 0x924), FL(s, 0x9B8));
    }
    if (I(s, 0x97C) == 0) {
        return;
    }
    if (I(s, 0x928) != 0) {
        func_00152D0C(I(s, 0x5A0) + I(s, 0x5D4) + I(s, 0x5AC) - I(s, 0x8D4) - I(s, 0x99C) - I(s, 0x990) - I(s, 0x930),
                      I(s, 0x91C), I(s, 0x9AC), 0, 0x7FFFFFFF, I(s, 0x928), FL(s, 0x9B8));
    }
}

void func_00154A20(void *s) {
    if (I(s, 0x924) != 0) {
        func_00152D0C(I(s, 0x918), I(s, 0x91C), I(s, 0x9AC), 0, 0x7FFFFFFF, I(s, 0x924), FL(s, 0x9B8));
    }
}

void func_001528C4(s32 *a, s32 *b) {
    if (*b == 0) {
        *a = 0;
    } else {
        *a = func_001516C4(*a, *b, 0);
    }
}
