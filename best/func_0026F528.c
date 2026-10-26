s32 func_002FB320(f32);
s32 func_002FB5C0(s32, s32);
s32 func_002FB618(s32, s32);
s32 func_002FBA48(s32, s64);
f32 func_002FBC20(s32);
typedef struct { s32 flags; f32 pad[3]; f32 a; f32 b; } Obj;
extern s32 D_0042A3D8[];
extern Obj D_0034BEB8[];
extern s64 D_00475D58;
s32 D_00484F48;
s32 func_0026F528(void *arg0) {
 s32 n=D_00484F48, found=0, idx, id, h, r1, r2;
 f32 best=0.0f, v;
 Obj *o;
 if (n>0) {
   id=*(s32*)((char*)arg0+0x44);
   while(found<n) {
    if (D_0042A3D8[found]==id) {
     o=&D_0034BEB8[id];
     h=func_002FB320(o->a);
     if(func_002FBA48(h,0)<0) h=func_002FB618(0,h);
     if(func_002FBA48(h, (s64)0x3fe0000000000000ULL)>=0) return id;
     h=func_002FB320(o->b);
     if(func_002FBA48(h,0)<0) h=func_002FB618(0,h);
     if(func_002FBA48(h,D_00475D58)>=0) return id;
     if(o->flags&0x400) return id;
     found++;
     break;
    }
    found++;
   }
 }
 id=D_0042A3D8[0];
 for(idx=0;idx<n;idx++) {
   r1=D_0042A3D8[idx]; o=&D_0034BEB8[r1];
   h=func_002FB320(o->a);
   if(func_002FBA48(h,0)<0) h=func_002FB618(0,h);
   r2=func_002FB320(o->b);
   if(func_002FBA48(r2,0)<0) r2=func_002FB618(0,r2);
   v=func_002FBC20(func_002FB5C0(h,r2));
   if(o->flags&0x400) v+=0.5f;
   if(best<v) {id=r1;best=v;}
 }
 return id;
}
