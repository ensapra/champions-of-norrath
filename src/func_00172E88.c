s32 D_00486994; s32 D_00486998; s32 D_0048699C; s32 D_004869A4; typedef struct { u32 next; u32 pad; u32 prev; u32 end; } Queue; extern Queue D_006E93D0;
void func_00172E88(s32 a,s32 b,s32 c,s32 d){
 u16 *p=(u16*)D_00486994; volatile u64 *node,*mid,*tail;
 *p += D_00486998*2; if(c>=0x281)c=0x280; if(a<0)a=0; if(b<0)b=0; if(d>=0x1c0)d=0x1bf;
 node=(volatile u64*)D_006E93D0.next;
 D_0048699C += D_00486998*2; D_00486998=0;
 node[0]=((u64)0x8000<<45); node[1]=0xE;
 mid=node+2; mid[1]=0x40; mid[0]=((u64)(a*2))|((u64)(c*2-1)<<16)|((u64)b<<32)|((u64)d<<48);
 D_006E93D0.next=(u32)(node+6); D_006E93D0.prev=(u32)node; node[0]|=1;
 tail=node+4; D_00486994=(s32)tail; tail[1]=0x53; tail[0]=0x2400000000008000ULL; D_004869A4=1; D_0048699C+=3;
}
