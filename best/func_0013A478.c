extern u8 D_0034B660[];
extern char D_004615C0[];
extern char D_004615D0[];
extern char D_00483A48[];
void *D_00483ACC;

void func_00304640(void *, s32);
s32 func_00304F60(s32, void *, s32);
s8 func_002FF990(s32);
s32 func_00304CFC(void *);
void func_00304240(void *, void *);

void func_0013A478(s32 arg0) {
    u8 buf[0x70];
    s32 var_17 = 0;
    s32 *var_16;
    s32 var_4;
    func_00304640(buf, arg0);
    func_00304640(D_0034B660, arg0);
    if (D_00483ACC != NULL) {
        var_16 = *(s32 **)((u8 *)D_00483ACC + 0x2C);
        var_4 = *var_16;
        if (var_4 != 0) {
            do {
                if (func_00304F60(var_4, D_004615C0, 0xC) == 0) {
                    var_17 = 1;
                    D_0034B660[0x50] = func_002FF990(*var_16 + 0xC);
                }
                var_16++;
                var_4 = *var_16;
            } while (var_4 != 0);
        }
    }
    if (var_17 == 0) {
        if (func_00304CFC(buf) != 0) {
            func_00304240(buf, D_00483A48);
        }
        func_00304240(buf, D_004615D0);
        D_0034B660[0x50] = (s8)-1;
    }
}
