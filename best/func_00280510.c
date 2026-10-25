typedef struct __attribute__((packed,aligned(4))) { u32 w[8]; } UCopy;
typedef struct { u64 w[4]; } ACopy;
extern u8 D_00476618[];
extern f32 D_008D5E40[];
void func_00280510(void) {
 UCopy tmp[12]; u8 *src=(u8*)D_00476618; u8 *dst=(u8*)tmp; s32 i,j;
 if(((u32)src)&7) {
  u8 *end=src+0x180;
  do { *(UCopy*)dst=*(UCopy*)src; src+=0x20; dst+=0x20; } while(src!=end);
 } else {
  u8 *end=src+0x180;
  do { *(ACopy*)dst=*(ACopy*)src; src+=0x20; dst+=0x20; } while(src!=end);
 }
 for(i=0;i<10;i++) for(j=0;j<8;j++) D_008D5E40[i*8+j]=((f32*)tmp)[i*8+j];
}
