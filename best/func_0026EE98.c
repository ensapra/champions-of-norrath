s32 D_00484538,D_00484F48,D_00484F44; s8 D_00483829,D_00484B01,D_00485BDE; f32 D_0048214C,D_00482150;
extern u8 D_00408600[];
s32 func_001353A8(s32);
void func_0026EE98(void *object,void *out) {
 u8 scratch[0x70]; u8 *o=object,*entry; s32 i,idx,ptr,mode,found; f32 z;
 for(i=0;i<D_00484538;i++) {
   if(func_001353A8(i)) {
     entry=D_00408600+i*0x5DB0;
     if(*(f32*)(entry+0xAC)!=0.0f && *(s32*)(entry+0x5570)!=0) break;
   }
 }
 if(D_00484F48) { ptr=*(s32*)(o+0x64); if(ptr==0)return; }
 if(D_00483829) {
   idx=(s8)o[0x161];
   if(!D_00484F44 && *(s16*)((u8*)0x00400000+idx*2)==0)return;
   entry=D_00408600+idx*0x5DB0;
   ptr=*(s32*)(entry+0x5570);
   if(ptr) {
     D_00484B01=1;
     *(f32*)out=*(f32*)(ptr+0x10);
     *(f32*)((u8*)out+4)=*(f32*)(ptr+0x14);
     *(f32*)((u8*)out+8)=*(f32*)(ptr+0x18)+*(f32*)(o+0xFC);
   }
 } else {
   *(f32*)out=0.0f;*(f32*)((u8*)out+4)=0.0f;*(f32*)((u8*)out+8)=0.0f;
 }
 (void)scratch;(void)mode;(void)found;(void)z;
}
