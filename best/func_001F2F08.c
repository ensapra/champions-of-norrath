void ovl_ntgui2_func_00108E58(void*,s16,void*,s32,s32,f32,s32);
void func_001091B0(void*);
void func_001092F0(void*,s32,s32,f32,f32,s32,s32,s32);
void func_001128A8(void*,s32,s32,s32,s32,s32,f32,s32,s32,s32);
void func_00143830(void*);
void func_001637A8(void*);
void func_00163830(void*,s32,s32);
void func_00194390(s32,s32,s32);
void func_001F46C8(void*,s32);
s32 func_00304168(void*,void*,s32);
extern char D_0034B6B1[];
extern char D_0042B3D8[];
extern char D_0044DEF0[];
f32 D_00480DB0; f32 D_00480DB4; f32 D_00480DB8; s32 D_004844A4; extern char D_00485240[];
void func_001F2F08(void *o,void *p,s16 x,s32 y,s32 z) {
 s32 n=*(s32*)((char*)p+8),r;
 void *inner=(char*)o+0x120; void *base=(char*)o+0x3c0; void *sub;
 u64 bits;
 bits=*(u64*)((char*)o+0xA0);
 ovl_ntgui2_func_00108E58(p,x,D_0042B3D8,y,n,10.0f,n);
 *(s32*)base=0; *(s8*)((char*)o+0x28)=30; *(s16*)((char*)o+0x318)=-1;
 *(void**)((char*)o+0x48)=D_0044DEF0;
 *(f32*)((char*)o+0x1c)=15.0f; *(s32*)((char*)o+0xf8)=D_004844A4;
 bits |= ((u64)0x8002<<18)|0x04800000; *(u64*)((char*)o+0xa0)=bits;
 *(s32*)((char*)o+0x3c4)=0;*(s32*)((char*)o+0xb0)=0;
 *(f32*)((char*)o+0xa8)=D_00480DB0;*(s32*)((char*)o+0xc0)=0;*(s32*)((char*)o+0xec)=0;
 *(s16*)((char*)o+0x23c)=0;*(s32*)((char*)o+0x100)=0;
 *(f32*)((char*)o+0x58)=1;*(f32*)((char*)o+0x5c)=1;*(f32*)((char*)o+0x68)=1;*(f32*)((char*)o+0x60)=1;*(f32*)((char*)o+0x64)=1;
 func_001092F0(o,1,D_004844A4,D_00480DB4,D_00480DB0,0,0,0);
 func_001637A8(inner);
 if(z) { *(s32*)((char*)o+0xc)|=9; func_00194390((s32)base,z,z); sub=*(void**)((char*)o+0x24); func_00163830(inner,*(s32*)((char*)sub+0x6c),1); r=1; }
 else { sub=*(void**)((char*)o+0x24); if(func_00304168(D_0034B6B1,D_00485240,z)==0){func_00163830(inner,*(s32*)((char*)sub+0x34),1);func_001F46C8(o,0x18);r=1;} else {func_00163830(inner,*(s32*)((char*)sub+0x3c),1);r=1;} }
 func_00143830(o); *(s32*)((char*)o+0xec)=r;
 func_001128A8(o,0xb,1,0,0,0,D_00480DB8,0,0,0);func_001091B0(o);
}
