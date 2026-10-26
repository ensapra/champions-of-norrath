extern void *D_0048690C; extern void *D_00486910;
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void *func_00161450(void){void *v6=D_00486910,*v2=F(v6,void*,0x14),*v4=v6,*v5,*v7,*t;
if(v2&& (F(v2,u16,0x1c)&0x4800)){v5=D_0048690C;v7=v6;loop: t=F(v4,void*,0x10);if(t){void *v3=F(v4,void*,0xc);if(!v3)v7=t;else F(v3,void*,0x10)=t;v6=v7;F(F(v4,void*,0x10),void*,0xc)=v3;F(v4,void*,0xc)=v5;F(v5,void*,0x10)=v4;v5=v4;F(v5,void*,0x10)=0;}v2=F(v6,void*,0x14);v4=v6;if(v2&&(F(v2,u16,0x1c)&0x4800))goto loop;D_0048690C=v5;D_00486910=v7;}
t=F(v6,void*,0x10);v2=F(v6,void*,0x14);D_00486910=t;F(t,s32,0xc)=0;if(v2)F(v2,s32,4)=0;F(v6,void*,0xc)=D_0048690C;F(D_0048690C,void*,0x10)=v6;D_0048690C=v6;F(v6,s32,8)=1000000;F(v6,void*,0x10)=0;F(v6,s32,0x20)=0;F(v6,s32,0x24)=0;F(v6,void*,0x14)=0;return v6;}
