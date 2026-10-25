typedef struct { u32 w[16]; } Desc;
typedef struct { u64 pad0[4]; s32 stride; s32 pad24[2]; s32 count; s32 pad34[2]; s32 value40; s32 pad44; s32 pad48; s32 loops; } Obj;
typedef struct { u8 pad[0xC374]; u64 q[2]; } Tab;
extern Tab jtbl_004C006C;
extern void func_001768A8(Obj*,u32**,s32*,s32,s32,s32);
void *func_001769F8(Obj *a,Desc *d,s32 count,s32 q) {
 u64 v0=jtbl_004C006C.q[0],v1=jtbl_004C006C.q[1];
 u32 *d1=(u32*)((char*)d+0x10),*d2=(u32*)((char*)d+0x20),*end;
 s32 step=a->value40+0x10,i=0;
 a->stride=count*4; a->count=count;
 d->w[0]=0x30000004; d->w[1]=(u32)a&0x7fffffff; d->w[2]=0; d->w[3]=0x6C040008;
 d1[0]=0x10000000; d1[1]=0; d1[2]=0x14000000; d1[3]=0x11000000;
 d2[0]=0x10000001; d2[1]=0; d2[2]=0x01000101; d2[3]=0x30000000;
 *(u64*)((char*)d+0x30)=v0; *(u64*)((char*)d+0x38)=v1;
 end=(u32*)((char*)d+0x40);
 while(i<a->loops) { func_001768A8(a,&end,&step,count,0,q); i++; }
 end[0]=0x60000000; end[1]=0; end[2]=0; end[3]=0;
 return end+4;
}
