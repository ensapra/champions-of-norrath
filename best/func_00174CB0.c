s32 D_00485C4E; s16 D_00485C50;
extern char D_00484180[],D_00430750[];
void func_00303EB8(void*,void*);void func_00165B30(void*);void func_001703A0(void);
void func_00174CB0(void *obj) {
 u8 stack[0x80]; u8 *p=(u8*)obj; s32 n=*(s32*)p, i,j,k,l;
 s32 lo=(s16)D_00485C4E, hi=D_00485C50;
 if(n>0) {
   for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
       u8 *q=p+0x24+j*0x3c;
       if((*(s32*)(q+0x24)&0x800)!=0) {
          func_00303EB8(stack,D_00484180);
          func_00165B30(stack);
       }
     }
   }
 }
 func_001703A0();
 if(*(s32*)(p+0x60)==0||*(s32*)(p+0x7C)!=0)return;
 for(i=1;i<=n;i++) {
   for(j=0;j<3;j++) for(k=0;k<3;k++) for(l=0;l<3;l++) {
     s32 x=i+j, y=i+k, z=i+l;
     if(x>=lo&&x<=hi&&y>=lo&&y<=hi&&z>=lo&&z<=hi) {
       s32 idx=x-lo;
       s32 v=*(s32*)(*(s32*)(p+0x64)+idx*8+4);
       v+=0x1FFFF;
       if(v<0)v+=0x3FFFE;
       v >>=17;
       *(volatile s32*)(stack+0x10)=v;
     }
   }
 }
}
