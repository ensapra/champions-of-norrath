typedef struct { u8 pad[0x4C]; u8 **vt; } VO;
s32 func_0014B9F0(void *, void *);
s32 func_0014BA30(void *, void *);
s32 func_0014CE60(void *, s32, s32);
s32 func_0014CF0C(void *, s32, s32);
s32 func_0014D138(void *, s32);
#define F32(o,off) (*(s32*)((u8*)(o)+(off)))
#define F64(o,off) (*(s64*)((u8*)(o)+(off)))
s32 func_0014EAB0(void *a0, void *a1, void *a2) {
    s32 sp0 = 0;
    s32 r = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    s32 t5, t6;
    if (F64(a1, 0x5A0) != F64(a2, 0x5A0)) {
        c2 = 1; c1 = 1; r = 1;
        func_0014CE60(a0, F32(a1, 0x5A0), F32(a1, 0x5A4));
    }
    t5 = F32(a1, 0x5AC);
    if (t5 != F32(a2, 0x5AC) || F32(a1, 0x5B0) != F32(a2, 0x5B0)) {
        c2++; c1++;
        func_0014CF0C(a0, t5, F32(a1, 0x5B0));
        r = 1;
    }
    t5 = F32(a1, 0x5D4);
    if (t5 != F32(a2, 0x5D4)) {
        c1++;
        func_0014D138(a0, t5);
        r = 1;
    }
    if (func_0014B9F0((u8*)a1 + 0x5D0, (u8*)a2 + 0x5D0) == 0) {
        c3 = 1; r = 1;
        F32(a0, 0x5D0) = F32(a1, 0x5D0);
    }
    if (func_0014BA30((u8*)a1 + 0x5C0, (u8*)a2 + 0x5C0) == 0) {
        c4 = 1; r = 1;
        F64(a0, 0x5C0) = F64(a1, 0x5C0);
        F64(a0, 0x5C8) = F64(a1, 0x5C8);
    }
    t6 = F32(a1, 0x5DC);
    if (F32(a1, 0x5D8) != F32(a2, 0x5D8)) r = 1;
    if (t6 != F32(a2, 0x5DC)) {
        F32(a0, 0x5DC) = t6;
        sp0 = 1;
        r = 1;
    }
    t5 = F32(a1, 0x5F8);
    if (t5 != F32(a2, 0x5F8)) {
        F32(a0, 0x5F8) = t5;
        r = 1;
    }
    if (c3 || c4 || sp0 || c2) F32(a0, 0x98) = 2;
    if (c1) {
        void (*fn)(void *) = *(void (**)(void *))((u8*)((VO*)a0)->vt + 0xDC);
        if (fn) fn(a0);
    }
    return r;
}
