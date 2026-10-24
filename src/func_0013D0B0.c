extern char D_010CE6C0[];
extern char D_010CE6C4[];
s32 func_001404D0(void);
s32 D_00141078(s32);
void func_001403B8(void);
void func_00140978(s32);

typedef struct {
    char pad[0x18];
    s32 (*fn)();
} T;
s32 func_0013D118(void);

s32 func_0013D0B0(T *t)
{
    if (func_001404D0() != 0)
        return 0;
    if (D_00141078(*(s32 *)D_010CE6C4) < 0) {
        func_001403B8();
        func_00140978(*(s32 *)D_010CE6C0);
        t->fn = func_0013D118;
    }
    return 0;
}
