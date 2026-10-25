extern s32 D_001BB6C4[];
extern s32 D_010C2A50[];
extern char D_004C75D8[];
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *);
s32 func_0011BA18(s32);
void func_00114948(s32, s32, s32, s32, s32, s32);
s32 func_0013B6F0(void *, s32);
void func_0013D2C8(void);
void func_0013D2F0(void);
void func_0013D3B0(void);
void func_00110890(void);

void func_00110908(s32 a) {
    u8 buf[0x20];
    if (a < 0) return;
    switch (a) {
    case 0:
    case 1:
        switch (func_0013B6F0(D_004C75D8, -1)) {
        case 1:
            func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x24), 0, D_001BB6C4[0]);
            break;
        case 2:
            func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x25), 0, D_001BB6C4[0]);
            break;
        case 3:
            func_00114948(4, 0x1F4, 0xFA, func_0011BA18(0x26), 0, D_001BB6C4[0]);
            break;
        }
        func_00118140(buf, 1, func_0013D2C8, func_0013D2F0, func_0013D3B0);
        *(s32 *)(buf + 8) = (s32)func_00110890;
        func_00118160(buf);
        break;
    case 2:
        switch (func_0013B6F0(D_004C75D8, -1)) {
        case 1:
            func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x1B), D_010C2A50[0], D_001BB6C4[0]);
            break;
        case 2:
            func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x1C), D_010C2A50[0], D_001BB6C4[0]);
            break;
        case 3:
            func_00114948(0, 0x1F4, 0xFA, func_0011BA18(0x1D), D_010C2A50[0], D_001BB6C4[0]);
            break;
        }
        break;
    }
}
