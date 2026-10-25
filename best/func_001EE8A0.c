struct Parent { char pad[0x74]; s32 f74; char pad84[0xC]; s32 f84; };
struct Obj { char pad0[0x24]; struct Parent *parent; char pad28[0x88]; f32 fB0; char padB4[0x9C]; f32 f150,f154; char pad158[0xE4]; s16 f23C; char pad23E[0xEA]; s32 f328; char pad32C[0x9C]; s32 f3C8,f3CC; };
extern f32 D_00480CA4; extern f32 D_00480CA8;
u32 func_00153FA8(void*); void func_00113460(void*); void func_0010D250(void*,void*,s32); void func_00160128(void*,s32,s32,u32,f32);
void func_001EE8A0(struct Obj *p,u32 mode) {
 char temp[0x20];
 switch(mode) {
 case 0: { u32 a=func_00153FA8(p)%120U; p->f3C8=p->f328+a+0x3c; u32 b=func_00153FA8(p)%60U; p->f3CC=p->f328+b+0x78; func_00160128((char*)p+0x120,p->parent->f74,3,b,0.5f); break; }
 case 13: { u32 a=func_00153FA8(p)%1800U; p->f3C8=p->f328+a+0x4b0; u32 b=func_00153FA8(p)%480U; p->f3CC=p->f328+b+0xf0; func_00160128((char*)p+0x120,p->parent->f84,3,b,D_00480CA4); break; }
 case 1: { func_00113460(p); func_0010D250(temp,p,0x12c); u32 a=func_00153FA8(p)%300U; p->fB0=20.0f; p->f3C8=p->f328+a+0xb4; if(p->f150<0.0f)p->f150=0.0f; p->f154=D_00480CA8; break; }
 case 3: { func_00113460(p); func_0010D250(temp+0x10,p,0x12c); u32 a=func_00153FA8(p)%300U; p->fB0=40.0f; p->f3C8=p->f328+a+0xb4; if(p->f150<0.0f)p->f150=0.0f; p->f154=D_00480CA8; break; }
 case 6: mode=3; break; case 8: mode=p->f23C; break;
 }
 p->f23C=mode;
}
