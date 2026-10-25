s32 func_0015A6C0(void *, void *);
s32 func_001A444C(s32);
s32 func_0015A828(void *, s32, s32, s32, s32);
void func_0015BE7C(void *);
void func_0015B210(void *);
void ovl_ntgui2_func_0015A7B8(void *);
s32 func_00158E40(void *self, s32 size) {
    s32 result = 0;
    if (size != 0) {
        s32 stackSize = size;
        result = func_0015A6C0(self, &stackSize);
        if (result != 0) {
            s32 amount = func_001A444C(stackSize);
            s32 used = *(s32 *)((u8 *)self + 0xBF0);
            s32 capacity = *(s32 *)((u8 *)self + 0xCA0);
            result = 0;
            s32 avail = (capacity < (u32)(used + amount)) ? capacity - used : amount;
            if (avail >= amount) {
                result = func_0015A828(self, *(s32 *)((u8 *)self + 0xB8C), stackSize, amount, 1);
                if (result != 0) {
                    *(s32 *)((u8 *)self + 0xB8C) += amount;
                    func_0015BE7C(self);
                    func_0015B210(self);
                    *(s32 *)((u8 *)self + 0x98) = 2;
                    ovl_ntgui2_func_0015A7B8(self);
                    result = amount;
                }
            }
        }
    }
    return result;
}
