extern s32 D_00484F44; extern s32 D_0042A3E8[]; extern char D_00408600[];
struct ObjSlot{char pad[0x5570];char *obj;};
s32 func_001353A8(s32);
void func_00215570(char *a){
 s32 near=0,flag=0,hit=0,i=0,d;
 a[0xC8]=0;a[0xC7]=0;a[0xC9]=0;
 for(;i<D_00484F44;i++){
  s32 id=D_0042A3E8[i];
  char *o=((struct ObjSlot*)(D_00408600+id*0x5DB0))->obj;
  f32 *p;f32 dx,dy,dz;f32 *pos=(f32*)(a+0x10);
  if(o){ if(*(u32*)(o+0xC)&0x400000) flag=1; }
  p=(f32*)(o+0x10);
  dx=p[0]-pos[0];dy=p[1]-pos[1];dz=p[2]-pos[2];
  d=(s32)(dx*dx+dy*dy+dz*dz);
  if(d<0x3840){
   if(func_001353A8(id)) a[0xC9]=1;
   a[0xC8]++; hit++;
  }
  near+=(d<0x57E4);
 }
 if(!a[0xC6]&&!near) a[0xC6]=1;
 a[0xC7]=hit;
 if((s8)hit&&flag) a[0xC7]=-1;
}
