typedef struct { u64 lo; u32 hi; } Block12;
s32 func_001685D4(void *p){
 s32 i,rowidx=*(s32*)((char*)p+0x4ec),weight=*(s32*)((char*)p+0x618); u8 *base=(u8*)p+0x910; u8 *row=base+rowidx*0x740; u8 *a,*b,*c,*src; s32 half,parity; u32 alpha; u8 *d0,*d1,*d2,*q0,*q1,*q2;
 for(i=0;i!=18;i++){
  half=i/2; parity=i-half*2;
  a=row+0x1190+i*0x20; b=row+0x13f0+i*0x20; c=row+0x1650+i*0x20;
  src=base+0x5590+parity*4;
  a[0]=src[0];a[1]=src[1];a[2]=src[2];a[3]=(u8)((weight*src[3])/255);
  src+=4;b[0]=src[0];b[1]=src[1];b[2]=src[2];b[3]=(u8)((weight*src[3])/255);
  src+=4;c[0]=src[0];c[1]=src[1];c[2]=src[2];c[3]=(u8)((weight*src[3])/255);
  rowidx=*(s32*)((char*)p+0x4ec);
  d0=base+((rowidx*0x3a+i)*0x20)+0x3d30;
  q0=base+((rowidx*0x3a+i)*0x20)+0x2eb0;
  d1=base+((rowidx*0x3a+i)*0x20)+0x2030;
  *(volatile Block12*)d0=*(Block12*)a;*(Block12*)q0=*(Block12*)d0;*(Block12*)d1=*(Block12*)q0;
  d0=base+((rowidx*0x3a+i)*0x20)+0x3f90;
  q0=base+((rowidx*0x3a+i)*0x20)+0x3110;
  d1=base+((rowidx*0x3a+i)*0x20)+0x2290;
  *(Block12*)d0=*(Block12*)b;*(Block12*)q0=*(Block12*)d0;*(Block12*)d1=*(Block12*)q0;
  d0=base+((rowidx*0x3a+i)*0x20)+0x41f0;
  q0=base+((rowidx*0x3a+i)*0x20)+0x3370;
  d1=base+((rowidx*0x3a+i)*0x20)+0x24f0;
  *(Block12*)d0=*(Block12*)c;*(Block12*)q0=*(Block12*)d0;*(Block12*)d1=*(Block12*)q0;
 }
 return (s32)(base+((rowidx*0x3a+17)*0x20)+0x24f0);
}
