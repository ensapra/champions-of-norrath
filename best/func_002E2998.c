typedef struct { u8 p[0x24]; u8 name[0x100]; void *self; s32 arg; } Buf;
typedef struct { u8 b[36]; } __attribute__((packed)) Rec;
typedef struct { s32 lsn; s32 size; char name[16]; u8 rest[12]; } __attribute__((packed)) Res;
extern s32 D_004460A8[];
extern s32 D_0044609C[];
extern s32 D_00446090[];
extern s32 D_004460C4[];
extern s32 D_008E8158[];
extern char D_008E8160[];
extern Buf D_008E81C0;
extern char D_008E81E4[];
extern u8 D_008E8300[];
extern s32 D_008E8340[];
extern char D_0047BAA8[], D_0047BAC8[], D_0047BAE0[], D_0047BAF0[], D_0047BB00[];
extern s32 PollSema_2(s32);
extern void ReferThreadStatus_2(s32, void *);
extern void SignalSema_2(s32);
extern void func_002D70D0(char *, ...);
extern void func_002D7858(void *, s32);
extern void func_002D7908(s32);
extern s32 func_002D80A0(void *, s32, s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, s32, s32);
extern void func_002E26F0(void);
extern s32 func_002E2ED8(s32);

s32 func_002E2998(Res *out, u8 *name, s32 arg2) {
    s32 i, c;
    s32 r;
    func_002E26F0();
    if (D_004460A8[0] != PollSema_2(D_004460A8[0])) return 0;
    D_0044609C[0] = 1;
    ReferThreadStatus_2(D_008E8158[0], D_008E8160);
    if (func_002E2ED8(1) != 0) {
        SignalSema_2(D_004460A8[0]);
        return 0;
    }
    func_002D7908(0);
    if (D_004460C4[0] < 0) {
        for (;;) {
            if (func_002D80A0(D_008E8340, 0x80000597, 0) < 0) {
                i = 0xFFFFF;
                if (D_00446090[0] > 0) {
                    func_002D70D0(D_0047BAA8);
                    i = 0x100000;
                }
                while (i != -1) i--;
                continue;
            }
            if (D_008E8340[0x24 / 4] == 0) {
                i = 0xFFFFF;
                while (i != -1) i--;
                continue;
            }
            break;
        }
        D_004460C4[0] = 0;
    }
    c = name[0];
    D_008E81C0.p[0x24 - 0x24] = 0;
    D_008E81C0.name[0] = c;
    i = 0;
    if (c != 0) {
        for (i = 1; i < 0x100; i++) {
            c = name[i];
            D_008E81C0.name[i] = c;
            if (c == 0) break;
        }
    }
    if (i == 0x100) D_008E81C0.name[0xFF] = 0;
    if (D_00446090[0] > 0) func_002D70D0(D_0047BAC8, D_008E81E4);
    D_008E81C0.arg = arg2;
    D_008E81C0.self = &D_008E81C0;
    func_002D7858(&D_008E81C0, 0x12C);
    if (func_002D8270(D_008E8340, 0, 0, &D_008E81C0, 0x12C, D_008E8300, 4, 0, 0) < 0) {
        SignalSema_2(D_004460A8[0]);
        return 0;
    }
    *(Rec *)out = *(Rec *)((u32)&D_008E81C0 | 0x20000000);
    if (D_00446090[0] > 0) {
        func_002D70D0(D_0047BAE0, out->name);
        if (D_00446090[0] > 0) {
            func_002D70D0(D_0047BAF0, out->size);
            if (D_00446090[0] > 0) func_002D70D0(D_0047BB00, out->lsn);
        }
    }
    r = *(s32 *)((u32)D_008E8300 | 0x20000000);
    SignalSema_2(D_004460A8[0]);
    return r;
}
