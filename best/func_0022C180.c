extern u32 func_00153FA8(void);
void func_0022C180(s32 *arg0) {
    u32 m = arg0[0x3CC / 4];
    if (m == 0 || m == 1) {
        arg0[0x3DC / 4] = (func_00153FA8() % 3) + 5;
    } else if (m == 3) {
        arg0[0x3DC / 4] = (u16)(func_00153FA8() % m) + 5;
    } else if (m == 2) {
        arg0[0x3DC / 4] = (func_00153FA8() % 3) + 5;
    } else if (m == 4) {
        arg0[0x3DC / 4] = 3;
    } else if (m == 5) {
        arg0[0x3DC / 4] = 2;
    }
}
