typedef struct { s32 tag; union {s64 i; float f; void *p;} v; } Attr;
extern void *func_0011B9A8(u32);
extern s32 func_0014FCA0();
extern s32 func_00154620();
float D_0047FB00;
#define I(o) (*(s32*)((char*)p+(o)))
void func_00149BE0(void *p, s32 unused, s32 x, s32 y){
  volatile s32 ab[2]; Attr at[64]; volatile u32 i;
  s64 *v0=&at[0].v.i, *v3=&at[3].v.i, *v4=&at[4].v.i;
  volatile s32 *t1=&at[1].tag,*t2=&at[2].tag,*t3=&at[3].tag,*t4=&at[4].tag,*t5=&at[5].tag;
  ab[0]=x; ab[1]=y;
  *(void**)((char*)p+0x87c) = func_0011B9A8((u32)(I(0x898)*4+19)>>4<<4);
  i=0;
  at[0].tag=9; *v0=I(0x8a4);
  *t1=11; at[1].v.i=I(0x8a8);
  *t2=14; at[2].v.i=I(0x5ac)-2*I(0x8a4);
  *t3=16; *v3=I(0x5b0)-2*I(0x8a8);
  *t4=21; *v4=0;
  *t5=19; at[5].v.i=0;
  I(0x894)=func_0014FCA0(p,0,at,6);
  at[0].tag=198; *v0=(s32)&D_0047FB00;
  *t1=9; at[1].v.i=0;
  *t2=11; at[2].v.i=0;
  *t3=14; *v3=0;
  *t4=16; *v4=0;
  *t5=21; at[5].v.i=0;
  at[6].tag=41; at[6].v.i=0;
  at[7].tag=19; at[7].v.i=0;
  at[8].tag=212; at[8].v.i=1;
  at[9].tag=60; at[9].v.i=0;
  at[10].tag=62; at[10].v.i=0;
  at[11].tag=202; at[11].v.i=0;
  at[12].tag=204; at[12].v.i=0;
  at[13].tag=64; at[13].v.i=0;
  at[14].tag=66; at[14].v.i=0;
  at[15].tag=205; at[15].v.i=I(0x8ac);
  at[16].tag=208; at[16].v.i=I(0x8b0);
  at[17].tag=210; at[17].v.i=I(0x8b4);
  at[18].tag=199; at[18].v.f=*(float*)((char*)p+0x8b8);
  at[19].tag=200; at[19].v.p=(char*)p+0x8c0;
  at[20].tag=213; at[20].v.i=I(0x8d0);
  at[21].tag=214; at[21].v.i=I(0x8d4);
  for(i=0;i<I(0x898)+1;i++)
    (*(s32***)((char*)p+0x87c))[i]=(s32*)func_00154620(I(0x894),0,at,22);
}
