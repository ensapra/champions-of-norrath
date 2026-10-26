void func_002712B8(void*,s32,void*); void func_003021B0(void*,void*,s32); extern u8 D_00408600[]; extern u8 D_0040DB70[]; extern f32 D_00482194; extern s32 D_004844A4;
void func_00271488(u8*a,s32 id){s32 idx=-1,i;f32 best;f32 xy[2];f32 dx,dy;u8*p;
if(id==-1){*(s32*)(a+0x3d4)=0;s32*ptr=(s32*)(a+0x3cc);i=3;do{*ptr--=-1;}while(--i>=0);func_003021B0(a+0x3ec,0,0x10);return;}
if(*(s32*)(a+0x3bc)==-1&&*(s32*)(a+0x864)==0)idx=0;else{best=D_00482194;p=*(u8**)(D_0040DB70+id*0x5db0)+0x10;i=1;while(i<*(s32*)(a+0x3d0)){if(*(s32*)(a+0x3c0+i*4)==-1){func_002712B8(a,i,xy);dx=xy[0]-*(f32*)p;dy=xy[1]-*(f32*)(p+4);if(dx*dx+dy*dy<best){best=dx*dx+dy*dy;idx=i;}}i++;}}
*(s32*)(a+idx*4+0x3c0)=id;(*(s32*)(a+0x3d4))++;*(s32*)(a+idx*4+0x3d8)=1;
if(*(s32*)(a+0x3bc)==-1&&*(s32*)(a+0x864)==0){u8*v=*(u8**)(a+0x48);*(s32*)(a+0x408)=1;*(s32*)(a+0x3bc)=id;((void(*)(void*,s32))(v+0xa0))(a,1);}
*(s32*)(a+id*4+0x3ec)=D_004844A4;u8*q=D_00408600+id*0x5db0+0x5570;u8*obj=*(u8**)q;*(s32*)(obj+0x578)=0x10;*(u32*)(obj+0x530)=(u32)a;}
