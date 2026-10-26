s32 func_0015AFAC(void*); s32 func_0015B210(void*); s32 func_0015BA94(void*); s32 func_0015BBCC();
#define F(o,n) (*(s32*)((u8*)(o)+(n)))
s32 func_0015B174(void *o) { if(F(o,0xb8c)<F(o,0xb94)){func_0015BBCC();func_0015B210(o);F(o,0x98)=2;} s32 t=F(o,0xbf0); if(F(o,0xb8c)>=t)return 0; F(o,0xb8c)=t;func_0015B210(o);F(o,0x98)=2;if(F(o,0xd10)==0){func_0015AFAC(o);}else{func_0015BA94(o);}return 1;}
