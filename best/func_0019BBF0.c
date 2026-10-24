s32 func_0019C200(void *);
extern u8 D_00366310[];
s32 func_0019BBF0(void) {
    if (func_0019C200(D_00366310) != 0) return 0;
    return func_0019C200(D_00366310 + 0x824) == 0;
}

extern u8 D_003642D0;
extern void *D_004804D0;
s32 func_0019BC38(u32 a) {
    if (a < 0xB) {
        if (D_003642D0 == 0) {
            void *p = D_004804D0;
            p = *(void **)((u8 *)p + 0x6C);
            ((s32 (*)(s32))p)(0x8001);
        }
        return 0;
    }
    return 1;
}

extern u8 D_00367374[];
void *func_001A24AC(void *, s32, s32);
void func_0019BCB0(u8 *buf) {
    u8 *b = D_00367374 - 0x30A4;
    func_001A24AC(buf, 0, *(s32 *)(b + 0x308C));
    buf[*(s32 *)(b + 0x308C)] = 0;
}
