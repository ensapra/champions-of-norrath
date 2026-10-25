typedef struct { s32 x,y,z; } V3; s32 D_004844A0;
extern s32 func_0017D8B0(s32,V3*,V3*,void*,void*,s32,f32);
extern s32 func_0017D740(s32,V3*,V3*,void*,void*,s32,f32);
extern s32 func_0017D5C0(s32,V3*,V3*,void*,void*,s32);
struct A{u8 pad[0x2c4];s32 result;};
void func_00113348(struct A*a,V3 b,s32 mode,f32 unused,f32 t){volatile u8 reserve[0x30];
if(mode==1){V3 x=*(V3*)((u8*)a+0x10);func_0017D8B0(D_004844A0,&x,&b,a,(u8*)a+0x244,16,t);}
else if(t!=0.0f){V3 x=*(V3*)((u8*)a+0x10);func_0017D740(D_004844A0,&x,&b,a,(u8*)a+0x244,16,t);}
else{V3 x=*(V3*)((u8*)a+0x10);func_0017D5C0(D_004844A0,&x,&b,a,(u8*)a+0x244,16);}
a->result=16;}
