/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_0019800C();                            /* extern */
M2C_UNK func_001A1568(void *, M2C_UNK, void *);     /* extern */
M2C_UNK func_001A2660(void *, M2C_UNK, M2C_UNK);    /* extern */
extern void *D_00480488;
extern M2C_UNK huffmanTemp;
extern M2C_UNK jtbl_004C006C;
extern M2C_UNK packetBuffer;
extern M2C_UNK xmlCreatePushParserCtxt;

s32 func_00196E24(void *arg0) {
    s32 temp_4;
    s32 temp_5;
    s32 var_21;
    void *temp_2;
    void *temp_3;

    if (arg0 == NULL) {
        func_001A1568(&jtbl_004C006C + 0xEFD4, 0x82, &jtbl_004C006C + 0xEFE4);
    }
    func_001A2660(&xmlCreatePushParserCtxt + 0x138, 0, 0xB00);
    func_001A2660(&huffmanTemp + 0xE590, 0, 0x24);
    D_00480488 = arg0;
    temp_2 = &huffmanTemp + 0xE4C8;
    M2C_FIELD(&huffmanTemp, void **, 0xE4C8) = (void *) (&huffmanTemp + 0x21680);
    M2C_FIELD(temp_2, void **, 0x88) = (void *) (&packetBuffer + 0x34020);
    var_21 = 0;
    M2C_FIELD(temp_2, void **, 8) = (void *) (&packetBuffer + 0x920);
    M2C_FIELD(temp_2, void **, 0x10) = (void *) (&huffmanTemp + 0x19500);
    M2C_FIELD(temp_2, void **, 0x18) = (void *) (&packetBuffer + 0x9AA0);
    M2C_FIELD(temp_2, void **, 0x20) = (void *) (&packetBuffer + 0xB2A0);
    M2C_FIELD(temp_2, void **, 0x28) = (void *) (&packetBuffer + 0xF3A0);
    M2C_FIELD(temp_2, void **, 0x30) = (void *) (&packetBuffer + 0x65420);
    M2C_FIELD(temp_2, void **, 0x38) = (void *) (&packetBuffer + 0x5DFA0);
    M2C_FIELD(temp_2, void **, 0x40) = (void *) (&packetBuffer + 0x25720);
    M2C_FIELD(temp_2, void **, 0x48) = (void *) (&packetBuffer + 0x56B20);
    M2C_FIELD(temp_2, void **, 0x50) = (void *) (&packetBuffer + 0x2CBA0);
    M2C_FIELD(temp_2, void **, 0x58) = (void *) (&packetBuffer + 0x3C020);
    M2C_FIELD(temp_2, void **, 0x60) = (void *) (&packetBuffer + 0x1E2A0);
    M2C_FIELD(temp_2, void **, 0x68) = (void *) (&packetBuffer + 0x473A0);
    M2C_FIELD(temp_2, void **, 0x70) = (void *) (&packetBuffer + 0x16E20);
    M2C_FIELD(temp_2, void **, 0x78) = (void *) (&packetBuffer + 0x434A0);
    M2C_FIELD(temp_2, void **, 0x80) = (void *) (&packetBuffer + 0x4E820);
    do {
        temp_3 = &xmlCreatePushParserCtxt + 0x140;
        temp_5 = *(&huffmanTemp + 0xE558 + (var_21 * 4));
        temp_4 = var_21 << 6;
        var_21 += 1;
        M2C_FIELD(D_00480488, M2C_UNK (**)(void *, s32), 0x110)(temp_4 + temp_3, temp_5);
    } while (var_21 < 5);
    M2C_FIELD(D_00480488, M2C_UNK (**)(void *, s32), 0x110)(temp_3 + 0x140, *(&huffmanTemp + 0xE570 + (M2C_FIELD(D_00480488, u16 *, 0xC0) * 4)));
    func_0019800C();
    return 0;
}
