extern u8 func_01109848[];
extern s32 *D_004C4F70[];
extern u32 D_004C4F74[];
s32 func_001B7D98(s32 h) {
u32 idx,max; s32 *tab;
if(h<0){idx=h&0x7fffffff;tab=(s32*)(func_01109848+0x4040);max=32;}
else {idx=h;max=D_004C4F74[0];tab=D_004C4F70[0];}
if(idx<max){tab[idx*4]=0;return 0;}return -105;
}
