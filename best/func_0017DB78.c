typedef struct { f32 x,y,z; } V3;
typedef struct { V3 p; u32 gap; void *hit; u32 gap2[2]; V3 mn; V3 mx; } BoxTemps;
s32 func_0017A610(V3 *,V3 *,void **,s32);
s32 func_0017DB78(s32 unused,V3 *src,V3 *out,f32 r){
 BoxTemps t;
 V3 *a=&t.mn,*b=&t.mx;
 t.p=*src;
 a->x=t.p.x-r-1.0f; a->y=t.p.y-r-1.0f; a->z=t.p.z-1.0f;
 b->x=t.p.x+r+1.0f; b->y=t.p.y+r+1.0f; b->z=t.p.z+60.0f;
 func_0017A610(a,b,&t.hit,2);
 if(out && t.hit) out->x=*(f32*)((u8*)t.hit+0x10);
 return t.hit!=0;
}
