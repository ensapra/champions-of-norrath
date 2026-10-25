typedef struct __attribute__((packed,aligned(4))) { u32 w[8]; } Rec32;
void func_00161344(void *p) {
 extern u8 jtbl_004C006C[];
 s32 i=*(s32*)((u8*)p+0x4EC);
 Rec32 tmp=*(Rec32*)(jtbl_004C006C+0xB8B4+i*0x19C0);
 s32 *ids=(s32*)&tmp;
 u8 *dst=(u8*)p+0x910+i*0x19C0+0x4D0;
 s32 n=0;
 do {
  u8 *src=(u8*)p+0x910+ids[n]*4+0x3390;
  dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2];
  dst[3]=(u8)(*(s32*)((u8*)p+0x618)*src[3]/255);
  *(u64*)dst=*(u64*)dst;
  dst+=0x20; n++;
 } while(n<8);
}
