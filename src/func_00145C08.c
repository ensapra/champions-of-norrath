/* func_001429B8 */
extern void func_001428E8(void *, void *);
void func_001429B8(void *arg0, void *arg1) {
    s32 *p = (s32 *)arg0;
    s32 base, idx, val;
    if (p[3] >= p[1]) {
        func_001428E8(arg0, arg1);
    }
    base = p[0];
    idx = p[3];
    p[3] = idx + 1;
    val = *(s32 *)arg1;
    *(s32 *)(base + idx * 4) = val;
}

/* func_00141074 */
extern s32 sceSifDmaStat(void);
void func_00141074(void) {
    sceSifDmaStat();
}

/* func_00145C08 */
extern void func_0010B378(s32, void *);
extern void func_0013BBD0(void);
extern u8 func_001B9FD8[];
extern s32 D_010D44C0[];
extern s32 D_010D44E8[];
void func_00145C08(s64 a, s64 b) {
    s32 i = (s32)b;
    D_010D44E8[0] = i;
    func_0010B378(D_010D44C0[i], func_001B9FD8 + 0x1738);
    func_0013BBD0();
}

/* func_001460E8 */
extern s32 D_001C688C[];
extern s32 D_001C6890[];
extern s32 D_001C6898[];
extern s32 D_001C689C[];
extern s32 D_001C68A0[];
extern u8 D_004CB158[];
extern void func_0013F450(s32);
extern void func_0013CB90(s32);
extern void func_0013D440(s32);
extern void ovl_ntgui2_func_0013E928(s32);
extern void func_0013DE80(s32);
extern void func_0013E330(s32);
extern void func_0013D2B8(s32);
extern void func_0013B658(void *, s32);
extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118160(void *);
extern void func_00147350(void);
extern void func_00147380(void);
extern void func_00147460(void);
extern void func_00146AB8(void);
void func_001460E8(s32 arg0) {
    u8 buf[0x20];
    D_001C688C[0] = arg0;
    D_001C68A0[0] = 0;
    D_001C6890[0] = 0;
    D_001C689C[0] = 0;
    D_001C6898[0] = 0;
    func_0013F450(3);
    func_0013CB90(3);
    func_0013D440(3);
    ovl_ntgui2_func_0013E928(3);
    func_0013DE80(3);
    func_0013E330(3);
    func_0013D2B8(3);
    func_0013B658(D_004CB158, 3);
    func_00118140(buf, 1, func_00147350, func_00147380, func_00147460);
    *(void **)(buf + 8) = func_00146AB8;
    func_00118160(buf);
}
