extern u8 D_007D8110[]; extern u8 D_007D8F20[];
void func_0024CD38(void*,void*,void*,f32,f32); void func_0024CC10(s32,f32,f32);
void func_0024D708(s32 id,f32 scale){
 f32 local[4]; s32 i; u8 *base; u8 *entry;
 if(id==-1)return;
 if(!(id&0x8000))return;
 id &= 0xff;
 base=D_007D8110+id*0x4c;
 *(f32*)(base+0x40)=scale;
 for(i=0;i<43;i++){
  entry=D_007D8F20+i*0x14;
  if((*(u16*)(entry+4)&4)&&*(s16*)(entry+6)==id){
   f32 m=scale*(*(f32*)(entry+0x10));
   *(u64*)local=*(u64*)(base+0x2c);
   *(s32*)((u8*)local+8)=*(s32*)(base+0x34);
   func_0024CD38(local,base,local+1,*(f32*)(base+0x44),*(f32*)(base+0x48));
   local[0]*=m;local[1]*=m;
   if(local[0]<0)local[0]=0;
   if(local[1]<0)local[1]=0;
   func_0024CC10(i,local[0],local[1]);
  }
 }
}
