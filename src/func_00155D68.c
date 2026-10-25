typedef struct { u32 w[3]; } V3;
s32 func_00169848(s32,s32,f32*,s32,s32);
s32 func_0016AE78(s32,s32,s32,V3*,f32*,s32,s32,s32,s32);
void func_00155D68(void *obj) {
 f32 box[12]; V3 result; s32 count;
 box[0]=*(f32*)((u8*)obj+0x94); box[1]=*(f32*)((u8*)obj+0xA0); box[2]=*(f32*)((u8*)obj+0xAC);
 box[3]=*(f32*)((u8*)obj+0x98); box[4]=*(f32*)((u8*)obj+0xA4); box[5]=*(f32*)((u8*)obj+0xB0);
 box[6]=*(f32*)((u8*)obj+0x9C); box[7]=*(f32*)((u8*)obj+0xA8); box[8]=*(f32*)((u8*)obj+0xB4);
 box[9]=*(f32*)((u8*)obj+0x60); box[10]=*(f32*)((u8*)obj+0x64); box[11]=*(f32*)((u8*)obj+0x68);
 count=func_00169848(*(s32*)((u8*)obj+0x104),1,box,0,0);
 result=*(V3*)((u8*)obj+0x60);
 func_0016AE78(*(volatile s32*)((u8*)obj+0x104),*(volatile s32*)((u8*)obj+0x108),1,&result,box,0,-1,count,0);
}
