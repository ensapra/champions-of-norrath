void *func_00266A80(void *p, s32 x1,s32 x2,s32 x3,s32 x4,s32 x5,s32 x6,s32 x7,f32 f,s32 stack0) {
 s32 i=0; s8 *q=(s8*)p+0xe349c; s32 off; void *r;
 if(q[0]) { do { i++; q++; if(i>=32) break; } while(*q); }
 if(i==32) func_00303930((u8*)p+0xe34e0,0);
 off=i*0x70e4; ((s8*)p)[0xe3490+i]=1;
 *(s32*)((u8*)p+0x10+off+0x1810)=x2;
 *(f32*)((u8*)p+0x10+off+0x1820)=f;
 *(s32*)((u8*)p+0x14+off+0x1810)=x3;
 *(s32*)((u8*)p+0x18+off+0x1810)=x4;
 *(s32*)((u8*)p+0xc+off+0x1820)=x5;
 *(s32*)((u8*)p+0x14+off+0x1820)=x6;
 *(s32*)((u8*)p+0x18+off+0x1820)=x7;
 *(s32*)((u8*)p+0xc+off+0x1810)=x1;
 *(s32*)((u8*)p+off+0x1830)=stack0;
 r=(u8*)p+off+0x181c;
 func_00263C38(p,x1,x2,x3,r,(u8*)p+0x14+off+0x1820,(u8*)p+off+0x1830,(u8*)p+0xc+off+0x1810);
 return r;
}
