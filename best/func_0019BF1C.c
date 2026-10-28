typedef struct { s32 a; s32 b; s32 flag; s32 c; s32 cnt; } G; extern G D_003642D0; extern u8 *D_004804D0; void func_001A24AC(s32,s32,s32); void func_0019BFD8(s32);
void func_0019BF1C(s32 i) {
 G *g=&D_003642D0; s32 j=i+1; s32 n=g->cnt-i;
 if(n>0) { s32 m=n-1; func_001A24AC(i*4+*(s32 *)(D_004804D0+0x54),j*4+*(s32 *)(D_004804D0+0x54),m*4); g->cnt--; func_0019BFD8(1); }
 else func_0019BFD8(0x13);
}
