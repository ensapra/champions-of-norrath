extern s32 func_00161DF0(void *, s32); extern u8 D_006CA1C0[];
void func_001627A0(void **arg0,s32 arg1,void *arg2){
u8 *base; s32 idx,row,col,n; s16 *src; f32 *dst; void *entry;
if (*arg0 == NULL) func_00161DF0(arg0,0);
base=(u8*)*arg0; if(base==NULL)base=D_006CA1C0;
idx=*(s16*)(base+8)-1;
{ s32 zero=0; if(!(zero<arg1))arg1=zero; }
row=0;if(arg1>=idx)arg1=idx;col=0;entry=base+arg1*0x18;
do {
src=(s16*)((u8*)entry+0x10); n=2;
dst=(f32*)((u8*)arg2+(col+row)*4);
while(n>=0){*dst=(f32)*src*(1.0f/4096.0f);src+=4;dst++;n--;}
row++;col+=2;entry=(u8*)entry+2;
}while(row<3);
entry=base+arg1*0x18;
*(f32*)((u8*)arg2+0x24)=(f32)*(s16*)((u8*)entry+0x16)*0.015625f;
*(f32*)((u8*)arg2+0x28)=(f32)*(s16*)((u8*)entry+0x1e)*0.015625f;
*(f32*)((u8*)arg2+0x2c)=(f32)*(s16*)((u8*)entry+0x26)*0.015625f;
}
