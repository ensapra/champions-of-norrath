f32 func_0015A070(s16); f32 func_0015A100(s16);
void func_00156610(f32 *m,s32 axis,s16 angle) {
 f32 c=func_0015A070(angle),s=func_0015A100(angle);
 f32 r;
 switch(axis) {
 case 0: { register f32 a,b,d,e,f,g,n;
 a=m[3];n=-s;b=m[6];d=m[4];e=m[7];f=m[5];g=m[8];
 r=c*a+s*b;m[3]=r;r=c*d+s*e;m[4]=r;
 {f32 t=n*f+c*g;a=n*a+c*b;d=n*d+c*e;r=c*f+s*g;m[6]=a;m[7]=d;m[8]=t;m[5]=r;}return;}
 case 1: { register f32 a,b,d,e,f,g,n;
 a=m[0];b=m[6];d=m[1];e=m[7];f=m[2];g=m[8];
 r=c*a-s*b;m[0]=r;r=c*d-s*e;m[1]=r;{f32 t=s*f+c*g;a=s*a+c*b;d=s*d+c*e;r=c*f-s*g;m[6]=a;m[7]=d;m[8]=t;}break;}
 case 2: { register f32 a,b,d,e,f,g,n;
 a=m[0];n=-s;b=m[3];d=m[1];e=m[4];f=m[2];g=m[5];
 r=c*a+s*b;m[0]=r;r=c*d+s*e;m[1]=r;{f32 t=n*f+c*g;a=n*a+c*b;d=n*d+c*e;r=c*f+s*g;m[3]=a;m[4]=d;m[5]=t;}break;}
 default:return;
 }
 m[2]=r;
}
