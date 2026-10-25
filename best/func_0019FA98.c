extern double func_00171040(double,double),func_001798F0(double,double),func_0019FD70(double,double);
extern double D_00506658[],D_00506660[];
double func_0019FA98(double x,s32 n){
 union {double d;struct {s32 lo,hi;} w;} u;
 s32 k,h,l; double t;
 u.d=x;l=u.w.lo;h=u.w.hi;k=(h&0x7ff00000)>>20;
 if(k==0){if((l|(h&0x7fffffff))==0)return x;
 x=x*18014398509481984.0;
 u.d=x;h=u.w.hi;k=((h&0x7ff00000)>>20)-54;
 if(n < -50000)return x*D_00506658[0];}
 if(k==0x7ff)return x+x;
 k=k+n;
 if(k>=0x7ff){t=D_00506660[0];goto over;}
 if(k>0){u.d=x;u.w.hi=(h&0x800fffff)|(k<<20);return u.d;}
 if(k < -54){if(n>50000)t=D_00506660[0];else t=D_00506658[0];
 over:return func_0019FD70(t,x)*t;}
 k+=54;u.d=x;u.w.hi=(h&0x800fffff)|(k<<20);x=u.d;
 return x*5.55111512312578270212e-17;
}
