typedef struct { f32 x,y,z,w; } Q;
f32 func_0015A070(s32); f32 func_0015A100(s32);
void func_00159E00(Q *q,s32 a,f32 x,f32 y,f32 z) {
 s32 ang=(a<<16)>>17; f32 r=1.0f/__builtin_sqrt(x*x+y*y+z*z);
 f32 w=func_0015A070(ang); f32 t=func_0015A100(ang);
 q->w=w; t*=r; q->x=t*x; q->y=t*y; q->z=t*z;
}
