s32 func_0015A6C0(void *, s32 *);
s32 func_001A444C(s32);
s32 func_0015A828(void *, s32, s32, s32, s32);
void func_0015BE7C(void *);
void func_0015B210(void *);
void ovl_ntgui2_func_0015A7B8(void *);
s32 func_00158E40(void *self, s32 size) {
    s32 amount;
    s32 used, capacity, avail;
    if (size == 0) return 0;
    if (func_0015A6C0(self, &size) == 0) return 0;
    amount = func_001A444C(size);
    used = *(s32 *)((u8 *)self + 0xBF0);
    capacity = *(s32 *)((u8 *)self + 0xCA0);
    avail = amount;
    if ((u32)capacity < (u32)(used + amount)) avail = capacity - used;
    if (avail < amount) return 0;
    if (func_0015A828(self, *(s32 *)((u8 *)self + 0xB8C), size, amount, 1) == 0) return 0;
    *(s32 *)((u8 *)self + 0xB8C) += amount;
    func_0015BE7C(self);
    func_0015B210(self);
    *(s32 *)((u8 *)self + 0x98) = 2;
    ovl_ntgui2_func_0015A7B8(self);
    return amount;
}
