typedef struct { char pad1[0x24]; s16 arr[8]; s32 pad2; s16 next; s16 f3A; s32 f3C; } E40;
typedef struct { char pad[0x18]; s32 x; s32 pad2; } F20;
s32 D_0048655C,D_00486560,D_00486564; extern E40 D_00438F08[]; extern F20 D_00440F08[];
void func_002BFBD8(void){ s32 i,j; D_0048655C=0; D_00486560=0;
for(i=0;i<0x200;i++){ D_00438F08[i].f3C=-1; if(i==0x1FF) D_00438F08[i].next=-1; else D_00438F08[i].next=i+1; D_00438F08[i].f3A=-2; for(j=7;j>=0;j--) D_00438F08[i].arr[j]=-1; }
{ s32 value=-2; for(j=7;j>=0;j--) D_00440F08[j].x=value; } D_00486564=0; }
