extern u8 func_001D1C80[];
s32 func_0018B078(s32, void *);
s32 func_00192708(void *);
void *D_00480430;
void func_00181794(void) {
    func_00192708(D_00480430 + 0xD0);
    *(f32 *)(D_00480430 + 0x100) = 1728.0f;
    *(f32 *)(D_00480430 + 0x104) = 1824.0f;
    func_0018B078(*(s32 *)(D_00480430 + 4), D_00480430 + 0xD0);
}
s32 func_0017FEFC(u8, u8, u8, u8);
void func_001818D8(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    func_0017FEFC(p[0x418], p[0x419], p[0x41A], p[0x41B]);
}
void func_0017FEC4(s32, u8, u8, u8, u8);
void func_00181908(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    func_0017FEC4(0, p[0x424], p[0x425], p[0x426], p[0x427]);
    func_0017FEC4(1, p[0x428], p[0x429], p[0x42A], p[0x42B]);
    func_0017FEC4(2, p[0x42C], p[0x42D], p[0x42E], p[0x42F]);
    func_0017FEC4(3, p[0x430], p[0x431], p[0x432], p[0x433]);
}
void func_00181988(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    func_0017FEC4(0, p[0x434], p[0x435], p[0x436], p[0x437]);
    func_0017FEC4(1, p[0x438], p[0x439], p[0x43A], p[0x43B]);
    func_0017FEC4(2, p[0x43C], p[0x43D], p[0x43E], p[0x43F]);
    func_0017FEC4(3, p[0x440], p[0x441], p[0x442], p[0x443]);
}
