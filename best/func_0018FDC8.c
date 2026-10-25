s32 func_001AE018(void*,void*,s32,s32); s32 func_001AF710(void*); s32 sceSifDmaStat(s32,void*); s32 sceSifSetDma(void*,s32,void*,void*,s32,s32);
s32 D_00362DBC; extern u8 D_010F4610[]; extern u8 jtbl_004C006C[];
typedef struct { s32 count; } Dma;
typedef struct { u32 pad; Dma *dma; void *src; s32 id; } Entry;
s32 func_0018FDC8(s32 channel,s32 index){
 volatile s32 c=channel, i=index;
 Entry *e=(Entry*)(D_010F4610+(s32)(i*0x1c)+(s32)(c*0x70));
 Dma *d=e->dma;
 if(e->id==0 || sceSifDmaStat(e->id,e)<0){
  s32 n=d->count+1; d->count=n; s32 *src=(s32*)e->src;
  func_001AE018(d,(u8*)d+0x1f,n,(s32)(i*0x1c));
  s32 ret=sceSifSetDma(&n,1,d,(u8*)src+((n&1)<<5),0x20,0);
  if(ret){e->id=ret;return 1;}
 }
 if(D_00362DBC)func_001AF710(jtbl_004C006C+0xEAA4);
 return 0;
}
