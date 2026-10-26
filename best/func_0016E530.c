#define F(p,o) (*(s32*)((char*)(p)+(o)))
s32 func_0014CE60(s32,s32,s32);
s64 func_0016E530(void *p) {
 ((void(*)(s32,s32,s32))func_0014CE60)(F(p,0x910),F(p,0x5a0),F(p,0x5a4));
 ((void(*)(s32,s32,s32))func_0014CE60)(F(p,0x914),F(p,0x5a0)+F(p,0x92c),F(p,0x5a4));
 { s32 y=(F(p,0x934)>>1)-(F(p,0x5b0)>>1); s32 x=F(p,0x5a0)+F(p,0x92c)-(F(p,0x930)>>1); return func_0014CE60(F(p,0x918),x,F(p,0x5a4)-y); }
}
