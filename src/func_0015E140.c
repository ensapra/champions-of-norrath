extern s32 D_00484468,D_004844C4,D_004844C8;
s32 func_0015E140(void*p,f32 x) {
 if (!(*(s32*)((u8*)p+0x6c)) && !(*(s32*)((u8*)p+0x70))) return 0;
 if (D_00484468-((D_004844C8-D_004844C4)>>3)<0x2ee0) return 0;
 s32 n=(s32)x;
 if (n<2) return 0;
 return 1;
}
