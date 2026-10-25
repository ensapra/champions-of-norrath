extern void mat3x3_mul_vec3(f32 *, void *, void *, void *);
void func_0015AB08(void *a, f32 *b, f32 *c, void *d, f32 *e) {
 f32 scratch[16], dx,dy,dz;
 f32 *v=scratch+8;
 mat3x3_mul_vec3(v,(char*)a+0x68,d,e);
 dx=b[2]-*(f32*)((char*)a+0x18); dy=b[1]-*(f32*)((char*)a+0x14); dz=b[0]-*(f32*)((char*)a+0x10);
 scratch[0]=dz; scratch[1]=dy; scratch[2]=dx;
 scratch[12]=v[1]*dx-v[2]*dy;
 scratch[13]=v[2]*dz-v[0]*dx;
 scratch[14]=v[0]*dy-v[1]*dz;
 e[0]=scratch[12]; e[1]=scratch[13]; e[2]=scratch[14];
 scratch[4]=c[0]**(f32*)a; scratch[5]=c[1]**(f32*)a; scratch[6]=c[2]**(f32*)a;
 e[0]+=scratch[4]; e[1]+=scratch[5]; e[2]+=scratch[6];
}
