typedef struct { f32 x,y; } Pt;
typedef struct { s32 a,b,w,h; s16 x,y; s16 cells[]; } Grid;
typedef struct { u8 pad0[0xC]; Grid *g; u8 pad10[4]; u16 flags; s16 x,y; s16 rot; } Obj;
s32 D_00484188;
f32 D_00480028;
extern void func_00175D88(void*,s32,f32,f32,f32,f32);
extern void func_002F11B8(f32);
extern s32 func_002F1390(f32);
f32 func_001766C8(Pt p, f32 radius, Obj **list) {
 Obj *items[64]; f32 r=radius*.25f; D_00484188++;
 func_00175D88(items,64,p.x-radius,p.y-radius,p.x+radius,p.y+radius);
 func_002F11B8(r);
 s32 lim=(s32)r;
 if(!items[0]) return 0.0f;
 for(s32 i=0;items[i];i++){
  Obj *o=items[i]; Grid *g=o->g;
  if(g->y+o->x <= (s32)0xFFF0BDC0) continue;
  f32 dx=p.x-o->x,dy=p.y-o->y;
  f32 a=o->rot*D_00480028,b=o->y*D_00480028,x,y;
  if(o->flags&1){x=dx*a+dy*b;y=dx*b-dy*a;}else{x=dx*a+dy*b;y=-dx*b+dy*a;}
  x*=.25f;y*=.25f;
  s32 ix=func_002F1390(x),iy=func_002F1390(y);
  for(s32 yy=iy-lim;yy<=iy+lim;yy++)
   for(s32 xx=ix-lim;xx<=ix+lim;xx++)
    if(xx>=g->a&&xx<g->a+g->w&&yy>=g->b&&yy<g->b+g->h) {
      s16 *q=g->cells+(yy-g->b)*g->w+(xx-g->a);
      if((*q&1)&&((xx-x)*(xx-x)+(yy-y)*(yy-y)<r*r)) return 1.0f;
    }
 }
 return 0.0f;
}
