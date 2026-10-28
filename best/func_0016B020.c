typedef union {u64 d; struct {s16 x,y;} s;} Pos16B;
typedef struct {u8 pad[0x10]; Pos16B p; u64 pad18;} Vtx16B;
typedef struct {u8 pad[0x4DC]; u16 x; u16 pad4DE; u16 y;} Obj16B;
void func_0016B020(Obj16B *o,s32 dir,s32 x,s32 y,s32 w,s32 h,Vtx16B *v) {
 s32 sx,sy,i; u16 oy,ox;
 switch(dir){case 1:sx=1;sy=-1;break;case 2:sx=-1;sy=1;break;case 3:sx=1;sy=1;break;case 0:default:sx=-1;sy=-1;break;}
 ox=o->x; oy=o->y;
 v->p.s.y=o->y+y; v->p.s.x=o->x+x; v++;
 for(i=7;i>=0;i--){v->p.d=v[-1].p.d;v++;}
 v->p.s.y=oy+(sy*h+y);v->p.s.x=ox+x;v++;
 v->p.s.y=oy+(sy*h+y);v->p.s.x=ox+(sx*w+x);v++;
 v->p.s.x=ox+(sx*w+x);v->p.s.y=oy+y;
}
