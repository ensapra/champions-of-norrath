extern s32 D_001C5434[];
extern s32 D_001BD888[];
extern s32 D_010CE390[];
extern s32 D_010CE3A0[];
extern s32 D_001BB6B4[];
extern s32 D_001BB6C4[];
extern s32 D_001BB720[];
s32 func_0010A4D0(s32, s32, s32);
s32 func_0010B378(s32, void *);
s32 func_0010CBC8(s32, s32, s32, s32);
s32 func_0011BA18(s32);
void func_00136CC8(s32);
void func_0013BBD0(void);

void func_00137020(s32 a0, s64 arg) {
    s32 a, b;
    s32 idx = (s32)arg;
    if (D_001C5434[0] != 0) {
        if (idx == 0) {
            a = func_0011BA18(2);
            b = func_0011BA18(3);
            func_0010CBC8(0, a, b, func_0011BA18(0xC));
        } else if (D_001BD888[0] != 0) {
            func_0010A4D0(D_001BD888[0], 0, 0);
        }
    }
    D_001BB6C4[0] = D_010CE3A0[idx];
    func_0010B378(D_010CE390[idx], D_001BB720);
    func_0013BBD0();
    if (D_001BB6B4[0] != 0) func_00136CC8(idx);
}
