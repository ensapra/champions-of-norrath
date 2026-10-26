typedef struct { u64 q; u32 w; } S12;
typedef struct { f32 x,y,z; } V3;
typedef struct { s32 flags; char pad[0x44]; s32 vptr; } ObjV;
s32 func_00181660(void*,void*,s32,s32,s32,u8,s32,s32,s32,s32,s32);
s32 func_0020D520(void*,s32,void*,s32,s32,s32,void*,s32,f32,void*);
void func_0020DDE8(void *a0, S12 a1) {
 s32 v=*(s32*)((char*)a0+8);
 V3 *src=(V3*)((char*)a0+0x10);
 V3 base=*(V3*)&a1;
 V3 sum={base.x+src->x,base.y+src->y,base.z+src->z};
 V3 half={sum.x*0.5f,sum.y*0.5f,sum.z*0.5f};
 if(v<=0)return;
 func_00181660(&base,&half,255,255,255,(u8)v,255,255,0,255,0);
 s32 tex=*(s32*)((char*)a0+0xC);
 void *entity=*(void**)((char*)a0+0x1C);
 if(tex && entity) {
  void *obj=*(void**)((char*)entity+0xC);
  s32 flags=*(s32*)((char*)obj+0xC);
  if(flags&0x20) {
   void *table=*(void**)((char*)obj+0x48);
   s16 off=*(s16*)((char*)table+0x80);
   s32 fn=*(s32*)((char*)table+0x84);
   s32 ret=((s32(*)(void*))fn)((char*)obj+off);
   func_0020D520(&half,0,&sum,v,*(s32*)a0,5,*(void**)((char*)entity+0xC),ret,*(f32*)((char*)a0+4),(char*)*(void**)((char*)entity+0xC)+0x120);
  } else {
   void *table=*(void**)((char*)obj+0x48);
   s16 off=*(s16*)((char*)table+0x80);
   s32 fn=*(s32*)((char*)table+0x84);
   s32 ret=((s32(*)(void*))fn)((char*)obj+off);
   func_0020D520(&half,0,&sum,v,*(s32*)a0,5,*(void**)((char*)entity+0xC),ret,*(f32*)((char*)a0+4),0);
  }
 } else {
  func_0020D520(&half,0,&sum,v,*(s32*)a0,5,0,0,*(f32*)((char*)a0+4),0);
 }
}
