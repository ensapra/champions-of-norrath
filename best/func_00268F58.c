typedef unsigned char u8; typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef float f32;
extern s32 D_00485E28,D_00485E18,D_00485E1C,D_00485E20,D_00485E24; extern f32 D_00482098; extern char D_0037F960[];
s32 func_00305328(s32,char*); s32 func_003044FC(s32,char*);
void func_00268F58(void *arg0,void *arg1){u8* src=arg0;u8* rec=(u8*)arg1; s32 count=*(s16*)src; u16 flags=*(u16*)(src+2); u8* base=src+*(s32*)(src+4); s32 i; u32 *pa,*pb; f32 scale; volatile s32 sink;
D_00485E28=0;D_00485E18=0;D_00485E1C=0;D_00485E20=0;D_00485E24=0;
*(s32*)(D_0037F960+8)=0x20;*(s32*)(D_0037F960+0x14)=0x44;*(s32*)(D_0037F960)=0x20;*(s32*)(D_0037F960+4)=0x20;*(s32*)(D_0037F960+0xc)=0x44;*(s32*)(D_0037F960+0x10)=0x44;
*(u16*)(src+2)=flags|2;*(f32*)(D_0037F960+0x1c)=-1.0f;*(f32*)(D_0037F960+0x20)=1.0f;*(s32*)(D_0037F960+0x18)=0;
if(count>0){ scale=D_00482098; for(i=0;i<count;i++){u8* q=rec; rec+=*(s16*)(q+4); if(!(flags&2))*(u32*)q+=(u32)base;
pa=(u32*)(q+0x14);pb=(u32*)(q+0x18); if(*pa){while(*pa){if(!(flags&2))*pa+=(u32)base;pa++;pb++;}}
(void)scale;
}} sink=2;}
