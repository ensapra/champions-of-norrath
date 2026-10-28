extern s32 func_001B34C0(void *, void *);
extern s32 func_0011BA18(s32);
extern void func_00114948(s32, s32, s32, s32, void *, s32);
extern void ovl_ntgui2_func_00129130(s32);
extern void func_00128FA0(void),func_00129020(void);
extern s32 D_001C4D7C[],D_001BB6C4[];
extern u8 D_004CA250[],D_004CA260[];
void func_001292B0(s32 arg0) {
 s32 buf[16]; int new_var=0xFA; s32 r; s32 new_var2;
 if(arg0>=0) {
 if(D_001C4D7C[0]==1) r=func_001B34C0(D_004CA250,buf);
 else r=func_001B34C0(D_004CA260,buf);
 if(r>=0 && buf[0]>0) { new_var2=D_001C4D7C[0]; if (buf[0]&0x20) {
 func_00114948(1,0x1F4,0xFA,func_0011BA18(new_var2+0x87),func_00129020,D_001BB6C4[0]); return;
 }}
 ovl_ntgui2_func_00129130(arg0); return;
 }
 func_00114948(2,0x1F4,new_var,func_0011BA18(D_001C4D7C[0]+0x4B),func_00128FA0,D_001BB6C4[0]);
}
