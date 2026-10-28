extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, s32, s32);
extern void func_00118140(void *, s32, void *, void *, void *);
extern void func_00118160(void *);
extern void func_00146B78(s32);
extern void func_001471D0(void);
extern void func_0013D460(void), func_0013D498(void), func_0013D768(void);
extern s32 D_001BB6C4[];
extern s32 D_001C6898[];
extern volatile s32 D_001C6890[];
void func_001466E0(s32 a) {
 s32 buf[8]; s32 id;
 if (a < 0) {
 id = 0x51; if (!D_001C6890[0]) id = 0x4E;
 func_00114948(2, 500, 250, func_0011BA18(id), (s32)func_001471D0, D_001BB6C4[0]); return;
 }
 func_00114948(4, 500, 250, func_0011BA18(0x38), 0, D_001BB6C4[0]);
 if (D_001C6898[0]) { func_00146B78(0); return; }
 func_00118140(buf, 1, func_0013D460, func_0013D498, func_0013D768);
 buf[2] = (s32)func_00146B78; func_00118160(buf);
}
