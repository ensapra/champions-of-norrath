extern s32 func_0010EBF8(void *,s32);extern void func_0010A428(void*,s32);extern void func_00111830(void*,f32);
void func_002337B0(void *p){s32 x=func_0010EBF8(p,*(s32*)(*(u8**)((u8*)p+0x24)+0xC));if(x==0){func_0010A428(p,0x258);func_00111830(p,1.0f);*(volatile s32*)((u8*)p+0x24)=0;}}
