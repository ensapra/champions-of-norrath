s32 func_00153FA8(s32);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
void func_00180DA0(void*,void*,void*,s32,s32);
extern f32 D_004811C8;
extern f32 D_007D70C0[];
void func_002038F0(s32 a, void *p) {
 typedef struct { f32 x,y,z; } V;
 V first, second, delta;
 s32 count=0, q, r, n, idx;
 u32 temp;
 f32 x,y,z,scale=D_004811C8;
 first=*(V*)p;
 second=first;
 do {
  x=(2.0f*((f32)func_00153FA8(a)*0.0000152587890625f))-1.0f;
  y=(2.0f*((f32)func_00153FA8(a)*0.0000152587890625f))-1.0f;
  z=(2.0f*((f32)func_00153FA8(a)*0.0000152587890625f))-1.0f;
 } while(x*x+y*y+z*z>1.0f);
 delta.x=x*scale;delta.y=y*scale;delta.z=z*scale;
 first.x+=delta.x; first.y+=delta.y; first.z+=delta.z;
 q=func_00153FA8(a)<<16; q>>=16;
 r=func_00153FA8(a);
 second.x=(r%50)*func_0015A070(q);
 r=func_00153FA8(a);
 second.y=(r%50)*func_0015A100(q);
 r=func_00153FA8(a);
 second.z=(r%20)-10;
 second.x+=first.x;second.y+=first.y;second.z+=first.z;
 func_00180DA0(D_007D70C0,&second,&delta,(r%20)-10,0);
 count++;
}
