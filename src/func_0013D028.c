extern char D_010CE6C0[];
extern char D_010CE6C4[];
extern char D_010CE6C8[];
extern char D_010CE700[];
s32 func_001404D0(void);
s32 func_001404F0(void);
s32 func_00141028(void *, s32, s32, s32);

typedef struct {
    char pad[0x18];
    s32 (*fn)();
} T;
s32 func_0013D0B0(T *);

s32 func_0013D028(T *t)
{
    s32 id;
    if (func_001404D0() != 0)
        return 0;
    id = func_001404F0();
    *(s32 *)D_010CE6C0 = id;
    if (id < 0) {
        *(s32 *)D_010CE6C8 = id;
        return 1;
    }
    *(s32 *)D_010CE6C4 = func_00141028(D_010CE700, id, 0x1320, 0);
    t->fn = func_0013D0B0;
    return 0;
}
