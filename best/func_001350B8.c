extern u8 D_001BB904[]; extern u8 D_001BB908[]; extern u8 D_001BD258[];
void func_001A42B8(void *, void *); void func_0011DA20(s32,s32);
void func_001350B8(void) {
 u8 *base=D_001BD258;
 u8 *data=D_001BB908;
 volatile s32 *count=(volatile s32 *)D_001BB904;
 s32 index=(*count)*0x510;
 u8 *r=data+index+0x500;
 *(s32 *)(r+4)=*(s32 *)(base+0x504);
 *(s32 *)(r+8)=*(s32 *)(base+0x508);
 *(s32 *)(r+12)=*(s32 *)(base+0x50C);
 func_001A42B8(data+index+0x304,base+0x304);
 index=(*count)*0x510; func_001A42B8(data+index+0x404,base+0x404);
 index=(*count)*0x510; func_001A42B8(data+index+0x204,base+0x204);
 func_0011DA20(6,-1);
}
