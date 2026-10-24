void func_002DDCE8(void);void func_00100248(void){func_002DDCE8();}
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
s32 func_0010B4A8(void*a,void*b){s64 f;if(!b)return 0;if(b==a)return 0;f=F(b,s32,12);if(!(f&0x60))return 0;if(f&8)return 0;if(F(a,s16,0x318)){if(f&0x40)return 0;if(F(b,s16,0x318))return 0;}else if(!(f&0x40)&&!F(b,s16,0x318))return 0;if(f&0x20){s64 v=F(b,s64,0xA0);if(v&0x4000000)return 0;if(v&0x800)return 0;}return(f&0x40)?2:1;}
f32 D_0047FC70,D_0047FC74,D_0047FC78;s32 D_00484538,D_00484CD8;
f32 func_00112960(void){f32 f=1.0f;switch(D_00484CD8){case 0:f=D_0047FC70;break;case 2:f=D_0047FC74;break;case 3:f=5.0f;break;}if(D_00484538==2)f*=D_0047FC78;return f;}
typedef struct __attribute__((packed, aligned(4))){u64 a;s32 b;} P12;
typedef struct {s16 off,idx;s32(*fn)(void*,s32,P12*);} VE;
s32 func_00112A98(void*a){void*p=F(a,void*,0x240);if(p){P12 c=*(P12*)((char*)F(p,void*,12)+16);VE*e=(VE*)((char*)F(a,void*,0x48)+0xB0);e->fn((char*)a+e->off,0,&c);}return 0;}
