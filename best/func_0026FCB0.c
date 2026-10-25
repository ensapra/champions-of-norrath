extern s32 D_0042A3E8[];
extern s32 D_00484F44;
void func_0026BE00(void *, s32, s32);
s32 func_002D0DB0(s32);

s64 func_0026FCB0(u8 *self, s32 step) {
    s32 n = D_00484F44;
    s8 old = self[0x161];
    s32 i = 0;
    s32 idx;
    u8 val;
    if (n > 0) {
        for (i = 0; i < n; i++) {
            if (D_0042A3E8[i] == old)
                break;
        }
    }
    idx = ((i ^ n) ? i : 0) + step;
    if (step > 0 && idx >= n)
        idx = 0;
    else if (step < 0 && idx < 0)
        idx = n - 1;
    val = *(u8 *)&D_0042A3E8[idx];
    self[0x161] = val;
    if ((s8)val != old) {
        func_0026BE00(self, 0, 0);
        return func_002D0DB0(10);
    }
}
