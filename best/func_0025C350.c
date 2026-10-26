extern char D_00475648[];
extern s32 D_0042F400[];
extern s32 D_0042F420[];
extern s32 D_00485BF8[];
extern s32 D_00485BFC;
extern s32 D_00485C08;
extern s32 D_00485C0C;
extern char *D_00485C10;
extern s32 D_00485C14;
extern s32 D_00486CD0;
extern s32 D_00486CD4;
extern s32 D_00486CE4;
s32 func_002D46E0(s32, s32);
void func_002E10D8(s32);

void func_0025C350(s32 *a, s32 *out) {
    s32 v;
    u32 t = a[0];
    D_00485C10 = (char *)D_00485BF8;
    switch (t) {
    case 0:
        v = D_00485BFC;
        if (v != 0) {
            D_00485C08 = 0;
            switch (v) {
            case -5:
            case -4:
                break;
            case -7:
            case -6:
            case -3:
            case -2:
            default:
                goto set;
            }
        }
        return;
    case 1:
        v = D_00485BFC;
        if (v != 0) goto chk;
        return;
    case 5:
        v = D_00485BFC;
        if (v != a[2]) goto bad;
        return;
    case 3:
    case 4:
        v = D_00485BFC;
        if (t == 3 && v != a[2]) {
bad:
            D_00485C08 = 0;
            D_00485C10 = D_00475648;
            goto set;
        }
        goto m;
    case 9:
        if (D_00485BFC == 0) D_0042F400[a[1] * 4 + a[2]] = 1;
        return;
    case 6:
        v = D_00485BFC;
        if (v >= 0) {
            D_00485C0C = v;
            return;
        }
        goto chk;
    case 2:
    case 7:
        v = D_00485BFC;
m:
        if (v < 0) goto chk;
        return;
    case 8:
        D_0042F420[a[1] * 4 + a[2]] = 0;
        if (D_00485C14 == 2) {
            if (!(a[2] < func_002D46E0(a[1], 2))) {
                v = -10;
                D_00485BFC = v;
            } else {
                v = D_00485BFC;
                if (v == -1) {
                    D_0042F400[a[1] * 4 + a[2]] = 1;
                } else if (v == -2) {
                    D_0042F400[a[1] * 4 + a[2]] = 0;
                }
            }
            if (v >= -9) D_0042F420[a[1] * 4 + a[2]] = 1;
        } else {
            v = -10;
            D_00485BFC = v;
        }
        if (D_0042F420[a[1] * 4 + a[2]] == 0) D_0042F400[a[1] * 4 + a[2]] = 0;
        return;
    case 12:
        D_00486CD0 = D_00486CD4;
        if (D_00485C08 != 0) {
            D_00485C08 = 0;
            func_002E10D8(D_00486CE4);
        }
        v = a[1];
        D_00485BFC = v;
    set:
        *out = v;
        D_00486CD0 = D_00486CD4;
        return;
    }
    return;
chk:
    if (v < -9) goto set;
    if (v == -3) goto set;
}
