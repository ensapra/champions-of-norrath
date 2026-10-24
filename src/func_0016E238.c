extern u8 func_001C8098[];
void func_0014CA30(s32);
void func_0014CE60(s32, s32, s32);
void func_0016E238(void)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
}
void func_0016E1F8(void *arg0)
{
    void *p = func_001C8098;
    p = *(void **)((u8 *)p + 0xD68);
    ((void (*)(void))p)();
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x910));
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x914));
    func_0014CA30(*(s32 *)((u8 *)arg0 + 0x918));
}
#define F(p,o) (*(s32*)((char*)(p)+(o)))
void func_0016E530(void *p){
func_0014CE60(F(p,0x910),F(p,0x5a0),F(p,0x5a4));
func_0014CE60(F(p,0x914),F(p,0x5a0)+F(p,0x92c),F(p,0x5a4));
{s32 y=(F(p,0x934)>>1)-(F(p,0x5b0)>>1); s32 x=F(p,0x5a0)+F(p,0x92c)-(F(p,0x930)>>1);func_0014CE60(F(p,0x918),x,F(p,0x5a4)-y);}
}
