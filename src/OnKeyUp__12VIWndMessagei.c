/* identical to func_00100388 (matched), with its names changed by decompdecomp */
/* identical to func_001129E8 (matched), with its names changed by decompdecomp */

void OnKeyUp__12VIWndMessagei(void) {
}

s32 func_00112E08(void);

s32 func_001129F0(void *arg0, s32 *arg1) {
    if (*(s8 *)((u8 *)arg0 + 0x23A) != 0 && *arg1 == 1) {
        return 1;
    }
    if (*arg1 == 3) {
        if (func_00112E08() == 0) {
            *arg1 = 5;
        }
    }
    return 0;
}

f32 D_0047FC70;
f32 D_0047FC74;
f32 D_0047FC78;
s32 D_00484538;
s32 D_00484CD8;

f32 func_00112960(void) {
    f32 f = 1.0f;
    s32 g = D_00484CD8;
    if (g == 2) {
        f = D_0047FC74;
    } else if (g < 3) {
        if (g == 0) {
            f = D_0047FC70;
        }
    } else if (D_00484538 == 3) {
        f = 5.0f;
    }
    if (D_00484538 == 2) {
        f = f * D_0047FC78;
    }
    return f;
}
