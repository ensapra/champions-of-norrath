extern f32 D_00482B5C; extern f32 D_00482B60; extern s32 D_004844A4; extern u8 D_00408600[];
void func_0013EF30(void*,void*,void**,s32); s32 func_0015E948(void*,s32,s32,s32);
void func_001DBBB0(s32,void*,void*,s32,void*,u32,f32,f32,f32);
void func_002A96B8(void *a,void *b) {
 unsigned char tmp[12],tmp2[12]; s32 n; f32 x,lo[3],hi[3]; void *list,*skip,*p,*v; s16 off; s32 (*fn)(void*); void **it; void *e;
 __builtin_memcpy(tmp,b,12);
 if (*(s32*)&D_004844A4 < *(s32*)((char*)a+0x18)) {
  if (*(s32*)&D_004844A4 < *(s32*)((char*)a+0x20)) {
   p=*(void**)((char*)a+0xC); v=*(void**)((char*)p+0x48); off=*(s16*)((char*)v+0x80); fn=*(s32(**)(void*))((char*)v+0x84);
   n=fn((char*)p+off); p=*(void**)((char*)a+0xC); __builtin_memcpy(tmp2,(char*)p+0x10,12);
   func_001DBBB0(n,(char*)p+0x120,tmp2,*(s16*)((char*)p+0x38),(char*)p+0x338,0x5E808080,D_00482B5C,*(f32*)((char*)p+0xE0),*(f32*)((char*)p+0xE4));
  }
  n=*(s32*)((char*)a+0x1C);
  if(n && (*(s32*)&D_004844A4%30)==0) {
   x=(f32)n; lo[0]=*(f32*)tmp-x;lo[1]=*(f32*)(tmp+4)-x;lo[2]=*(f32*)(tmp+8)-x;
   hi[0]=*(f32*)tmp+x;hi[1]=*(f32*)(tmp+4)+x;hi[2]=*(f32*)(tmp+8)+x; list=0;
   func_0013EF30(lo,hi,&list,0x40); skip=*(void**)((char*)a+0xC);
   if(list) { for(it=(void**)list;*it;it++) { e=*it; if(e!=skip && (*(s32*)((char*)e+0xC)&0x40)) { } } }
  }
 } else if(a) { p=*(void**)((char*)a+0x14); v=*(void**)((char*)p+8); ((void(*)(void*))*(void**)((char*)p+0xC))((char*)a+*(s32*)((char*)p+8)); }
}
