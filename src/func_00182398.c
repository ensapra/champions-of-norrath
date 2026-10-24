extern u8 D_004CD840[];
extern u8 D_001D2340[];
extern s32 D_001D2180[4];
void func_001A2850(void *, ...);
void func_0017FDE4(s32, s32, s32, s32);
void func_0017FCEC(s32, s32);
void func_0017FF74(s32, s32, s32);
s32 func_00182310(void) {
 func_001A2850(D_004CD840);
 return 1;
}
void func_00182398(s32 a, s32 b, s32 c, s32 d) {
 func_0017FDE4(D_001D2340[0x420], D_001D2340[0x421], D_001D2340[0x422], D_001D2340[0x423]);
 func_0017FCEC(c, d - D_001D2180[0]);
 func_0017FF74(b, a, 0xC0000);
}
