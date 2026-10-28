typedef struct { f32 x,y,z; } V3;
extern const f32 D_004825E8,D_004825EC,D_004825F0;
extern s32 D_004844A4,D_00484F74;
extern f32 func_0015A100(s32);
extern void func_001815C8(V3 *,s32,s32,s32,s32,s32,s32,s32,f32,f32);
void func_0028D4D0(u8 *o) {
 V3 unused; V3 p; f32 k,a,s; s32 t=D_004844A4;
 k=(f32)(*(s32 *)(o+0x58)-t+300)*D_004825E8;
 if(k>1.0f) k=1.0f;
 s=func_0015A100((t%32768)*0x1dd7);
 a=k*D_004825EC;
 p=*(V3 *)(o+0x10);
 func_001815C8(&p,128,128,128,(s32)(k*128.0f),D_00484F74,(s16)(D_004844A4<<10),1,0.0f,(f32)(s32)(a+s*(f32)(s32)(a*D_004825F0)));
}
