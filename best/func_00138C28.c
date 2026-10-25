extern char D_00408600[];
extern u32 D_00484F44;
extern f32 D_0047FC8C;
void func_00138758(s32, void*);
void func_00138900(void*, s32);
void *func_00143A58(void*);
s32 func_00138C28(void *arg1) {
 s32 spA0;
 s32 *p;
 f32 best=D_0047FC8C;
 s32 n;
 s32 i;
 void *q;
 func_00138758(*(s32*)((char*)arg1+4),&spA0);
 func_00138900((void*)&spA0,spA0);
 q=func_00143A58(&spA0);
 n=D_00484F44;
 if(n>0){
  i=n; p=(s32*)(D_00408600+0x5570);
  do{
   s32 *entry=(s32*)*p;
   p=(s32*)((char*)p+0x5DB0);
   if(entry){
    f32 *pos=(f32*)((char*)entry+0x10);
    f32 *loc=(f32*)((char*)q+0x10);
    f32 dx=pos[0]-loc[0],dy=pos[1]-loc[1],dz=pos[2]-loc[2];
    f32 d=dx*dx+dy*dy+dz*dz;
    if(d<best) best=d;
   }
   i--;
  }while(i!=0);
 }
 return (s32)best;
}
