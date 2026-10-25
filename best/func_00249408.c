s32 func_00249E10(void); extern f32 D_00482004; extern u8 D_0042DD90[];
void *func_00249408(void *arg0) {
 f32 best=D_00482004; void *result=0; if(*(s32*)((u8*)arg0+0x3C0)) func_00249E10();
 u8 *pos=(u8*)arg0+0x10; u8 **cursor=(u8**)D_0042DD90; s32 count=9; void *node=*cursor;
loop:
 cursor=(u8**)((u8*)cursor+4);
 if(node) { void *obj=*(void**)((u8*)node+0xC); if((*(s32*)((u8*)obj+0xC)&8)==0 && !*(s32*)((u8*)obj+0x3C0)) {
  u8 *q=(u8*)obj+0x10; f32 x=*(f32*)pos; f32 y=*(f32*)(pos+4); f32 ox=*(f32*)q; f32 oy=*(f32*)(q+4); f32 dx=x-ox; f32 dy=y-oy; f32 z=*(f32*)(pos+8); f32 oz=*(f32*)(q+8); f32 dz=z-oz; f32 d=dx*dx+dy*dy+dz*dz;
  if(d<best){result=obj;best=d;}
 }}
 count--; if(count>=0){node=*cursor;goto loop;} return result;
}
