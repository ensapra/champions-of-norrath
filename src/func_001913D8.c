s32 D_004843E0;
s8 D_004843F0;
s32 D_00486A38;

#define MAX(a, b) ({ s32 _a = (a); s32 _b = (b); _a > _b ? _a : _b; })
#define MIN(a, b) ({ s32 _a = (a); s32 _b = (b); _a < _b ? _a : _b; })

s32 func_001913D8(void)
{
    if (D_004843E0 == 0) {
        return MIN(2, MAX(1, D_00486A38));
    }
    return MIN(2, MAX(1, D_004843F0 + 1));
}
