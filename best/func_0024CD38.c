extern f32 D_0037EE80[2];
extern f32 D_0037EF00[12];
struct Vec3 { f32 x,y,z; Vec3() {} };
void func_0024CD38(Vec3 a, f32 *out0, f32 *out1, f32 x, f32 y) {
 Vec3 p;
 p.x=a.x-D_0037EE80[0]; p.y=a.y-D_0037EE80[1]; p.z=a.z-D_0037EE80[2];
 Vec3 q; q=p;
 f32 d=q.x*q.x+q.y*q.y+q.z*q.z;
 f32 k;
 if(d>360.0f) { k=1.0f-(d-x)/(y-x); if(k<0.0f) k=0.0f; } else k=1.0f;
 f32 z=(q.x*D_0037EF00[0]+q.y*D_0037EF00[3]+q.z*D_0037EF00[6])/y;
 if(z< -1.0f) z=-1.0f;
 if(z>1.0f) z=1.0f;
 *out0=k*(1.0f-z); *out1=k*(z+1.0f);
}
