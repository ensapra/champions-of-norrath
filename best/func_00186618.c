typedef struct{u64 lo,hi;} U128; typedef struct{s32 x0,x4,x8,xc;} A; typedef struct{u32 x0,x4,x8,xc;} B;
extern void func_00191678(s32); extern void func_001916D0(s32,s32); extern void func_001917D8(s32,s32); extern void func_00191860(s32,U128); extern void func_00191878(s32); extern void func_001919A0(s32,u64); extern void ovl_ntgui2_func_00191830(s32);
void func_00186618(s32 a,A*p,B*q,u32 z){ volatile u64 pad[2]; U128 v; s32 x,y,w,t,jj; s64 h; u64 k=(u64)z<<32; pad[0]=0;pad[1]=0;
func_001916D0(a,0);func_001917D8(a,0);v.lo=0x9400000000008000ULL;v.hi=0x0004000014141410ULL;func_00191860(a,v);func_001919A0(a,76);func_001919A0(a,q->x0);
x=p->x0;y=p->x4;t=p->xc;w=x+0x6c00;h=(y+0x7200)<<16;jj=x+p->x8;func_001919A0(a,w|h|k);func_001919A0(a,q->x4);jj+=0x6c00;func_001919A0(a,jj|h|k);func_001919A0(a,q->x8);h=(y+t+0x7200)<<16;func_001919A0(a,w|h|k);func_001919A0(a,q->xc);func_001919A0(a,jj|h|k);func_00191878(a);ovl_ntgui2_func_00191830(a);func_00191678(a);}
