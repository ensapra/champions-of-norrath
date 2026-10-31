/* identical to func_002D7558 (matched), with its names changed by decompdecomp */
extern s32 D_01107D60[];
void func_002D7858(s32, s32);
s32 D_001ADAE0(void *, s32);
s32 D_001ADAF0(void *, s32);

typedef struct {
    s32 src;
    s32 dst;
    s32 size;
    s32 attr;
} Pkt;

s32 func_001AFB98(s32 arg0, s32 arg1, u8 *arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    Pkt buf[2];
    s32 n;

    if ((u32)(arg3 - 0x10) >= 0x61)
        return 0;

    n = 0;
    if (arg6 > 0) {
        s32 v = *(u8 *)arg2;
        buf[0].src = arg4;
        buf[0].dst = arg5;
        buf[0].size = arg6;
        buf[0].attr = 0;
        *(s32 *)(arg2 + 4) = arg5;
        n = 1;
        *(s32 *)arg2 = v | (arg6 << 8);
        if (arg1 & 4)
            func_002D7858(arg4, arg6);
    } else {
        *(s32 *)arg2 = *(u8 *)arg2;
        *(s32 *)(arg2 + 4) = 0;
    }

    buf[n].src = (s32)arg2;
    buf[n].dst = D_01107D60[0];
    buf[n].size = arg3;
    *(s32 *)(arg2 + 8) = arg0;
    *(u8 *)arg2 = arg3;
    buf[n].attr = 0x44;

    func_002D7858((s32)arg2, arg3);
    n++;

    if (arg1 & 1)
        return D_001ADAF0(buf, n);
    return D_001ADAE0(buf, n);
}
