s32 D_004868A8;
void func_00143FC0(void *arg0);
void func_0013EC40(void*);
s32 func_0013EDE8(void*);

s64 func_00144058(void) {
    D_004868A8 = (s32)__builtin_return_address(0);
    func_0013EC40(func_00143FC0);
    return (s64)func_0013EDE8(func_00143FC0);
}
