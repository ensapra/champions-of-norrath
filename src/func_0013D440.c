extern s32 D_010CFB40[];
extern s32 D_010CFB44[];
extern s32 D_010CFB48[];
void func_0013D430(s32 a) { D_010CFB48[0] = a; }
void func_0013D440(s32 a) { D_010CFB40[0] = a; }
void func_0013D450(s32 a) { D_010CFB44[0] = a; }

typedef struct { s64 a; s32 id; s32 pad; s32 busy; } IntcState;
extern u8 jtbl_004C006C[];
s32 RemoveIntcHandler(s32, s32);
void func_001AE200(s32);
s32 func_001B5C80(void);
void func_001B5CD8(void);
void func_001B6550(s32);
void func_001B6560(s32);

s32 func_001B66D8(void) {
    IntcState *s = (IntcState *)(jtbl_004C006C + 0x4EE4);
    s32 en;
    if (s->id < 0) return 0x80008001;
    if (s->busy != 0) return 0x80000010;
    en = func_001B5C80();
    if (RemoveIntcHandler(0xB, s->id) == 0) {
        func_001AE200(0xB);
        func_001B6560(0xC00);
        func_001B6550(0);
    }
    s->a = 0;
    s->id = -1;
    if (en) func_001B5CD8();
    return 0;
}
