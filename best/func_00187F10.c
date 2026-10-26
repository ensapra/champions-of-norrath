extern u8 jtbl_004C006C[];
extern s32 D_010F4530[];
typedef struct { unsigned char pad[0xE4]; s32 (*atE4)(s32); s32 (*atE8)(s32); } ConvertV;
static inline void copy_loop(s64 *d,s64 *s,s64 *end) {
 s64 a,b,c,e;
 do {a=s[0];b=s[1];c=s[2];e=s[3];d[0]=a;d[1]=b;d[2]=c;d[3]=e;s+=4;d+=4;} while(s!=end);
}
void func_00187F10(void *arg0) {
 s64 *s,*d;
 s=(s64*)(jtbl_004C006C+0xDF34);d=(s64*)((u8*)arg0+0x60);copy_loop(d,s,s+16);d+=16;s+=16;{s64 a=s[0],b=s[1];d[0]=a;d[1]=b;}
 s=(s64*)(jtbl_004C006C+0xE00C);d=(s64*)((u8*)arg0+0xF0);copy_loop(d,s,s+8);d+=8;s+=8;d[0]=s[0];
 s=(s64*)(jtbl_004C006C+0xDFC4);d=(s64*)((u8*)arg0+0x138);copy_loop(d,s,s+8);d+=8;s+=8;d[0]=s[0];
 s=(s64*)(jtbl_004C006C+0xDF34);d=(s64*)((u8*)arg0+0x180);copy_loop(d,s,s+16);d+=16;s+=16;{s64 a=s[0],b=s[1];d[0]=a;d[1]=b;}
 s=(s64*)(jtbl_004C006C+0xE054);d=(s64*)((u8*)arg0+0x210);copy_loop(d,s,s+8);d+=8;s+=8;d[0]=s[0];
 s=(s64*)(jtbl_004C006C+0xDFC4);d=(s64*)((u8*)arg0+0x258);copy_loop(d,s,s+8);d+=8;s+=8;d[0]=s[0];
 {s32 n=8;u8*p=(u8*)arg0+0x60,*uvp=(u8*)arg0+0xF0,*q=(u8*)arg0+0x180,*uvq=(u8*)arg0+0x210;do{
  s32 x;
  x=((ConvertV*)D_010F4530[0])->atE8(*(s32*)(p+0));*(s32*)(p+0)=x;
  x=((ConvertV*)D_010F4530[0])->atE4(*(s32*)(p+4));*(s32*)(p+4)=x;
  x=((ConvertV*)D_010F4530[0])->atE8(*(s32*)(p+8));*(s32*)(p+8)=x;
  x=((ConvertV*)D_010F4530[0])->atE8(*(u16*)(uvp+0));*(u16*)(uvp+0)=x;
  x=((ConvertV*)D_010F4530[0])->atE4(*(u16*)(uvp+2));*(u16*)(uvp+2)=x;
  *(u16*)(uvq+0)=(*(u16*)(uvq+0)<<4)+8;*(u16*)(uvq+2)=(*(u16*)(uvq+2)<<4)+8;*(u16*)(uvq+4)=(*(u16*)(uvq+4)<<4)+8;*(u16*)(uvq+6)=(*(u16*)(uvq+6)<<4)+8;
  x=((ConvertV*)D_010F4530[0])->atE8(*(s32*)(q+0));*(s32*)(q+0)=x;
  x=((ConvertV*)D_010F4530[0])->atE4(*(s32*)(q+4));*(s32*)(q+4)=x;
  x=((ConvertV*)D_010F4530[0])->atE8(*(s32*)(q+8));*(s32*)(q+8)=x;
  x=((ConvertV*)D_010F4530[0])->atE8(*(u16*)(uvq+0));*(u16*)(uvq+0)=x;
  x=((ConvertV*)D_010F4530[0])->atE4(*(u16*)(uvq+2));*(u16*)(uvq+2)=x;
  *(u16*)(uvp+0)=(*(u16*)(uvp+0)<<4)+8;*(u16*)(uvp+2)=(*(u16*)(uvp+2)<<4)+8;*(u16*)(uvp+4)=(*(u16*)(uvp+4)<<4)+8;*(u16*)(uvp+6)=(*(u16*)(uvp+6)<<4)+8;
  p+=0x10;q+=0x10;uvp+=8;uvq+=8;n--;
 }while(n>=0);}
}
