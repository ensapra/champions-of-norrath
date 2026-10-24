typedef struct {s32 data,cap,min,count,grow;} Buf3;
void *func_0011B8D0(s32);void func_0011B968(void*);s32 func_001A24AC(void*,void*,s32);s32 func_0011B940(s32,s32);
s32 func_00111AC0(Buf3 *b){s32 n=b->cap;if(n>0){void *p=func_0011B8D0(n*1220);if((s32)p<b->data){func_001A24AC(p,(void*)b->data,b->count*1220);if(b->data)func_0011B968((void*)b->data);b->data=(s32)p;return 1;}func_0011B968(p);}return 0;}
extern u8 func_001BCB38[];extern u8 D_010C2A70[],D_010C2A88[];extern s32 D_010C2A60[];
void func_00110EA8(void*,s32,s32);void func_00143FC8(void*,s32,s32);void func_001113D8(void*);void func_001442D8(void*);
extern s32 D_010C2AB8[],D_010C2ABC[],D_010C2AB4[],D_010C2AB0[],D_010C2AAC[],D_010C2AA8[],D_010C2AA4[],D_010C2AA0[],D_010C2A9C[];
void func_00111B60(void){func_00110EA8(func_001BCB38+0xE10,10,100);func_00143FC8(D_010C2A70,10,10);func_00143FC8(D_010C2A88,10,10);D_010C2A60[0]=2;}
void func_00111BC0(void){D_010C2AB8[0]=0;D_010C2ABC[0]=0;D_010C2AB4[0]=0;D_010C2AB0[0]=0;D_010C2AAC[0]=0;D_010C2AA8[0]=0;D_010C2AA4[0]=0;D_010C2AA0[0]=0;D_010C2A9C[0]=0;func_001113D8(func_001BCB38+0xE10);func_001442D8(D_010C2A70);func_001442D8(D_010C2A88);}
void func_00110F58(Buf3 *b){s32 g=b->grow,c=b->cap,n=c-g*2;if(c-g*3>=b->count && n>=b->min){b->cap=n;b->data=func_0011B940(b->data,n*1220);}}
