void mat3x3_transposed_mul_vec3(void*,void*,void*);
void func_00276370(u8*a){f32 tmp[12];s32 i;f32 one=1.0f;for(i=0;i<3;i++){f32 x=*(f32*)(a+0x45c+i*12-4),y=*(f32*)(a+0x45c+i*12),q=x*x+y*y;f32 z=one/__builtin_sqrtf(q);tmp[i*4]=x*z;tmp[i*4+1]=y*z;tmp[i*4+2]=0;tmp[i*4+3]=tmp[i*4];}
for(i=0;i<4;i++){u8*p=a+i*12;f32 *v=(f32*)(p+0x224);v[0]+=*(f32*)(a+0x10);v[1]+=*(f32*)(a+0x14);v[2]+=*(f32*)(a+0x18);mat3x3_transposed_mul_vec3(v,a+0x45c,p+0x1f4);}}
