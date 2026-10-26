typedef struct { unsigned char b[0x100]; } O; typedef struct {f32 x,y,z;} V;
void func_00159EC0(V*,V*,V*); void func_00159F90(void*); void func_00159CD8(void*,void*,f32); void func_00159150(void*,f32*,void*); void mat3x3_mul_vec3(void*,void*,void*);
void func_0015B118(O*o,V*a,V*b,f32 t){ V v0,v1,v2; f32 qx,qy,qz,qw; f32 h[16]; V tmp; func_00159EC0(&v0,(V*)(o->b+0x8c),(V*)(o->b+0x1c)); o->b[0]=o->b[0]; func_00159F90(o->b+0x1c); qw=*(f32*)(o->b+0x1c); qx=*(f32*)(o->b+0x20); qy=*(f32*)(o->b+0x24); qz=*(f32*)(o->b+0x28); }
