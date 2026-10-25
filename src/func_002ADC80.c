extern char D_00478D98[];
extern s32 func_001671F8(void *);
extern s32 func_00190E20(s32,s32,f32,f32,f32,f32,f32,f32,f32,f32);
s64 func_002ADC80(void *arg0,s32 arg1,s32 arg2) {
 char *base=(char*)arg0;
 s32 r0,r1,r2;
 {
  void *vtable=*(void**)(base+0x60);
  char *dispatch=(char*)vtable+0x58;
  s16 offset=*(s16*)dispatch;
  s32 (*fn)(void*,s32)=*(s32 (**)(void*,s32))(dispatch+4);
  r0=fn(base+offset,0);
 }
 {
  void *vtable=*(void**)(base+0x60);
  char *dispatch=(char*)vtable+0x58;
  s16 offset=*(s16*)dispatch;
  s32 (*fn)(void*,s32,s32)=*(s32 (**)(void*,s32,s32))(dispatch+4);
  r1=fn(base+offset,1,arg2);
 }
 {
  void *vtable=*(void**)(base+0x60);
  char *dispatch=(char*)vtable+0x58;
  s16 offset=*(s16*)dispatch;
  s32 (*fn)(void*,s32,s32)=*(s32 (**)(void*,s32,s32))(dispatch+4);
  r2=fn(base+offset,2,arg2);
 }
 s32 r=func_001671F8(D_00478D98);
 return func_00190E20(arg1,r,(f32)r0,(f32)r2,(f32)r1,0.f,0.f,0.f,0.f,0.f);
}
