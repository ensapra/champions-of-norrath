typedef struct {u8 pad[40];s32 ox,oy,w;u8 pad2[4];s32 *data;} O;typedef struct{f32 x,y;s32 z;} I;extern f32 D_004800B0;
void func_0017C7F0(O*o,I p,f32 t){
s32 w=o->w;
f32 s=D_004800B0;
s32 x0=(s32)((p.x-(t+5.0f))*s+1.0f)-o->ox;
s32 x1=(s32)((p.x+t+5.0f)*s+1.0f)-o->ox;
s32 y1=(s32)((p.y+t+5.0f)*s+1.0f)-o->oy;
s32 y0=(s32)((p.y-(t+5.0f))*s+1.0f)-o->oy;
s32 x,y;
for(x=x0;x<x1;x++){
 for(y=y0;y<y1;y++){
  s32 *q=&o->data[x+y*w];
  s32 v=*q; s32 h=v>>16;
  if(h<16) h=(s16)(h+1);
  *q=(v&0xFFFF)|(h<<16);
 }
}
}
