typedef int u128 __attribute__((mode(TI)));
typedef struct { u64 nloop:15; u64 eop:1; u64 id:30; u64 pre:1; u64 prim:11; u64 flg:2; u64 nreg:4; u64 regs0:4; u64 regs:60; } Tag;
typedef struct { s32 a,b,c,d; union { u128 q; Tag t; } g; u8 pad[0x20]; u64 f40; u8 pad2[0x28]; u64 f70; } S;
void func_0018DFB8(void*,s32,s32,s32,s32,s32,s32,s32,s32,s32,s32);
void func_00173B00(S*p,s32 a1,s16 a2,s16 a3,s16 a4,s32 a5){
if((a5<<16)!=0)func_0018DFB8((char*)p+32,a4,0x800-((s32)a2>>1),0x800-((s32)a3>>1),a2,a3,0,0,0,0,0);
p->g.q=0;
p->g.t.nloop=6;p->g.t.eop=1;p->g.t.nreg=1;p->g.t.regs0=14;
p->b=0;p->a=0x60000007;p->f70=0x20000;p->f40=0x3f80000080000000ULL;p->d=0x50000007;p->c=0x11000000;}
