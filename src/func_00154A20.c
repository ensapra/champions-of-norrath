#define I(p, o) (*(s32 *)((char *)(p) + (o)))
#define FL(p, o) (*(f32 *)((char *)(p) + (o)))
void func_00152D0C(f32, s32, s32, s32, s32, s32, s32);
s32 func_001516C4(s32, s32, s32);

void func_0015496C(void *s) {
    if (I(s, 0x924) == 0) {
        return;
    }
    if (I(s, 0x92C) != 0) {
        func_00152D0C(FL(s, 0x9B8), I(s, 0x918), I(s, 0x91C), I(s, 0x9AC), 0, I(s, 0x92C) - 1, I(s, 0x924));
    }
    if (I(s, 0x97C) == 0) {
        return;
    }
    if (I(s, 0x928) != 0) {
        func_00152D0C(FL(s, 0x9B8), I(s, 0x5A0) + I(s, 0x5D4) + I(s, 0x5AC) - I(s, 0x8D4) - I(s, 0x99C) - I(s, 0x990) - I(s, 0x930),
                      I(s, 0x91C), I(s, 0x9AC), 0, 0x7FFFFFFF, I(s, 0x928));
    }
}

void func_00154A20(void *s) {
    if (I(s, 0x924) != 0) {
        func_00152D0C(FL(s, 0x9B8), I(s, 0x918), I(s, 0x91C), I(s, 0x9AC), 0, 0x7FFFFFFF, I(s, 0x924));
    }
}

void func_001528C4(s32 *a, s32 *b) {
    if (*b == 0) {
        *a = 0;
    } else {
        *a = func_001516C4(*a, *b, 0);
    }
}
