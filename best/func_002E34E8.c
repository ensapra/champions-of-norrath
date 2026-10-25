extern s32 D_00446090[];
extern s32 D_004460AC[];
extern s32 D_004460C8[];
extern u8 D_00447280[];
extern char D_0047BBE8[];
extern char D_0047BC00[];
extern char D_0047BC20[];
extern s32 D_008E8390[];
extern s32 D_008E83D0[];
s32 PollSema_2(s32);
s32 SignalSema_2(s32);
void func_002D70D0(char *);
void func_002D7858(void *, s32);
void func_002D7908(s32);
s32 func_002D80A0(void *, s32, s32);
s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
void func_002E26F0(void);
s32 func_002E2F78(s32);

s32 func_002E34E8(s32 arg0) {
    s32 r;
    s32 i;
    s32 buf[20];
    if (D_00446090[0] > 0) func_002D70D0(D_0047BBE8);
    func_002E26F0();
    r = 6;
    if (D_004460AC[0] == PollSema_2(D_004460AC[0])) {
        if (func_002E2F78(1) == 0) {
            func_002D7908(0);
            if (D_004460C8[0] < 0) {
loop:
                if (func_002D80A0(D_008E8390, 0x8000059A, 0) < 0) {
                    i = 0xFFFFF;
                    if (D_00446090[0] > 0) {
                        func_002D70D0(D_0047BC00);
                        i = 0x100000;
                    }
                    do { i--; } while (i != -1);
                    goto loop;
                }
                i = 0xFFFFF;
                if (D_008E8390[9] == 0) {
                    do { i--; } while (i != -1);
                    goto loop;
                }
                D_004460C8[0] = 0;
            }
            D_008E83D0[0] = arg0;
            func_002D7858(D_008E83D0, 4);
            if (func_002D8270(D_008E8390, 0, 0, D_008E83D0, 4, D_00447280, 4, 0, 0) >= 0) {
                if (D_00446090[0] > 0) func_002D70D0(D_0047BC20);
                r = *(s32 *)((u32)D_00447280 | 0x20000000);
                SignalSema_2(D_004460AC[0]);
                return r;
            }
        }
        SignalSema_2(D_004460AC[0]);
        return arg0 == 8 ? -1 : 6;
    }
    return r;
}
