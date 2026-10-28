extern s32 D_00446090[], D_00446094[], D_004460A0[], D_004460B4[], D_004460D8[], D_004460DC[];
extern void (*D_008E8140[])(s32);
extern s32 D_008E8144[], D_008E8154[];
extern char D_0047BA80[];
s32 WaitSema_2(s32);
void ExitDeleteThread_2(void);
void func_002D70D0(const char *, ...);
void func_002E2498(void) {
 for (;;) {
 WaitSema_2(D_004460A0[0]);
 if (D_004460D8[0] == -1) { D_004460B4[0]=0; D_004460D8[0]=0; D_00446094[0]=0; D_008E8154[0]=0; ExitDeleteThread_2(); }
 if (D_00446090[0]>0) func_002D70D0(D_0047BA80,D_008E8140[0],D_004460DC[0]);
 if (D_008E8140[0] && D_004460DC[0]) D_008E8140[0](D_004460DC[0]);
 D_004460B4[0]=0;
 }
}
