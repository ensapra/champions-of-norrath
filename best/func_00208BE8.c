extern void ovl_ntgui2_func_00108E58(s32,void*,s16,s32,s32,f32);
extern void func_00194390(void*,void*,void*,s32,s32); extern void func_00143830(void*);
extern f32 D_00481364,D_00481368; extern u8 D_00448B90[];
void func_00208BE8(void *o,void *p,void *q,s16 a3,s32 a4) {
 u32 tmp[3]; __builtin_memcpy(tmp,q,12);
 ovl_ntgui2_func_00108E58(*(s32*)((u8*)q+8),tmp,a3,0,0,D_00481364);
 *(f32*)((u8*)o+0xA8)=D_00481368; *(f32*)((u8*)o+0xB0)=100.0f; *(f32*)((u8*)o+0x1C)=5.0f;
 s32 t=*(s32*)((u8*)o+0x328); *(u32*)((u8*)o+0x48)=(u32)D_00448B90;
 *(s32*)((u8*)o+0x3C0)=t; *(s32*)((u8*)o+0x3C4)=t+a4;
 *(f32*)((u8*)o+0x1C)=*(f32*)((u8*)p+0x1C)+10.0f;
 void *dest=(u8*)o+0x3C8; *(s32*)dest=0; *(s32*)((u8*)o+0xC)|=1;
 func_00194390(dest,p,p,t,(s32)dest); func_00143830(o);
}
