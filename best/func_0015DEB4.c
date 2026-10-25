s32 func_0014BA30(void*,void*); s32 func_0015EA84(void*); void func_0015EB28(void*); void func_0015EF14(void*);
extern s32 func_001C8E50(void);
#define R(p,o,t) (*(t*)((char*)(p)+(o)))
s32 func_0015DEB4(void*a,void*b,void*c){
s32 r=func_001C8E50(), n=0, q=0, x,y;
if(R(b,0x5a0,u64)!=R(c,0x5a0,u64)){n=1;r=1;}
if(R(b,0x5ac,s32)!=R(c,0x5ac,s32)){n++;r=1;}
if(R(b,0x5b0,s32)!=R(c,0x5b0,s32)){n++;r=1;}
if(!func_0014BA30((char*)b+0x5c0,(char*)c+0x5c0)){q=1;r=1;}
#define CMP(off) do{x=R(b,off,s32);y=R(c,off,s32);if(x!=y){R(a,off,s32)=x;R(a,0x98,s32)=2;r=1;}}while(0)
CMP(0xe80);CMP(0xea4);
#define BIT(off,bit) do{x=R(b,off,s32);y=R(c,off,s32);if(x!=y){R(a,off,s32)=x;R(a,0x98,s32)=2;R(a,0xeb0,u64)|=bit;R(a,0xea8,s32)=2;r=1;}}while(0)
BIT(0xe90,2); BIT(0xe94,4); BIT(0xe78,8); BIT(0xe7c,8);
x=R(b,0xe84,s32);if(x!=R(c,0xe84,s32)){R(a,0xe84,s32)=x;r=1;func_0015EF14(a);R(a,0x98,s32)=2;R(a,0xeb0,u64)|=16;R(a,0xea8,s32)=2;}
BIT(0xe88,1);BIT(0xe8c,1);
if(n)func_0015EB28(a);if(q)func_0015EA84(a);return r;
}
