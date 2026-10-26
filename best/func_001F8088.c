void ovl_ntgui2_func_00108E58(void*,s16,void*,s32,f32,s32);
void func_001091B0(void*);
void func_001092F0(void*,s32,void*,s32,f32,f32,f32,f32,f32);
void func_001128A8(void*,s32,s32,s32,s32,s32,f32,s32,s32,s32);
void func_001438A0(void*);
void func_001637A8(void*);
void func_00163830(void*,s32,s32);
extern char D_0042B7E8[],D_0044E2B0[];
extern f32 D_00480F08,D_00480F0C,D_00480F10;
s32 D_004844A4;
typedef struct {u64 a;u32 b;} Tmp;
void func_001F8088(void *o,void *p,s16 x,s32 y) {
 s32 n=*(s32*)((char*)p+8);u64 flags;void *inner=(char*)o+0x120;void *child;f32 t=D_00480F08;
 Tmp tmp=*(Tmp*)p;
 ovl_ntgui2_func_00108E58(&tmp,x,D_0042B7E8,y,10.0f,n);
 *(u8*)((char*)o+0x28)=0x41;*(u8*)((char*)o+0x29)=0x32;
 flags=*(u64*)((char*)o+0xa0);flags|=(u64)(((0x80<<16)|4)<<16);*(u64*)((char*)o+0xa0)=flags;
 *(f32*)((char*)o+0xa8)=D_00480F0C;*(f32*)((char*)o+0x1c)=35.0f;*(f32*)((char*)o+0xe0)=1.0f;*(f32*)((char*)o+0xe4)=10.0f;
 *(s32*)((char*)o+0xf8)=D_004844A4;*(void**)((char*)o+0x48)=D_0044E2B0;
 *(s32*)((char*)o+0xb0)=0;*(s32*)((char*)o+0xc0)=0;*(s32*)((char*)o+0xec)=0;*(s16*)((char*)o+0x23c)=0;*(s32*)((char*)o+0x100)=0;*(s32*)((char*)o+0x3c0)=0;
 func_001092F0(o,1,D_0044E2B0,D_004844A4,17.0f,D_00480F0C,2.0f,1.0f,1.0f);
 func_001637A8(inner);
 child=*(void**)((char*)o+0x24);func_00163830(inner,*(s32*)((char*)child+0x3c),1);
 func_001438A0(o);
 func_001128A8(o,4,1,0,0,0,t,0,0,0);func_001128A8(o,5,1,0,0,0,t,0,0,0);func_001128A8(o,6,1,0,0,0,t,0,0,0);
 func_001091B0(o);
 flags=*(u64*)((char*)o+0xa0);if((s32)(flags&1)){flags|=0x20000000;*(u64*)((char*)o+0xa0)=flags;*(f32*)((char*)o+0xe0)=D_00480F10;*(f32*)((char*)o+0x1c)+=5.0f;}
}
