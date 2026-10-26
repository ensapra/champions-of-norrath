typedef struct{f32 x,y,z;}V3; typedef struct{V3 p;u32 gap;void*hit;u32 gap2[2];V3 mn;V3 mx;}BoxTemps;
s32 func_0017A610(s32,V3*,V3*,void**,s32);
s32 func_0017DB78(s32 unused,V3*src,V3*out,f32 r){BoxTemps t;V3 *lo=&t.mn,*hi=&t.mx;t.p=*src;
lo->x=t.p.x-r-1.f;lo->y=t.p.y-r-1.f;lo->z=t.p.z-1.f;
hi->x=t.p.x+r+1.f;hi->y=t.p.y+r+1.f;hi->z=t.p.z+60.f;
func_0017A610(unused,lo,hi,&t.hit,2);
if(out&&t.hit)out->x=*(f32*)((u8*)t.hit+16);return t.hit!=0;}
