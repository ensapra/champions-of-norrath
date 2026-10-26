s32 func_001B4C40(void); s32 func_001B4D40(void);
s32 func_001A4738(void*,s32,s32); s32 func_001A24AC(void*,s32,s32);
s32 func_001B08B0(void*,s32,s32,s32*,s32,s32*,s32,s32,s32);
extern u8 func_01109848[];
s32 func_001B5418(s32 a0, s32 a1, void *a2, s32 *a3, s32 a4) {
 s32 r=0xFFFF0000;
 u8 *dst,*buf; s32 *result; s32 status;
 if(func_001B4C40()<0) return r;
 if(func_001B4D40()!=0) return 0xFFFEFFFC;
 dst=func_01109848+0x1980;
 func_001A4738(dst,a0,0xFC);
 result=(s32 *)(dst-8); dst[-5]=0;
 if(a2) {
  if(a1>=0xFD) {
   u8 *d=dst+0xFC; u8 *s=a2; u8 *end=s+0xE0;
   while(s<end) {
    u64 q0=*(u64*)(s+0),q1=*(u64*)(s+8),q2=*(u64*)(s+16),q3=*(u64*)(s+24);
    *(u64*)(d+0)=q0; *(u64*)(d+8)=q1; *(u64*)(d+16)=q2; *(u64*)(d+24)=q3;
    s+=0x20; d+=0x20;
   }
   *(u64*)(d)=*(u64*)(s); *(u64*)(d+8)=*(u64*)(s+8); *(u32*)(d+16)=*(u32*)(s+16);
   *result=0xFC;
   buf=func_01109848+0x1B78;
  } else {
   func_001A24AC(dst+0xFC,(s32)a2,a1);
   *(s32*)(dst-8)=a1;
   buf=func_01109848+0x1B78;
  }
 } else {
  dst[0x104]=0; *(s32*)(dst-8)=0; buf=func_01109848+0x1B78;
 }
 status=func_001B08B0(buf,a4,0,result,0x200,result,8,0,0);
 if(status>=0){*a3=result[1];return *result;}
 return 0xFFFEFFFF;
}
