typedef struct{f32 x,y,z;} Vec3;typedef struct{Vec3 v;u8 pad[4];} SlotVec;typedef struct __attribute__((packed)){u64 q;} P8;typedef struct{P8 v;u8 pad[8];} Slot8;
extern f32 func_0015A070(s32);extern f32 func_0015A100(s32);extern void func_001DB2D8(void*,s32,void*,Vec3*,s16,void*,Vec3*,Vec3*,f32,f32,f32,f32,s32,s32);extern void func_0013E730(s16*);extern void func_00109808(void*,s32,s32,s32);extern void func_0013CB88(void);extern s32 D_004844A4;extern u8 D_00485340[];extern u8 D_00485348[];
void func_00210338(u8*p){struct{SlotVec saved;Slot8 c20,c30;SlotVec c40,c50,c60;s16 out[4];}f;s32 t,i;f32 x,*src;s16*dst;Vec3*pos=(Vec3*)(p+0x10);f.saved.v=*pos;
if(*(s16*)(p+0x23c)==13){x=func_0015A070(*(s32*)(p+0x328)*0x5dc)*3.0f;*(f32*)(p+0x10)+=x;x=func_0015A100(*(s32*)(p+0x328)*0x5dc)*3.0f;*(f32*)(p+0x14)+=x;x=func_0015A070(*(s32*)(p+0x328)*0x5dc)*5.0f;*(f32*)(p+0x18)+=x;}
if(*(s16*)(p+0x23c)==14){f.c20.v=*(P8*)D_00485340;f.c30.v=*(P8*)D_00485348;t=D_004844A4-*(s32*)(p+0xf8);if(t<0x10){f.c40.v=*pos;func_001DB2D8(p,*(s32*)(*(u8**)(p+0x24)+0xc),p+0x120,&f.c40.v,*(s16*)(p+0x38),p+0x338,&f.c20.v,(Vec3*)&f.c30.v,0,1.0f,0,0.25f,0,-0x7d0);goto after;}
if(t>=0x29){f.c50.v=*pos;func_001DB2D8(p,*(s32*)(*(u8**)(p+0x24)+0xc),p+0x120,&f.c50.v,*(s16*)(p+0x38),p+0x338,&f.c20.v,(Vec3*)&f.c30.v,0,1.0f,0,0.25f,2,-0x7d0);goto after;}
f.c60.v=*pos;func_001DB2D8(p,*(s32*)(*(u8**)(p+0x24)+0xc),p+0x120,&f.c60.v,*(s16*)(p+0x38),p+0x338,&f.c20.v,(Vec3*)&f.c30.v,0,1.0f,0,1.0f,1,-0x7d0);
after: { volatile f32 *q=(volatile f32*)(p+0x6c); volatile s16 *d=f.out; for(i=0;i<4;i++) d[i]=(s16)q[i]; }func_0013E730(f.out);}
{u8 *q=*(u8**)(p+0x24);s32 a=*(s32*)(q+0xc);s32 b=*(s32*)(q+0x14);func_00109808(p,a,b,0);}func_0013CB88();*pos=f.saved.v;}
