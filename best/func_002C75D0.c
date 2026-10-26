extern f32 D_00483110;
extern s32 D_00484F44;
extern u8 D_00408600[];
extern s32 D_0042A3E8[];
extern f32 D_008D8470[];
extern s32 func_002C7D60(void *);
extern void func_0013EB60(void *);
extern s32 func_001353D8(void *);
extern void *func_00180338(s32);
extern void func_00157668(void *, void *, s32);
extern void func_001803C0(s32, void *);
extern s32 func_0015E948(void *);
extern void func_00180DA0(void *, void *, void *, f32);
extern void func_00180380(s32);
s32 func_002C75D0(void *o, void *p) {
 f32 x=*(f32*)((char*)o+0x18)-D_00483110;
 *(f32*)((char*)o+0x18)=x;
 if (x<0.0f) {
   if (o) {
    s32 a=func_002C7D60(o);
    (void)a;
    func_0013EB60((char*)o+0x1c);
    s32 n=*(s8*)o+0x36;
    s32 ix=func_001353D8((char*)o+0xc);
    void *q=func_00180338(*(s32*)((char*)o+0x58));
    (void)ix;(void)q;
    func_00157668((char*)o+0x50,(char*)o+0xa0,0);
    func_001803C0(*(s32*)((char*)o+0x58),(char*)o+0x50);
    if(n>0) {
     for(s32 i=0;i<n;i++) {
      f32 a,b,c;
      do { a=(f32)func_0015E948(o)/65536.0f*2-1; b=(f32)func_0015E948(o)/65536.0f*2-1; c=(f32)func_0015E948(o)/65536.0f*2-1; } while(a*a+b*b+c*c>1);
      f32 l=1.0f/(a*a+b*b+c*c);
      a*=l;b*=l;c*=l;
      f32 t=(f32)func_0015E948(o)/65536.0f*2-1;
      f32 u=(f32)func_0015E948(o)/65536.0f*2-1;
      f32 v=(f32)func_0015E948(o)/65536.0f*2-1;
      func_00180DA0(D_008D8470,(char*)o+0x30,(char*)o+0x40,0.0f);
     }
    }
   }
   func_00180380(*(s32*)((char*)o+0x58));
   for(s32 i=0;i<D_00484F44;i++) {
    if(*(s32*)((char*)D_00408600+*(s32*)D_0042A3E8*0x5db0+0x5570)!=*(s32*)((char*)o+0xc)) func_002C7D60(o);
   }
 } else if(o) {
   return 0;
 }
 return 0;
}
