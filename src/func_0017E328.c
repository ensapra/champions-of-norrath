typedef struct { u8 a, b, c, d; } T;
s32 func_0017DE30(void);
s32 func_0017DEE8(void);
void func_0017E290(T *, s32);
void func_0017E328(T *t) {
    s32 a = func_0017DE30();
    s32 b = func_0017DEE8() * 60 - 0x21C;
    func_0017E290(t, a + b);
}
