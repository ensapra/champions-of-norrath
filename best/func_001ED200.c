f32 D_00480C44,D_00480C48;
s32 func_001129F0(void *); u32 func_00153FA8(void *);
s32 func_00160128(void *,s32,s32,f32);
s32 func_00160010(void *,s32,s32,void *,f32,f32);
void func_001ED200(void *p, u32 mode) {
 if (func_001129F0(p)) return;
 volatile s32 scratch1 = mode; (void)scratch1; switch(mode) {
 case 0: { u8 *q=*(u8 **)((u8*)p+0x24);
 if (*(s16*)((u8*)p+0x23c)==13) {
 func_00160128((u8*)p+0x120,*(s32*)(q+0x54),3,0.5f);
 func_00160010((u8*)p+0x120,*(s32*)(q+0x6c),0x20,0,D_00480C44,0.0f);
 } else func_00160128((u8*)p+0x120,*(s32*)(q+0x54),3,D_00480C48);
 *(s32*)((u8*)p+0x100)=*(s32*)((u8*)p+0x328)+func_00153FA8(p)%120; break; }
 case 1: case 3: case 5: case 6: case 8: case 9: case 10: case 14: case 15: break;
 }
}
