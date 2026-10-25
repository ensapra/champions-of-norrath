extern void func_00141248(char *, s32);
extern void func_00152CB8(s32, char *, f32 *, f32);
extern void func_001A2660(void *, s32, s32);
extern void func_001A3D78(void *, void *, s32);
extern void func_001A4738(void *, void *, s32);
extern s32 D_001BB6C8[], D_001BB6CC[], D_001BB6D0[];
extern f32 D_001BB8F0[];
extern u8 D_004C7368[];
extern s32 D_010C1FC8[];
extern s32 *D_010C1FCC[];
extern char *D_010C1FD0[];
extern char D_010C1FD8[];
extern s32 D_010C2018[], D_010C201C[];

s32 func_0010B890(void) {
    f32 sp[4];
    s32 v;
    char *buf = D_010C1FD8;
    char **pp = D_010C1FD0;
    s32 *pi = D_010C201C;
    func_001A2660(buf, 0, 0x40);
    func_001A2660(*pp, 0, 4);
    func_001A3D78(*pp, D_004C7368, D_010C1FC8[0] + D_001BB6CC[0]);
    func_001A2660(buf, 0, 0x40);
    func_001A4738(buf, *pp, *pi);
    buf[*pi] = 0;
    if ((*pi >= 0x41 && (*pi = 4, D_010C2018[0] < D_001BB6D0[0])) || D_010C1FD8[*pi - 1] == 0) {
        v = *D_010C1FCC[0] + 1;
        *D_010C1FCC[0] = v;
        func_00141248(D_010C1FD8, v);
        D_001BB6C8[0] = 0;
        return 1;
    }
    func_00152CB8(0, D_010C1FD8, sp, D_001BB8F0[0]);
    D_010C2018[0] = (s32)(sp[3] - sp[2]);
    if (D_010C2018[0] >= D_001BB6D0[0]) {
        D_010C1FD8[*pi - 1] = 0;
        v = *D_010C1FCC[0] + 1;
        *D_010C1FCC[0] = v;
        func_00141248(D_010C1FD8, v);
        v = *pi;
        *pi = 4;
        D_001BB6CC[0] = D_001BB6CC[0] + v - 4;
        return 0;
    }
    *pi = *pi + 1;
    return 0;
}
