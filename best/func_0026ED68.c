extern s32 D_004844C0;
extern f32 D_00482148;
extern char D_0034BEB8[];
extern char D_00408600[];
s32 func_0015A5C0(s16,s16,s32);
void func_0026ED68(void *p) {
 s32 i, idx, n;
 void *q;
 s16 angle;
 f32 x,y;
 if (D_004844C0 & 0x02000000) return;
 if (*(s8*)((char*)p+0x160)) return;
 if (*(s32*)((char*)p+0x64)) return;
 if (*(s32*)((char*)p+0x38)) return;
 i=*(s32*)((char*)p+0x40);
 idx=i*0x58;
 if ((*(s32*)(D_0034BEB8+idx+0xC)&0x200)==0) return;
 x=*(f32*)(D_0034BEB8+idx+0x18);
 y=*(f32*)(D_0034BEB8+idx+0x14);
 if (y*y+x*x >= D_00482148) return;
 q=*(void**)(D_00408600+i*0x5DB0+0x5570);
 if (q) angle=0x4000-*(u16*)((char*)q+0x38);
 else {
   n=*(s8*)((char*)p+0x161);
   if (n<0) angle=-0x2000;
   else {
    q=*(void**)(D_00408600+n*0x5DB0+0x5570);
    if(q) angle=0x4000-*(u16*)((char*)q+0x38);
    else angle=-0x2000;
   }
 }
 *(s16*)((char*)p+0x8A)=angle;
 *(s32*)((char*)p+0x38)=func_0015A5C0(*(s16*)((char*)p+0x68),angle,0);
}
