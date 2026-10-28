typedef struct { s32 unk0,count,unk8,unkC; } Hdr; typedef struct { char pad[0x44]; s32 unk44; char pad48[8]; s32 unk50; } Obj;
extern char func_001CE218[]; s32 func_00176840(Obj*,s32,s32); void func_00176710(u32**,Hdr**,s32,s32);
void func_001768A8(Obj *o,u32 **pdma,Hdr **ph,s32 arg3,s32 arg4,s32 arg5) {
 Hdr *hd=*ph; s32 n=hd->count; s32 id=hd->unk8; s32 flag=hd->unkC; u32 *dma=*pdma; Hdr *h=(Hdr*)((char*)hd+0x30); s32 addr;
 if(arg5&&flag) { addr=func_00176840(o,arg5,id); if(addr) {
 u32 *start=dma,*a=start+4,*b=start+8; start[0]=0x10000000;start[3]=0x11000000;start[1]=0;start[2]=0;
 a[0]=0x30000001;a[1]=((u32)(func_001CE218+0x20B8))&0x7fffffff;a[2]=0;a[3]=0x50000001;
 b[0]=0x30000001;b[1]=addr&0x7fffffff;b[2]=0;b[3]=0x50000001;dma=start+12;
 }}
 o->unk50+=n;
 if(n>0) do { --n;o->unk44+=h->unkC;func_00176710(&dma,&h,arg3,0); }while(n);
 *pdma=dma;*ph=h;
}
