extern s32 func_002D2CA8(s32); extern s32 func_002D3040(s32,s32,u16); extern void func_002D1F38(s32,s32); extern s32 D_004844D0;
void func_00191430(void *p) {
s32 r=func_002D2CA8(2), t=*(s32*)((u8*)p+0x10);
*(volatile u16*)((t|0x20000000)+0x14)=(u16)(D_004844D0>>8);
u16 n=*(u16*)((u8*)p+6);
func_002D3040(r,t,n);
func_002D1F38(0,0);
}
