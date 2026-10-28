typedef int Q __attribute__((mode(TI)));
typedef union {u64 d[2]; Q q;} U;
void func_00191678(s32);s32 func_001916D0(s32,s32);void func_001917D8(s32,s32);void func_00191860(s32,Q);void func_00191878(s32);void func_001919A0(s32,u64);void ovl_ntgui2_func_00191830(s32);
void func_001868C0(s32 a0,s32 a1,s32 a2,s32 a3,s32 a4,s32 a5,u64 a6){
U x;
func_001916D0(a0,0);func_001917D8(a0,0);
x.d[0]=0x5400000000008000UL;x.d[1]=0xF4410;
func_00191860(a0,x.q);func_001919A0(a0,2);
func_001919A0(a0,(u32)a5);
func_001919A0(a0,(a1+0x6c00)|((u64)(a2+0x7200)<<16)|(a6<<32));
func_001919A0(a0,(a3+0x6c00)|((u64)(a4+0x7200)<<16)|(a6<<32));
func_001919A0(a0,0);func_00191878(a0);ovl_ntgui2_func_00191830(a0);func_00191678(a0);}
