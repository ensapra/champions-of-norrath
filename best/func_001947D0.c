extern u8 D_0044C620[]; extern s32 D_00408600[]; extern u8 D_0040DB70[]; extern s8 D_0048382D; extern s8 D_0048459C;
void func_001CD528(void); void func_00194300(void*); void func_00164050(void*,s32); void func_0013EAC8(void*,s32); void func_00112340(void*,s32); void func_001447D8(void*);
void func_001947D0(u8 *o,s32 flags) {
 u8 *end,*p; s32 i;
 if(D_0048382D==0) {
 D_0048459C=0;
 if(*(s8*)(o+0x452)==0) *(s32*)(D_0040DB70+*(s32*)(o+0x3C0)*0x5DB0)=0;
 i=0; p=(u8*)D_00408600;
 do { *(s32*)(p+(*(s32*)(o+0x3C0)*0x176C+i+0x155D)*4)=0; i++; } while(i<5);
 }
 *(u8**)(o+0x48)=D_0044C620;
 end=o+0x3C8; func_001CD528(); func_00194300(o+0x574); func_00164050(o+0x54C,2); func_0013EAC8(o+0x4F4,2); func_0013EAC8(o+0x4B8,2); func_00194300(o+0x4A8);
 if(end) {p=o+0x440; if(end!=p) {do {p-=0x18; func_00194300(p+8);}while(end!=p);}}
 func_00112340(o,0); if(flags&1) func_001447D8(o);
}
