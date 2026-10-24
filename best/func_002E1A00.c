extern s32 iSignalSema_2(s32);
extern s32 D_00446078[];
extern u8 D_008E7100[];
extern s32 func_00304CFC(u32);
extern void func_00301FFC(void *, void *, u32);

void func_002E1A00(s32 arg0) {
    u8 *buf = (u8 *)arg0;
    u32 src;
    u32 len;
    if (buf != 0) {
        src = (u32)D_008E7100 | 0x20000000;
        len = func_00304CFC(src);
        if (len < 0x400) {
            len = func_00304CFC(src);
        } else {
            len = 0x3FF;
        }
        func_00301FFC(buf, (void *)((u32)D_008E7100 | 0x20000000), len);
        buf[len] = 0;
    }
    iSignalSema_2(D_00446078[0]);
}
