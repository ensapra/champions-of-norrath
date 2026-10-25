extern f32 D_00482804;
extern char D_00477E88[];
void func_0013EF30(f32 *, f32 *, void **, s32);
s32 func_001671F8(void *);
void func_001C7600(s32, s32, s32, s32);

s32 func_00298D00(void *self, u8 *o)
{
    void *list[512];
    f32 lov[3];
    f32 hiv[3];
    f32 *lo = lov;
    f32 *hi = hiv;
    s32 i;
    f32 x = *(f32 *)(o + 0x10), y = *(f32 *)(o + 0x14), z = *(f32 *)(o + 0x18);

    lo[0] = x - D_00482804;
    lo[1] = y - D_00482804;
    lo[2] = z - D_00482804;
    hi[0] = x + D_00482804;
    hi[1] = y + D_00482804;
    hi[2] = z + D_00482804;
    func_0013EF30(lo, hi, list, 0x200);
    i = 0;
    while (list[i] != 0) {
        char *vt = *(char **)(o + 0x48) + 0xA0;
        if ((*(s32 (**)(void *, void *))(vt + 4))(o + *(s16 *)vt, list[i])) {
            if (*(s8 *)((u8 *)list[i] + 0xAC) == 0x10)
                return 1;
        }
        i++;
    }
    func_001C7600(func_001671F8(D_00477E88), 0xB4, *(s32 *)(o + 0x3C0), 0);
    return 0;
}
