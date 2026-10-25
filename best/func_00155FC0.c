void func_00155FC0(void *arg0,void *arg1,void *arg2,void *arg3,void *arg4,f32 t){
 f32 a=t*t,b=a*t,c=a*3.0f;
 f32 w0=((2.0f*b)-c)+1.0f;
 f32 w1=(-2.0f*b)+c;
 f32 w2=(b-(2.0f*a))+t;
 f32 w3=b-a;
 f32 x0=((f32*)arg0)[0],x1=((f32*)arg0)[1],x2=((f32*)arg0)[2];
 f32 y0=((f32*)arg1)[0],y1=((f32*)arg1)[1],y2=((f32*)arg1)[2];
 f32 z0=((f32*)arg2)[0],z1=((f32*)arg2)[1],z2=((f32*)arg2)[2];
 f32 q0=((f32*)arg3)[0],q1=((f32*)arg3)[1],q2=((f32*)arg3)[2];
 ((f32*)arg4)[0]=x0*w0+y0*w1+z0*w2+q0*w3;
 ((f32*)arg4)[1]=x1*w0+y1*w1+z1*w2+q1*w3;
 ((f32*)arg4)[2]=x2*w0+y2*w1+z2*w2+q2*w3;
}
