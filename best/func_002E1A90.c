extern s32 SignalSema_2(s32);
extern s32 PollSema_2(s32);
extern s32 func_002D7858(void *, s32);
extern s32 func_002D8270(void *, s32, s32, void *, s32, void *, s32, void *, s32);
extern s32 func_00305118(void *, s8 *, s32);
extern s32 D_00446070[];
extern s32 D_00446074[];
typedef struct { u8 pad[0x24]; s32 init; } Ctl;
extern Ctl D_008E6B40;
extern u8 D_008E6BF0[];
extern u8 D_008E7100[];
extern u8 D_008E8100[];
extern u8 func_002E1A00[];
s32 func_002E1A90(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
 s32 r;
 if (D_008E6B40.init == 0) return -0x64;
 if (PollSema_2(D_00446074[0]) < 0) return -0xC8;
 if (arg2 == 0 || *arg2 == 0) { SignalSema_2(D_00446074[0]); return -0xD2; }
 *(s32 *)D_008E6BF0 = arg0;
 *(u8 **)(D_008E6BF0 + 0x10) = D_008E7100;
 *(s32 *)(D_008E6BF0 + 4) = arg1;
 func_00305118(D_008E6BF0 + 0x14, arg2, 0x3FF);
 D_008E6BF0[0x413] = 0;
 func_002D7858(D_008E7100, 0x400);
 r = func_002D8270(&D_008E6B40, 0xC, 1, D_008E6BF0, 0x414, D_008E8100, 4, func_002E1A00, arg3);
 if (r == 0) D_00446070[0] = 0xC; else SignalSema_2(D_00446074[0]);
 return r;
}
