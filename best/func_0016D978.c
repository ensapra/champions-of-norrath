s32 func_0015EB80(void *, s32, s16 *, s32, s32, s32, s64, s64, f32, f32);
s32 D_00484468; s32 D_004844C4; void *D_004844C8;
void func_0016D978(s16 *arg0,s32 arg1,s32 arg2,f32 fparg0,f32 fparg1,f32 fparg2,f32 fparg3) {
u8 *base,*p,*end; s64 val,tag,header; s32 count;
if(D_00484468-((s32)((u8*)D_004844C8-(u8*)(s32)D_004844C4)>>3)<0xBB8)return;
base=(u8*)D_004844C8; end=base+0xD0; p=base+0x10;
*(s64*)(base+0x10)=((s64)0x10000000<<32)|0x8000;
*(s64*)(p+8)=0xE; *(s64*)(base+0x28)=0x3F; *(s64*)(base+0x20)=0;
*(s64*)(base+0x38)=6; *(s64*)(base+0x30)=0; *(s64*)(base+0x48)=0x14;
*(s64*)(base+0x40)=0x61; *(s64*)(base+0x58)=1; *(s64*)(base+0x60)=0x44;
*(s64*)(base+0x68)=0x42; *(s64*)(base+0x70)=0x156; *(s64*)(base+0x78)=0;
*(s64*)(base+0x88)=0x47; *(s64*)(base+0x80)=0x3001D; *(s64*)(base+0x90)=0x80008;
*(s64*)(base+0x98)=3; *(s64*)(base+0xA8)=5;
*(s64*)(base+0xA0)=((s64)0x46E40000<<32)|((s64)0x46E40000<<16)|((s64)0xA000<<20);
*(s64*)(base+0xB8)=3; val=((s64)arg0[1]<<20)|((s64)arg0[0]*16); *(s64*)(base+0xB0)=val;
*(s64*)(base+0xC0)=((s64)0x46E40000<<32)|((s64)0x46E40000<<16)|((s64)0xA000<<20); *(s64*)(base+0xC8)=5;
*(s32*)(base+8)=0x11000000; *(s32*)(base+12)=0x5000000C;
*(s32*)(base+0x50)=arg2; *(s32*)(base+0x54)=0;
count=((s32)((end-base)>>3)-2)>>1; tag=(((s32)((end-p)>>3)-2)>>1)|*(s64*)(base+0x10);
header=count|0x10000000; *(s64*)base=header;
if (((header>>28)&7)==1) *(s64*)base=(header&0x8FFFFFFF)|0x60000000;
else {*(s64*)(base+0xD0)=0x60000000;*(s64*)(end+8)=0;end=base+0xE0;}
D_004844C8=end;
func_0015EB80(base,arg1,arg0,0,1,0x11000000,val,tag,fparg0*32.0f+22528.0f,fparg1*16.0f+29184.0f);
}
