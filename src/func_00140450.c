extern u8 jtbl_004C006C[];
typedef struct { s32 a; s32 flags; s32 c; s32 d; } Ent;
extern Ent D_0110AD00[];
extern s32 WaitSema(s32);
extern s32 SignalSema(s32);
extern void func_001B0FD8(void);
extern void func_001403C8(void);
extern s32 func_001403D8(void);
extern s32 func_001403F8(void);
extern void func_00140F48(s32);
extern void *func_001A2660(void *, s32, s32);
extern void func_001A42B8(void *, void *);
extern u8 D_010D4340[];
extern s32 D_010D2340[];
extern u8 func_001C6788[];

Ent *func_001B1038(void) {
    Ent *e;
    func_001B0FD8();
    WaitSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
    for (e = D_0110AD00; e < D_0110AD00 + 32; e++) {
        if (e->flags == 0) {
            e->flags = 0x10000000;
            SignalSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
            return e;
        }
    }
    SignalSema(*(s32 *)(jtbl_004C006C + 0x3F3C));
    return 0;
}

void func_00140460(void) {
    if (func_001403D8() == 0 && func_001403F8() == -1) {
        func_00140F48(-1);
        return;
    }
    if (func_001403F8() != -1) {
        *(s32 *)(func_001C6788 + 0xE4) = func_001403F8();
        func_001403C8();
    }
}

void *func_00140450(void) {
    return D_010D4340;
}

s32 func_001403F8(void) {
    func_001A2660(D_010D4340, 0, 0x100);
    func_001A42B8(D_010D4340, (u8 *)D_010D2340 + 0x30);
    return D_010D2340[0];
}
