void mat3x3_mul_vec3(void *, void *, void *);
void func_00159F90(void *);
void func_003021B0(void *, s32, s32);
s32 D_00483E58;
void func_0015BCD0(void *arg0, f32 a, f32 b, f32 c, f32 d, f32 e) {
 f32 *p=(f32*)arg0; f32 *q=(f32*)((char*)arg0+0x1c);
 f32 v0=e*e,v1=d*d,v2=c*c, v3=b*a;
 func_003021B0(arg0,0,0x98); p[9]=1.0f;
 u32 r=D_00483E58*0x19660d+0x3c6ef35f;
 p[0]=1.0f/a; p[1]=12.0f/(v3*(v1+v0)); p[3]=12.0f/(v3*(v2+v1)); p[2]=12.0f/(v3*(v2+v0));
 D_00483E58=r; p[10]=(f32)(r>>16)*0.0000152587890625f;
 func_00159F90(q); p[14]=0;p[15]=0;p[16]=0;func_00159F90(q);
 f32 x=q[0],y=q[1],z=q[2],w=q[3];
 f32 k=2.0f/(x*x+y*y+z*z+w*w);
 f32 a1=z*k,a2=y*k,a3=x*k;
 f32 b1=z*a1,b2=y*a2,b3=x*a3;
 f32 c1=w*a1,c2=w*a3,c3=x*a1;
 f32 d1=w*a2,d2=x*a2,d3=y*a1;
 f32 e1=y*a1,e2=x*a1,e3=x*a2;
 float *m=(float*)((char*)arg0+0x44);
 m[5]=e1-d1;m[2]=e2+c2;m[1]=e3-c1;m[8]=1.0f-(b3+b2);
 p[17]=1.0f-(b2+b1);m[4]=1.0f-(b3+b1);m[3]=e3+c1;m[6]=e2-c2;m[7]=d3+c3;
 mat3x3_mul_vec3((char*)arg0+0x8c,(char*)arg0+0x68,(char*)arg0+0x38);
}
