void func_00108308(void *, f32);
void func_00157668(void *, void *, s32);
void func_0015A100(s32);
void func_0016AE78(s32,s32,s32,void*,void*,s32,u64,s32,s32,s32);
void func_0016CBE8(s8*,s32);
void func_0016CD20(void);
void func_001815C8(void*,s32,s32,s32,f32,s32,s32,s32,s32,f32);
f32 D_0047FDA8;
f32 D_0047FDAC;
s8 D_00483C33;
s32 D_004844A4;
s32 D_004844BC;
void func_0014C1F0(void *p) {
  u8 a[16];
  u8 b[16];
  u8 c[16];
  void *v=(u8*)p+0x10;
  void *w=(u8*)p+0x110;
  if ((((u16*)p)[0xA0] ^ 1) & 1) {
    __builtin_memcpy(a,v,12);
    func_00157668(w,a,(s16)(((u16*)p)[0x1C]+0x4000));
  }
  s32 rate=D_004844A4;
  if (rate-3 < *(s32*)((u8*)p+0x104) ||
      (*(u64*)(*(u8**)((u8*)p+0x148)+0x28) & 0x800000000000ULL)) {
    func_0015A100(rate<<9);
    f32 x=14.0f;
    f32 y=__builtin_fabsf((f32)rate);
    y=y*x+x;
    s32 q=(s32)y;
    func_0016CBE8((s8*)&D_00483C33-3,1);
    *(s8*)&D_00483C33=(s8)q;
  } else {
    func_00108308((u8*)p+0x148,5.0f);
  }
  u64 flags=*(u64*)((u8*)p+0x150);
  void *out=(u8*)p+0x50;
  if (flags & 0x10000000) {
    s32 t=(u8)rate;
    if(t<30) {
      s32 d=t-15;
      if(d<0)d=-d;
      f32 x=(f32)(15-d)*D_0047FDA8;
      __builtin_memcpy(b,v,12);
      func_001815C8(b,128,128,128,D_0047FDA8,D_004844BC,
        (s16)((u16)rate<<10),3,10.0f,x*x*D_0047FDAC);
    }
  }
  __builtin_memcpy(c,v,12);
  func_0016AE78(*(s32*)((u8*)p+0x4C),*(s32*)((u8*)p+0x50),1,c,w,0,
     *(u64*)((u8*)p+0xE8),0,0,0);
  func_0016CD20();
}
