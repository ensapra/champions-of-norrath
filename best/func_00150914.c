extern s32 D_0047FC30,D_0047FC34;
void func_00150914(u8 *o) {
 s32 i=*(s32*)(o+0x4EC);
 s32 gx=D_0047FC30,gy=D_0047FC34;
 s32 *base=(s32*)(o+i*0xA0);
 u16 y0=*(u16*)(o+0x82C);
 s32 x=(0x800-(gx>>1))*16-*(u16*)(o+0x828);
 s32 y=(0x800-(gy>>1))*16-y0;
 u8 *p=(u8*)base+0x640;
 *(volatile s16*)(p+0x10)=x;
 *(volatile s16*)(p+0x14)=y;
 *(s64*)((u8*)base+0x6A0)=*(volatile s64*)(p+0x10);
}
