/* identical to func_0017E328 (matched), with its names changed by decompdecomp */
typedef struct { u8 a, b, c, d; } T;
s32 func_002D11A8(void);
s32 func_002D1260(void);
void func_002D1608(T *, s32);
void func_002D16A0(T *t) {
    s32 a = func_002D11A8();
    s32 b = func_002D1260() * 60 - 0x21C;
    func_002D1608(t, a + b);
}
