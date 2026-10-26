extern f32 func_002F1368(void);
extern s32 func_002F6D90(f32 *, void *, s32, s32, s32, s32 *, f32);
extern s32 D_0047D438[];
extern u32 D_0047D74C[];
typedef struct { f32 x,y,z; } S_func_002F5760_arg0;
s32 func_002F5760(S_func_002F5760_arg0 *out, f32 x) {
 union { f32 f; u32 u; s32 i; } bits, xb;
 f32 a,b,c,d,e, sp[4];
 s32 i,j,k,ret;
 bits.f=x; xb.f=x; i=bits.u & 0x7fffffff;
 if(i<=0x3f490fd8){out->x=x;out->y=0.0f;return 0;}
 if(i<=0x4016cbe3){
   if(xb.i>0){a=x-1.5707855f;if((i&~15)!=0x3fc90fd0)b=0.000010804333f;else{b=6.0771e-11f;a-=0.000010804272f;}c=a-b;out->x=c;out->y=(a-c)-b;return 1;}
   a=x+1.5707855f;if((i&~15)!=0x3fc90fd0)b=0.000010804333f;else{b=6.0771e-11f;a+=0.000010804272f;}c=a+b;out->x=c;out->y=(a-c)+b;return -1;
 }
 if(i>0x43490f80){
   j=(i>>23)-0x86; bits.u=i-(j<<23); k=1;
   do{k--;c=(f32)bits.u;sp[1-k]=c;bits.f=(bits.f-c)*256.0f;}while(k>=0);
   sp[2]=bits.f;k=3;
   if(bits.f==0.0f){f32 *p=&sp[2];do{p--;k--;}while(*p==0.0f);}
   ret=func_002F6D90(sp,out,j,k,2,D_0047D438,bits.f);
   if(xb.i<0){out->x=-out->x;out->y=-out->y;return -ret;}return ret;
 }
 e=func_002F1368();out->x=e;out->y=0.0f;return 0;
}
