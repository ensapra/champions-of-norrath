typedef unsigned char u8; typedef int s32;
void func_0016BC44(void*,s32,s32,s32,s32,s32,s32,s32,void*,void*);
void func_0016BF68(void*,s32,s32,s32,s32,s32,s32,s32,void*,void*);
void func_0016C360(void*,s32,s32,s32,s32,s32,s32,s32,void*,void*);
void func_0016C790(void*,s32,s32,s32,s32,s32,s32,s32,void*,void*);
void func_0014C25C(s32,s32,s32,s32,s32,s32,s32,void*);
void func_001688E4(u8 *o) {
 u8 a[0x240],b[0x240],c[0x240]; volatile u8 pad[0x20];
 u8 *base=o+0x910; s32 pitch=*(s32*)(o+0x5ac);
 s32 w=*(s32*)(base+0x55a0), h=*(s32*)(base+0x55a4), z=*(s32*)(base+0x55a8);
 s32 mode=*(s32*)(o+0x5ec0), lim=*(s32*)(o+0x5ea0), q=*(s32*)(base+0x55ac);
 s32 x=w+h, y=0;
 if (mode==1) func_0016BF68(o,0,w,h,pitch,lim,q,x,a,c);
 else if (mode<2) { if(mode==0) func_0016BC44(o,0,w,h,pitch,lim,q,x,a,c); }
 else if(mode==2) func_0016C360(o,0,w,h,pitch,lim,q,x,a,c);
 else if(mode==3) func_0016C790(o,0,w,h,pitch,lim,q,x,a,c);
 
 for(y=0;y<0x12;y++) {
  u16 u=*(u16*)(o+0x5c0+y*4), v=*(u16*)(o+0x5c2+y*4);
  func_0014C25C(*(s32*)(o+0x4dc),*(s32*)(o+0x4e0),u,v,lim,pitch,0,a+y*0x20);
  a[y*0x20+3]=(u8)(*(s32*)(o+0x618)*a[y*0x20+3]/255);
  func_0014C25C(*(s32*)(o+0x4dc),*(s32*)(o+0x4e0),u,v,lim,pitch,0,b+y*0x20);
  b[y*0x20+3]=(u8)(*(s32*)(o+0x618)*b[y*0x20+3]/255);
  func_0014C25C(*(s32*)(o+0x4dc),*(s32*)(o+0x4e0),u,v,lim,pitch,0,c+y*0x20);
  c[y*0x20+3]=(u8)(*(s32*)(o+0x618)*c[y*0x20+3]/255);
 }
}
