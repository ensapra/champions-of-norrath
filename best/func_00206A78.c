struct Obj { s32 a0; char pad4[4]; s32 a8; s32 aC; s32 a10; };
struct Arg { char pad0[0xC]; s32 fC; char pad10[8]; s32 f18; char pad1C[8]; struct Obj *obj; char pad28[0x10]; s16 f38; char pad3A[0xBA]; s32 fF4; char padF8[0x130]; s64 f228; };
s64 func_0016C970(s32,s64); void *func_001441B8(s32); void func_001E5190(void*,void*,s16,s32,void*,s32,s32,s32,f32,s64,s32,s32);
void func_00206A78(struct Arg *arg0,u32 arg1) {
 s64 old=func_0016C970(arg0->obj->aC,arg0->fF4);
 switch(arg1) {
 case 0: arg0->fF4|=2; break; case 1: arg0->fF4|=4; break;
 case 2: arg0->fF4|=8; break; case 3: arg0->fF4|=0x10; break;
 case 4: arg0->fF4|=0x20; break; case 5: arg0->fF4|=0x40; break;
 case 6: arg0->fF4|=0x80; break; case 7: arg0->fF4|=0x100; break;
 }
 s64 newer=func_0016C970(arg0->obj->aC,arg0->fF4);
 arg0->f228=newer;
 old &= ~newer;
 void *p=func_001441B8(0x268);
 if(p){
   struct { char pad[8]; s32 f8; } temp;
   temp.f8=arg0->f18;
   func_001E5190(p,&temp,arg0->f38,arg0->obj->aC,(char*)arg0+0x120,arg0->obj->a0,arg0->obj->a8,arg0->obj->a10,1.0f,old,0xE,2);
   if(p) *(f32*)((char*)p+0x1C4)+=2.0f;
 }
}
