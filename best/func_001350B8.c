extern u8 D_001BB904[]; extern u8 D_001BB908[]; extern u8 D_001BD258[];
void func_001A42B8(void *, void *); void func_0011DA20(s32,s32);
void func_001350B8(void) {
 u8 *src=D_001BD258;
 u8 *dst=D_001BB908;
 volatile s32 *idx=(volatile s32*)D_001BB904;
 s32 n=*idx;
 u8 *p=dst + n*0x510 + 0x500;
 *(s32*)(p+4)=*(s32*)(src+0x504);
 *(s32*)(p+8)=*(s32*)(src+0x508);
 *(s32*)(p+12)=*(s32*)(src+0x50c);
 func_001A42B8(p-0x1fc,src+0x304);
 n=*idx;
 func_001A42B8(dst+n*0x510+0x404,src+0x404);
 n=*idx;
 dst+=0x204;
 func_001A42B8(dst+n*0x510,src+0x204);
 func_0011DA20(6,-1);
}
