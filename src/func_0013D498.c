extern s32 D_010CFB30[];
extern s32 D_010CFB34[];
extern s32 D_010CFB38[];
extern s32 D_010CFB3C[];
extern s32 D_010CFB4C[];
extern char D_001C5500[];
s32 func_001404D0(void);
s32 func_001404F0(void);
s32 func_00140020(void);
void func_001403B8(void);
void func_00140A10(s32);
s32 func_00141028(void *, s32, s32, s32);
void func_0013FFF8(void);

typedef struct {
    char pad[0x18];
    s32 (*fn)();
} T;
s32 func_0013D518(T *);
s32 func_0013D5A0(T *);

s32 func_0013D518(T *t)
{
    s32 id;
    if (func_001404D0() != 0)
        return 0;
    id = func_001404F0();
    D_010CFB30[0] = id;
    if (id < 0) {
        D_010CFB38[0] = id;
        return 1;
    }
    D_010CFB34[0] = func_00141028(D_001C5500, id, 0x1320, 0);
    t->fn = func_0013D5A0;
    return 0;
}

s32 func_0013D498(T *t) {
    if (func_00140020() != 0) return 0;
    if (func_001404D0() != 0) return 0;
    if (D_010CFB3C[0] > 0) {
        D_010CFB3C[0]--;
        return 0;
    }
    func_001403B8();
    func_00140A10(0x1320);
    t->fn = func_0013D518;
    return 0;
}

void func_0013D460(void) {
    func_0013FFF8();
    D_010CFB3C[0] = 3;
    D_010CFB4C[0] = 1;
}
