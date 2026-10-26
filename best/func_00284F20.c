extern char D_00438B28[];
extern char D_00450530[];
extern char D_004770D0[];
extern char D_004770E8[];
f32 D_00482414, D_00482418, D_0048241C, D_00482420;
s32 D_004844A4;
extern void ovl_ntgui2_func_00108E58(void*,s16,void*,s32,s32,f32,s32,...);
extern u32 func_00153FA8(void*,...);
extern s32 func_00155AB8(s32,char*);
extern s64 func_0016C970(s32,s32);
extern void func_002853A8(void*,s32);
extern void func_001637A8(void*);
extern void func_00163830(void*,s32,s32);
extern void func_001438A0(void*);
extern void func_001128A8(void*,s32,s32,s32,s32,s32,f32,s32,s32,s32);
extern void func_001091B0(void*);
struct Obj { unsigned char b[0x500]; };
void func_00284F20(struct Obj *o, void *p, s16 a2, s32 a3, s32 a4) {
 s32 n,i,x; f32 f21,f23; void *q=(void*)(o->b+0x408);
 ovl_ntgui2_func_00108E58(0,a2,D_00438B28,a3,*(s32*)((char*)p+8),10.0f,*(s32*)((char*)p+8));
 o->b[0x48]=(u8)(u32)D_00450530;
 for(i=0;i<4;i++) *(s16*)(o->b+0x444-8*i)=-1;
 o->b[0x429]=o->b[0x428]=255;
 for(i=0;i<4;i++){*(s16*)(o->b+0x418+2*i)=0;*(s16*)(o->b+0x420+2*i)=0;}
 o->b[0x28]=25; *(f32*)(o->b+0xA8)=D_00482414; *(f32*)(o->b+0x1C)=15.0f;
 *(s32*)(o->b+0xF8)=D_004844A4; o->b[0xAC]=9;
 *(s32*)(o->b+0xB0)=0;*(s32*)(o->b+0xC0)=0;*(s32*)(o->b+0xEC)=0;*(s16*)(o->b+0x23C)=0;
 o->b[0x3C0]=func_00153FA8(o,3,q,(char*)q+8)&1;
 if(func_00155AB8(a4,D_004770D0)){if(!func_00155AB8(a4,D_004770E8))o->b[0x3C0]=1;}else o->b[0x3C0]=0;
 *(s32*)(o->b+0xD0)=0;*(s32*)(o->b+0x3C4)=0;*(s32*)(o->b+0x450)=0;*(s32*)(o->b+0xF4)=0;
 if((s8)o->b[0x3C0]==1) *(s32*)(o->b+0xF4)=1<<(func_00153FA8(o)&3);
 else {
   x=func_00153FA8(o)%14; *(s32*)(o->b+0xF4)=1<<(x+4);
   *(s32*)(o->b+0x3C4)=(func_00153FA8(o,*(s32*)(o->b+0xF4))&2)+29;
   *(s32*)(o->b+0x450)=(func_00153FA8(o)%3)*2+33;
   if((f32)func_00153FA8(o)*0.0000152587890625f<D_00482418) *(s32*)(o->b+0xD0)=func_00153FA8(o)%3+1;
 }
 q=o->b+0x120; *(s64*)(o->b+0x228)=func_0016C970(*(s32*)(*(u32*)(o->b+0x24)+0xC),*(s32*)(o->b+0xF4));
 *(u64*)(o->b+0xA0)|=(u64)0x8000<<20; f21=D_0048241C;
 func_002853A8(o,0);func_001637A8(q);
 func_00163830(q,*(s32*)(*(u32*)(o->b+0x24)+0xD4),1);func_001438A0(o);
 f23=D_00482420;
 func_001128A8(o,0x12,1,0,0,0,f21,0,0,0);func_001128A8(o,0x13,1,0,0,0,f21,0,0,0);
 func_001128A8(o,0x14,1,0,0,0,f21,0,0,0);func_001128A8(o,0x15,1,0,0,0,f21,0,0,0);
 func_001128A8(o,4,16,0,0,0,1.0f,0,0,0);func_001128A8(o,6,16,0,0,0,1.0f,0,0,0);
 func_001128A8(o,8,16,0,0,0,1.0f,0,0,0);func_001128A8(o,10,16,0,0,0,1.0f,0,0,0);
 func_001128A8(o,13,1,0,0,0,f23,0,0,0);func_001128A8(o,14,1,0,0,0,f23,0,0,0);func_001091B0(o);
}
