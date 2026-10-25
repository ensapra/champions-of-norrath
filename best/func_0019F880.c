f64 func_001798F0(f64,f64);s32 func_001799B0(f64,f64);extern f64 D_00506630[];
typedef union {f64 d;s32 w[2];} DU;
f64 func_0019F880(f64 x){
 DU u,y;s32 i0,i1,j0,i;u.d=x;i0=u.w[1];i1=u.w[0];j0=((i0>>20)&0x7ff)-0x3ff;
 if(j0<20){if(j0<0){if(D_00506630[0]+x>0.0){if(i0>=0){i0=0;i1=0;}else if(((i0&0x7fffffff)|i1)!=0){i0=0xbff00000;i1=0;}}}
 else{i=0x000fffff>>j0;if(((i0&i)|i1)==0)return x;
 if(D_00506630[0]+x>0.0){if(i0<0)i0+=0x00100000>>j0;i0&=~i;i1=0;}}}
 else if(j0>51){if(j0==1024)return x+x;else return x;}
 else{u32 j;i=(u32)0xffffffff>>(j0-20);if((i1&i)==0)return x;
 if(D_00506630[0]+x>0.0){if(i0<0){if(j0==20)i0+=1;else{j=(u32)i1+(1U<<(52-j0));if(j<(u32)i1)i0+=1;i1=j;}}i1&=~i;}}
 y.w[1]=i0;y.w[0]=i1;return y.d;
}
