typedef struct { s32 name; u8 pad[0x14]; s8 max; u8 pad2[0x27C - 0x19]; } Ent;
extern Ent D_00437038[];
extern s8 D_008D5B68[];
extern u8 *D_008D5D40[];
extern s32 D_00486D84;
extern char D_004765F8[];
extern char D_00476608[];
s32 func_00165DC0(s32, void *);
s32 func_00303EB8(char *, char *, ...);

s32 func_0027EAF0(s32 idx, s32 delta) {
    char buf[64];
    s32 ret = 0;
    if (delta == 0) {
        D_008D5B68[idx] = 0;
    } else {
        if (delta > 0 && D_008D5B68[idx] < D_00437038[idx].max - 1) {
            D_008D5B68[idx] += delta;
            ret = 1;
        } else if (delta < 0 && D_008D5B68[idx] > 0) {
            D_008D5B68[idx] += delta;
            ret = 1;
        }
    }
    func_00303EB8(buf, D_004765F8, D_00437038[idx].name);
    *(s32 *)(D_008D5D40[idx] + 0x420) = func_00165DC0(D_00486D84, buf);
    func_00303EB8(buf, D_00476608, D_00437038[idx].name, D_008D5B68[idx] + 1);
    *(s32 *)(D_008D5D40[idx] + 0x424) = func_00165DC0(D_00486D84, buf);
    return ret;
}
