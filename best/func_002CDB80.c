s8 D_004866CC,D_004844B4;
s32 D_00483E58,D_004866D0,D_0048440C,D_00483EF0,D_004866C8; s8 D_004866D4,D_004844B4;
extern char D_008DD400[],D_008DB280[],D_008DD280[],D_008DD2C0[],D_008DD340[],D_008DD380[],D_0047AC00[],D_0047AC10[],D_0047AC20[],D_0047AC30[],D_0047AC40[],D_0047AC50[],D_0047AC60[],D_0047AC70[],D_0047AC80[],D_0047AC90[],D_0047ACA0[];
void func_00303EB8(void*,void*,s32);void *func_00165B30(void*);void *func_00165DC0(void*,char*);
void func_00191200(s32);void func_002CD898(void);s32 CreateThread_2(void*);void StartThread_2(s32);void func_00172708(void*,s32,s32,s32,u32);void func_00190A48(s32);void func_0015FA40(void);void func_00164800(s32);
void func_002CDB80(void) {
 u8 tmp[0x50]; s32 seed, rnd, obj, a,b,c,d,e,f,j; char *name;
 if(D_004866CC)return;
 seed=D_00483E58;
 seed=seed*0x19660D+0x3C6EF35F;
 D_004866D0=0;
 rnd=((u32)seed>>16)%5;
 func_00303EB8(tmp,D_0047AC00,rnd);
 D_00483E58=seed;
 obj=(s32)func_00165B30(tmp);
 if(D_004844B4==2)name=D_0047AC30; else if(D_004844B4<3){if(D_004844B4==1)name=D_0047AC40;else name=D_0047AC50;}else if(D_004844B4==3)name=D_0047AC20;else if(D_004844B4==4)name=D_0047AC10;else name=D_0047AC50;
 a=(s32)func_00165DC0(tmp,name);
 b=(s32)func_00165DC0(tmp,D_0047AC60);
 c=(s32)func_00165DC0(tmp,D_0047AC70);
 d=(s32)func_00165DC0(tmp,D_0047AC80);
 e=(s32)func_00165DC0(tmp,D_0047AC90);
 f=(s32)func_00165DC0(tmp,D_0047ACA0);
 D_00483EF0=0;D_0048440C=4;
 for(j=2;j>=0;j--){
   func_00191200(0x80000000);
   func_00172708((void*)a,0,0,6,0x80606060);
   func_00172708((void*)b,0,0,6,0x80606060);func_00172708((void*)c,0,0,6,0x80606060);func_00172708((void*)d,0,0,6,0x80606060);func_00172708((void*)e,0,0,6,0x80606060);func_00172708((void*)f,0,0,6,0x80606060);
   __builtin_memcpy(D_008DD280,(void*)a,0x40);__builtin_memcpy(D_008DD2C0,(void*)b,0x40);__builtin_memcpy(D_008DD2C0+0x40,(void*)c,0x40);__builtin_memcpy(D_008DD340,(void*)d,0x40);__builtin_memcpy(D_008DD380,(void*)e,0x40);__builtin_memcpy(D_008DD380+0x40,(void*)f,0x40);func_00190A48(0);
 }
 D_00483EF0=1;func_0015FA40();func_00164800(obj);
 if(D_004866C8==-1){
  s32 *tp=(s32*)D_008DD400;tp[1]=(s32)func_002CD898;tp[2]=(s32)D_008DB280;tp[3]=0x2000;tp[4]=0;tp[5]=5;
  D_004866C8=CreateThread_2(tp);
 }
 D_004866CC=1;D_004866D4=0;StartThread_2(D_004866C8);
}
