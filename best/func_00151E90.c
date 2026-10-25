s32 D_0047FC1C;

void func_0015217C(void *, s64);

void func_00151E90(void *arg0) {
    if ((s64)D_0047FC1C != *(s64 *)((u8 *)arg0 + 0xFC0)) {
        void *var_5 = *(void **)((u8 *)arg0 + 0xFBC);
        u8 *var_18 = (u8 *)arg0 + 0xFA0;
        if (var_5 != NULL) {
            do {
                void *temp_16 = *(void **)((u8 *)var_5 + 0x1C);
                s64 temp_3 = *(s64 *)var_5 - ((s64)D_0047FC1C - *(s64 *)((u8 *)arg0 + 0xFC0));
                *(s64 *)var_5 = temp_3;
                if (temp_3 <= 0) {
                    *(void **)(var_18 + 0x1C) = temp_16;
                    s64 temp_5 = *(s64 *)((u8 *)var_5 + 0x10);
                    s32 spC = *(s32 *)((u8 *)var_5 + 0xC);
                    void (*sp18)(s32, s64, s32) = *(void (**)(s32, s64, s32))((u8 *)var_5 + 0x18);
                    func_0015217C(var_5, temp_5);
                    sp18(spC, temp_5, 0);
                } else {
                    var_18 = (u8 *)var_5;
                }
                var_5 = temp_16;
            } while (var_5 != NULL);
        }
        *(s64 *)((u8 *)arg0 + 0xFC0) = (s64)D_0047FC1C;
    }
}
