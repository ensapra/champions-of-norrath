typedef struct { f32 x,y,z; } Vec3;
s32 func_00144CB8(void *, void *);
void func_0013EB60(void *);
s32 func_00153FA8(void *);
void func_00180DA0(void *, void *, void *, f32);
void func_002A0888(void *, s32);
f32 D_004829A0;
extern u8 D_008D6F50[]; extern u8 D_008D6FA0[];
void func_002A0148(void *p) {
 s32 i; s32 count; s32 r; f32 thirty=30.0f;
 struct { u64 pad[2]; Vec3 value; } tmp; Vec3 b,c,d,e,f,g,h,j;
 if (*(s32*)((u8*)p+0x60)!=0) return;
 count=++*(s32*)((u8*)p+0x6C);
 tmp.value=*(Vec3*)((u8*)p+0x54);
 r=func_00144CB8(p,&tmp.value)&1;
 if(r) { func_002A0888(p,r); return; }
 if(count>=0x259) {func_002A0888(p,0);return;}
 b=*(Vec3*)((u8*)p+0x10); *(Vec3*)((u8*)p+0xA0)=b;
 func_0013EB60((u8*)p+0x70);
 for(i=0;i<46;i++) {
  do {
   c.x=(2.0f*((f32)func_00153FA8(p)*0.000015258789f))-1.0f;
   c.y=(2.0f*((f32)func_00153FA8(p)*0.000015258789f))-1.0f;
   c.z=(2.0f*((f32)func_00153FA8(p)*0.000015258789f))-1.0f;
  } while(c.x*c.x+c.y*c.y+c.z*c.z>1.0f);
  d.x=c.x*thirty; d.y=c.y*30.0f; d.z=c.z*30.0f;
  do {
   e.x=(2.0f*((f32)func_00153FA8(p)*0.000015258789f))-1.0f;
   e.y=(2.0f*((f32)func_00153FA8(p)*0.000015258789f))-1.0f;
   e.z=(2.0f*((f32)func_00153FA8(p)*0.000015258789f))-1.0f;
  } while(e.x*e.x+e.y*e.y+e.z*e.z>1.0f);
  f.x=e.x*30.0f; f.y=e.y*30.0f; f.z=e.z*30.0f;
  Vec3 center=*(Vec3*)((u8*)p+0x10);
  Vec3 v; v.x=center.x+d.x*D_004829A0; v.y=center.y+d.y*D_004829A0; v.z=center.z+d.z*D_004829A0;
  Vec3 w; w.x=center.x+f.x*D_004829A0; w.y=center.y+f.y*D_004829A0; w.z=center.z+f.z*D_004829A0;
  if(i&1) func_00180DA0(D_008D6F50,&v,&d,0.0f); else func_00180DA0(D_008D6FA0,&v,&d,0.0f);
 }
}
