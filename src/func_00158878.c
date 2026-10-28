#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0015BA94(); void func_0015B210(void*);
s32 func_00158878(void*a,s32 t){if(!a)return 0;t=F(a,0xbf0);if(F(a,0xd0c)==t)return 0;F(a,0xb8c)=t;F(a,0xb94)=0;func_0015BA94(a);func_0015B210(a);F(a,0x98)=2;return 1;}
