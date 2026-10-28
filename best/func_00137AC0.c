void func_0011E420(s32,s32); void func_0011CEF0(s32,s32,s32); s32 func_00141300(s32,s32,s32,s32,s32,s32,s32,s32);
void func_0010BA78(void); void func_0010C7E8(s32,s32,s32,s32); s32 func_0011BA18(s32); void func_00139550(s32,s32); void func_001411F8(void);
typedef struct { s32 a0, a4; void *a8; char pad[0x14]; } Tmp;
void func_00118140(Tmp *, s32, void *, void *, void *); void func_00118160(Tmp *);
extern void func_0013EED0(void), func_0013EEF8(void), func_0013F0F0(void), func_001379A8(void);
extern s32 D_010CE3F8[], D_010CE3FC[], func_001C6788[];
void func_00137AC0(s32 x) {
    Tmp t;
    func_0011E420(0, 0);
    func_0011CEF0(D_010CE3F8[0], x, 0x15);
    if (x >= 0) {
        if (x < 7) {
            D_010CE3FC[0] = func_00141300(D_010CE3F8[0], 0, 0x82, 0x3A, 0x190, 8, 0, 0);
            switch (*(s32 *)((char *)func_001C6788 + 0x7C)) {
            case 2:
                func_0010BA78();
                break;
            case 1:
            case 3:
                func_00118140(&t, 1, func_0013EED0, func_0013EEF8, func_0013F0F0);
                t.a8 = func_001379A8;
                func_00118160(&t);
                break;
            }
            func_00139550(0, 0x14);
            func_0010C7E8(0, func_0011BA18(2), 0, 0);
        } else if (x < 14) {
            func_001411F8();
            func_00139550(0xFF, 0x14);
        }
    }
}
