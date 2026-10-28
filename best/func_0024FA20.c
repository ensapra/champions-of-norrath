extern u8 D_007D8110[];
void func_0024FA20(s32 i, f32 x, f32 y) {
 u8 *base=D_007D8110; s32 off; f32 *p,*q;
 if(i==-1)return; i &=255; off=i<<2; off+=i; off<<=2; off-=i; off<<=2; off+=0x40;
 p=(f32 *)(base+off); q=p; *(volatile f32 *)&q[1]=x; *(volatile f32 *)&p[2]=y;
}
