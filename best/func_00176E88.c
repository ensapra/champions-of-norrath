typedef struct { f32 x,y,z; } Vec3;
extern f32 func_00175FE0(void *, Vec3 *, Vec3 *, f32);
extern f32 func_001770F8(Vec3 *, Vec3 *);
s32 func_00176E88(void *obj, Vec3 *start, Vec3 *end, void *out, f32 radius) {
 Vec3 a=*start, b=*end, d, p, hit;
 f32 t, step, limit, one=1.0f, ten=10.0f;
 s32 tries=0;
 d.x=b.x-a.x; d.y=b.y-a.y; d.z=b.z-a.z;
 t=d.x*d.x+d.y*d.y+d.z*d.z;
 if (t != 0.0f) { f32 inv=one/t; d.x*=inv; d.y*=inv; d.z*=inv; }
 limit=radius+radius; if(limit>24.0f) limit=24.0f;
 p=a;
 do {
   Vec3 q=p;
   func_00175FE0(obj,&q,&hit,radius);
   step=func_001770F8(&hit,&d);
   if(step<1.0f) { if(tries) return 0; tries=1; }
   else { p.x+=d.x*step; p.y+=d.y*step; p.z+=d.z*step; }
   radius-=limit;
 } while(radius>ten);
 return 1;
}
