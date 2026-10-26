extern f32 D_00481030,D_00481034,D_00481038,D_0048103C,D_00481040; extern char D_007D7060[];
s32 func_00153FA8(s32); f32 func_0015A070(s16); f32 func_0015A100(s16); u32 func_0016CD50(s32,s32);
void func_0016C238(s32,s32,void*,s16,s32,f32*,f32*,s32,f32); void func_00180DA0(void*,f32*,f32*,f32);
f32 func_001FC8C0(s32 seed,void*p,s32 audio,s32 x,s32 *q,s16 angle,f32 a,f32 intensity){
 f32 pos[3],rot[3],extra[3]; s32 n,i; f32 energy=0;
 if(audio){ if(p)*(s32*)((char*)p+0xC)|=2; n=func_0016CD50(audio,angle<<16); n=(n+(n>>31))>>1;
 for(i=0;i<n;i++){func_0016C238(audio,x,q,angle,i,pos,rot,0,a); energy+=pos[1]*pos[1]*pos[1];
 while(energy>0){energy-=D_00481038; f32 scale=pos[1]*D_00481034*D_0048103C;
 pos[0]=(((f32)func_00153FA8(seed)*0.000015258789f)-0.5f)*scale;
 pos[1]=(((f32)func_00153FA8(seed)*0.000015258789f)-0.5f)*scale;
 pos[2]=(((f32)func_00153FA8(seed)*0.000015258789f)-0.5f)*scale;
 extra[0]=(f32)func_00153FA8(seed)*0.000015258789f*D_00481030;
 extra[1]=(f32)func_00153FA8(seed)*0.000015258789f*D_00481030;
 extra[2]=(f32)func_00153FA8(seed)*0.000015258789f*D_00481030;
 if(intensity!=0){pos[0]+=func_0015A070(angle)*intensity;pos[1]+=func_0015A100(angle)*intensity;}
 func_00180DA0(D_007D7060,pos,extra,(f32)func_00153FA8(seed)*0.000015258789f*D_00481040);
 }}}
 return 0;
}
