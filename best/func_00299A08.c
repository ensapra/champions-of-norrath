typedef struct { f32 x,y,z; } Arg12;
s8 D_00483829;
s32 D_004844C0,D_004844A4;
f32 D_00482834,D_00482838,D_0048283C,D_00482840,D_00482844,D_00482848;
s32 func_001353D8(s32); s32 func_001A7C28(s32,f32);
void func_00299A08(void *self, Arg12 arg, s32 mode) {
 u8 scratch[0xF0]; u8 *p=(u8*)self; s16 smode=(s16)mode; s32 obj,flags,value; f32 *v;
 if(D_00483829) obj=func_001353D8(*(s32*)(p+0xC)); else obj=0;
 flags=func_001A7C28(*(s32*)(p+0xC),1.0f);
 if(flags&1) {
   *(f32*)(p+0x68)-=D_00482834;
   v=(f32*)(*(s32*)(p+0x78));
   value=*(s32*)((u8*)v+4);
   v[5]+=D_00482834;
   if((f32)value*D_00482838 < v[5]) v[5]-=(f32)value*D_00482838;
 }
 if(flags&4) *(s32*)(p+0x60)=1;
 if((D_004844C0&0x100)!=0) value=(s32)D_00482840; else value=(s32)D_0048283C;
 if((*(u16*)((u8*)obj+0x126)&0x30)==0) {
   if(self&&smode) { s32 (*fn)(void*)=*(s32(**)(void*))(*(s32*)(p+0x14)+0x8); fn(self); }
 }
 (void)scratch;(void)arg;
}
