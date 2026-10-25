typedef struct __attribute__((packed,aligned(4))){u64 a;s32 b;}P12;
s32 func_001441B8(s32);void func_002A5F70(s32,s32,void*,s32);
s32 func_00318550(s32);s32 func_001138D0(void*,s32);
#define H(o) (*(volatile s16*)((char*)c+(o)))
s32 func_002A6E70(s32 a,s32 b,void*c,volatile P12*d){volatile P12 copy=*d;s32 r;s16 x,w,h;
if(func_001138D0(c,func_00318550(a)))return 0;
x=75;w=200;h=15;
H(0x98)=w;H(0x9a)=h;H(0x90)=w;H(0x92)=h;H(0x96)=x;H(0x8c)=x;H(0x94)=x;H(0x8e)=x;
r=func_001441B8(0xfc);if(r)func_002A5F70(r,b,c,a);return r;}
