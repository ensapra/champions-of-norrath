typedef struct { f32 x,y,z; } V3; typedef struct { char p[0x28]; s32 ox,oy,w,pad; s32 *grid; } T; extern f32 D_004800AC;
void func_0017C6B0(T*t,V3 pos,f32 r){
 s32 x0=(s32)((pos.x-(r+5.0f))*D_004800AC+1.0f)-t->ox;
 s32 x1=(s32)((pos.x+r+5.0f)*D_004800AC+1.0f)-t->ox;
 s32 y1=(s32)((pos.y+r+5.0f)*D_004800AC+1.0f)-t->oy;
 s32 y0=(s32)((pos.y-(r+5.0f))*D_004800AC+1.0f)-t->oy;
 s32 w=t->w;
 s32 i=x0;
 while(i<x1) {
  s32 j=y0;
  if(j<y1) {
   s32 *p=t->grid+i+j*w;
   while(j<y1) {
    s32 v=*p, h=v>>16;
    if(h>0) h=(s16)(h-1);
    *p=(v&0xffff)|(h<<16);
    p+=w; ++j;
   }
  }
  ++i;
 }
}
