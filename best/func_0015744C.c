#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void func_0015744C(u8*o,s32 a){void*ctx=F(o,void*,0x4c);s32 x=F(o,s32,0x810);s32 y=F(o,s32,0x814);s32 b=F(o,s32,0x5d4);x+=F(o,s32,0x5a0);y+=F(o,s32,0x5a4);x+=b;y+=b;((void(*)(s32,s32,s32,void*))F(ctx,void*,0x124))(a,x,y,o+0x818);}
