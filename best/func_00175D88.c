s32 D_00484188;
f32 D_0048001C = 0.00625f;
f32 func_002F1390(f32);
typedef struct {u8 pad[8];s32 row0;s32 rowbase;s32 width;s32 rowmax;s16 **cells;u8 pad2[4];void *entries;} Grid;
typedef struct {s16 x,y,w,h;s32 state;u32 pad;u16 flags;} Entry;
void func_00175D88(Grid *g,s32 *out,s32 cap,f32 left,f32 top,f32 right,f32 bottom) {
 f32 unit=D_0048001C;
 s32 l=(s32)func_002F1390(left*unit), t=(s32)func_002F1390(top*unit);
 s32 r=(s32)func_002F1390(right*unit), b=(s32)func_002F1390(bottom*unit);
 s32 loX=t-g->rowbase, hiX=g->rowmax-1, v=b-g->rowbase;
 s32 loY=l-g->row0, hiY=g->width-1, w=r-g->row0, n=0;
 if(loX<0)loX=0;if(hiX>v)hiX=v;if(loY<0)loY=0;if(hiY>w)hiY=w;
 for(;loX<=hiX;loX++)for(s32 yy=loY;yy<=hiY;yy++){
  s16 *cell=g->cells[loX*g->width+yy];
  if(*cell!=-1){s16 *p=cell;do{Entry *e=(Entry*)((u8*)g->entries+(s32)*p*0x24);p++;
   if(e->state!=D_00484188 && !(e->flags&2) && !(right<(f32)e->x) && !(bottom<(f32)e->y) && !((f32)e->w<left) && !((f32)e->h<top)){
    e->state=D_00484188;out[n++]=(s32)e;if(n==cap-1)goto done;
   }
  }while(*p!=-1);}
 }
 done:out[n]=0;
}
