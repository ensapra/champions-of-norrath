extern u8 D_007DD290[];
s32 func_0024AEB0(s32 i) {
 u8 *base=D_007DD290; s32 ent=i*0x1c4; u8 *e=(u8*)(ent+(s32)base); s32 n=0,flag; s32 *p; u8 *b4,*e2,*e3;
 flag=*(s32*)(e+0x6c)&8;
 if(!flag) {
  p=(s32*)(e+0x6c); n=1;
  while(n<8) { if(*(s32*)((u8*)p+0x30)&8) break; p=(s32*)((u8*)p+0x30); n++; }
 }
 if(n==8)return 1;
 b4=base+4; e2=(u8*)(i*0x1c4+(s32)b4);
 if(*(s32*)(e2+0x20)>0xc800)return 1;
 e3=e2+n*0x30;
 if(*(s32*)(e3+0x50)!=0)return 1;
 return 0;
}
