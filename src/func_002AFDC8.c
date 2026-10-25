extern char D_00478F90[];
extern f32 D_00482CCC;
extern s32 func_001671F8(void *);
extern s32 func_00190E20(s32,s32,f32,f32,f32,f32,f32,f32,f32,f32);
s64 func_002AFDC8(void *arg0,s32 arg1,s32 arg2) {
 char *base=(char*)arg0; s32 out[2],r1,r2;
 {
  void *vtable=*(void**)(base+0x60); char *dispatch=(char*)vtable+0x48; s16 offset=*(s16*)dispatch;
  void (*fn)(void*,s32,s32,s32,s32*,s32*,f32)=*(void (**)(void*,s32,s32,s32,s32*,s32*,f32))(dispatch+4);
  fn(base+offset,0,arg2,0,&out[0],&out[1],D_00482CCC);
 }
 {
  void *vtable=*(void**)(base+0x60); char *dispatch=(char*)vtable+0x58; s16 offset=*(s16*)dispatch;
  s32 (*fn)(void*,s32,s32)=*(s32 (**)(void*,s32,s32))(dispatch+4); r1=fn(base+offset,1,arg2);
 }
 {
  void *vtable=*(void**)(base+0x60); char *dispatch=(char*)vtable+0x58; s16 offset=*(s16*)dispatch;
  s32 (*fn)(void*,s32,s32)=*(s32 (**)(void*,s32,s32))(dispatch+4); r2=fn(base+offset,2,arg2);
 }
 s32 r=func_001671F8(D_00478F90);
 return func_00190E20(arg1,r,(f32)out[0],(f32)out[1],(f32)r2,(f32)r1,0.f,0.f,0.f,0.f);
}
