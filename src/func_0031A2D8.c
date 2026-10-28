typedef struct { s16 x[29]; s16 parent; s16 rest[2]; } Node;
extern u8 D_00438F08[];
extern s32 D_00486560, D_00486564;
void func_0031A2D8(s32 n) {
u8 *b=D_00438F08; s32 o=n*64; s32 off=o+0x30; u8 *e=(u8*)(off+(s32)b);
s32 p=*(s16*)(e+10),cnt,i;
if(p==-2)return;
*(u16*)(e+8)=D_00486564; *(s16*)(e+10)=-2;
D_00486564=n; D_00486560--; cnt=*(s16*)(e+4); *(s16*)(e+4)=0;
for(i=0;i<cnt;i++){u32 c=((u16*)(o+(D_00438F08+12)))[i]&0x7fff; Node *nb=(Node*)D_00438F08; s16 *q=(s16*)((u8*)nb+4); q[16+c*32+p]=-1;if(nb[c].parent==p)func_0031A2D8(c);}
}
