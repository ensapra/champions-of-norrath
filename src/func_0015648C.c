void func_0015175C(void *, s32);

void func_0015648C(char *p, s32 unused, s32 x, s32 y) {
    volatile s32 a[2];
    a[0] = x;
    a[1] = y;
    func_0015175C(p + 0x928, 1);
    *(s32 *)(p + 0x920) = 0;
}

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
void func_00156658(void *arg0) {
    s32 temp_4;
    s32 temp_5;
    s32 temp_6;
    s32 temp_9;
    void *temp_8;

    temp_5 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_8 = arg0 + 0x910;
    temp_9 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_5;
    temp_6 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_5;
    M2C_FIELD(arg0, s32 *, 0x910) = 0;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x924);
    switch (temp_4) {
    case 1:
        M2C_FIELD(temp_8, s32 *, 4) = (s32) (temp_9 + ((s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1));
        M2C_FIELD(temp_8, s32 *, 8) = (s32) (temp_6 + ((s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1));
    case 0:
    case 2:
        M2C_FIELD(temp_8, s32 *, 8) = temp_6;
        M2C_FIELD(temp_8, s32 *, 4) = temp_9;
        return;
    }
}
