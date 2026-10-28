#define F(p,t,o) (*(t*)((char*)(p)+(o)))
extern void (*func_001C7508[])(); typedef s32 (*Method)(void*,s32);
void func_001501EC(void *p,s32 x) {void *end=p+0x840,*n,*q; func_001C7508[40/4](); n=end; if(F(p,s32,0x854)&&F(end,s32,8)!=(s32)end) {do{ n=F(n,void*,8); if(F(n,s32,0)) {q=F(n,void*,0x10); F(F(q,void*,0x4c),Method,256)(q,x);}}while(F(n,s32,8)!=(s32)end);}}
