extern s32 func_00180D78(void *,s32,s32,s32,s32,s32,s32,s32,f32,f32,f32,s32,s32,s32,s32,s32);
extern f32 D_004825F8,D_004825FC;
extern char D_008D6320[80],D_008D6370[80];
void func_0028D720(s32 a,s32 b) {
 volatile s32 saved=a;
 if (b != 0xffff) return;
 if (saved != 1) return;
 func_00180D78(D_008D6320,164,148,343,90,111,117,216,6.0f,3.0f,D_004825F8,0,0,saved,4,0);
 if (saved != 1) return;
 func_00180D78(D_008D6370,111,112,154,80,33,30,28,8.0f,75.0f,D_004825FC,0,2,0,6,0);
}
