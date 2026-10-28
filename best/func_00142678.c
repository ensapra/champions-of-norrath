typedef struct{s32 a;s64 x;s32 b;s64 y;s64 z[2];} Args;
extern s32 D_010D4450[],D_010D4460[],D_010D4468[],D_010D446C[],D_010D4470[],D_010D4478[];
extern void func_0010A4D0(s32,s32,s32);
extern s32 func_0010A5B8(s32,s32,s32,s32,s32);
extern s32 func_00142888(s32);
extern void func_0014CBF4(s32,Args*,s32,s32);
extern void func_0014D240(s32);
void func_00142678(void){
 Args ar; s32 d=D_010D4470[1]-D_010D4470[0],v16,v17,q;
 if(func_00142888(D_010D4470[1])){
 s32 t6=D_010D446C[0]-D_010D4468[0]; s32 lo=d*D_010D4468[0]/D_010D446C[0];
 v16=lo;q=lo<40;if(q)v16=40;
 v17=D_010D4470[0]+(d-v16)*D_010D4478[0]/t6;
 s32 r=func_0010A5B8(D_010D4450[0],q,t6,D_010D4470[0],D_010D4478[0]);
 if(r==0&&D_010D4450[0])func_0014D240(D_010D4450[0]);
 if(D_010D4450[0])func_0010A4D0(D_010D4450[0],1,0x40);
 }else{v16=d;v17=D_010D4470[0];if(D_010D4450[0])func_0010A4D0(D_010D4450[0],0,0);}
 ar.a=10;ar.x=v17;ar.b=15;ar.y=v16;func_0014CBF4(D_010D4460[0],&ar,2,15);
}
