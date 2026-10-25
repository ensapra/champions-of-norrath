typedef struct { f32 x,y,z; } Vec;
typedef struct { u8 pad0[0xC]; s32 type; f32 x,y,z,w; u8 pad20[8]; s8 kind; } Obj;
extern char D_00438E98[];
extern char D_00450620[];
f32 D_00482588;
f32 D_0048258C;
f32 D_00482590;
void func_001411F0(void*, void*, s32);
void ovl_ntgui2_func_0013D230(void*, s32, s32);
void func_00143830(void*);
void func_00289D60(Obj *o, Vec *a, s16 angle, s32 id, Vec *b, Vec *c, s8 flag) {
 Vec t;
 Vec u;
 s32 i;
 f32 z;
 t = *a;
 u = *b;
 func_001411F0(&u, D_00438E98, 0);
 *(void**)((char*)o+0x48) = D_00450620;
 __builtin_memcpy((char*)o+0x88, &u, 12);
 *(s8*)((char*)o+0x61)=0;
 *(f32*)((char*)o+0x80)=D_00482588;
 *(f32*)((char*)o+0x78)=120.0f;
 *(s16*)((char*)o+0x6c)=0x80;
 *(s16*)((char*)o+0x64)=0x80;
 *(f32*)((char*)o+0x7c)=120.0f;
 *(s16*)((char*)o+0x6a)=0xff;
 *(s16*)((char*)o+0x68)=-16;
 *(s32*)((char*)o+0x84)=0;
 *(s16*)((char*)o+0x62)=0xff;
 *(s16*)((char*)o+0x66)=0;
 *(s16*)((char*)o+0x60)=-16;
 *(s16*)((char*)o+0x6e)=0;
 *(s8*)((char*)o+0x58)=0;
 ovl_ntgui2_func_0013D230((char*)o+0x58,255,-16);
 o->type=0x4001; *(s8*)((char*)o+0x28)=12; o->w=12.0f; *(s32*)((char*)o+0xac)=id;
 if(c==NULL) {
  *(s8*)((char*)o+0x9b)=0; *(f32*)((char*)o+0x54)=16.0f; *(f32*)((char*)o+0xa4)=t.z;
  *(f32*)((char*)o+0x4c)=(t.x-o->x)*D_0048258C*D_00482590;
  *(f32*)((char*)o+0x50)=(t.y-o->y)*D_0048258C*D_00482590;
 } else {
  *(s8*)((char*)o+0x9b)=1;
  __builtin_memcpy((char*)o+0x4c,c,12);
  *(f32*)((char*)o+0xa4)=t.z-(o->z-t.z)*3.0f;
 }
 *(s16*)((char*)o+0xaa)=0x269; *(s64*)((char*)o+0xb0)=-1;
 *(s16*)((char*)o+0x38)=angle-0x4000; *(s32*)((char*)o+0x94)=-1;
 *(s8*)((char*)o+0x9d)=flag;
 *(s8*)((char*)o+0x98)=0; *(s8*)((char*)o+0x99)=0; *(s32*)((char*)o+0xa0)=0;
 *(s8*)((char*)o+0x9a)=0; *(s16*)((char*)o+0xa8)=0; *(s8*)((char*)o+0x9c)=0;
 func_00143830(o);
}
