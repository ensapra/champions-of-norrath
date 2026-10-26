typedef struct {u8 pad[0x1800]; s32 x0,x1,y0,y1; u8 data[1];} Grid;
s32 func_00264F48(void*,s32,s32,s32);u8 *func_00266490(void*,s32,s32);u8 *func_00266570(void*,s32,s32,s32);s32 func_00266788(void*,s32,s32);s32 func_00266C90(void*,...);s32 func_00266CB8(void*);s32 func_00266CE0(void*,s32,s32);
s32 func_00264738(Grid *g,s32 ox,s32 oy,void *map) {
 s32 row,col,n,x,y,v;u8 *p,*q;
 for(row=0;row<func_00266C90(map,ox);row++) {
  for(col=0;col<func_00266CB8(map);col++) if(func_00266CE0(map,row,col)) {
    x=ox+row;y=oy+col;
    if(x>=g->x0&&x<g->x1&&y>=g->y0&&y<g->y1){
      s32 a=x+0x40,b=y+0x40;if(a<0)a=x+0x5f;if(b<0)b=y+0x5f;
      p=(u8*)g+((((a-((a>>5)<<5))<<5)+(b-((b>>5)<<5)))*4);
    }else {p=(u8*)g+0x1810;if(!func_00266788(g,x,y))p=func_00266490(g,x,y);}
    if(*p)return 0;
  }
 }
 n=func_00266C90(map);
 for(row=0;row<n;row++) for(col=0;col<func_00266CB8(map);col++) for(v=0;v<2;v++) if(func_00264F48(map,v,row,col)){
   x=ox+row;y=oy+col;
   if(x>=g->x0&&x<g->x1&&y>=g->y0&&y<g->y1){
     s32 a=x+0x40,b=y+0x40;if(a<0)a=x+0x5f;if(b<0)b=y+0x5f;
     p=(u8*)g+((((a-((a>>5)<<5))<<5)+(b-((b>>5)<<5)))*4)+0x1000;
   }else {p=(u8*)g+0x1814;if(!func_00266788(g,x,y))p=func_00266570(g,v,x,y);}
   if(*p){u8 c=func_00264F48(map,v,row,col);
     if(x>=g->x0&&x<g->x1&&y>=g->y0&&y<g->y1){
       s32 a=x+0x40,b=y+0x40;if(a<0)a=x+0x5f;if(b<0)b=y+0x5f;
       q=(u8*)g+((((a-((a>>5)<<5))<<5)+(b-((b>>5)<<5)))*4)+0x1000;
     }else {q=(u8*)g+0x1814;if(!func_00266788(g,x,y))q=func_00266570(g,v,x,y);}
     if(c!=*q)return 0;
   }
 }
 for(v=1;v>=0;v--) for(row=0;row<func_00266C90(map);row++) for(col=0;col<func_00266CB8(map);col++) if(func_00264F48(map,v,row,col)){
   x=ox+row;y=oy+col;
   if(x>=g->x0&&x<g->x1&&y>=g->y0&&y<g->y1){s32 a=x+0x40,b=y+0x40;if(a<0)a=x+0x5f;if(b<0)b=y+0x5f;p=(u8*)g+((((a-((a>>5)<<5))<<5)+(b-((b>>5)<<5)))*4)+0x1000;}
   else {p=(u8*)g+0x1814;if(!func_00266788(g,x,y))p=func_00266570(g,v,x,y);}
   if(*p){u8 c=func_00264F48(map,v,row,col);
     if(x>=g->x0&&x<g->x1&&y>=g->y0&&y<g->y1){s32 a=x+0x40,b=y+0x40;if(a<0)a=x+0x5f;if(b<0)b=y+0x5f;q=(u8*)g+((((a-((a>>5)<<5))<<5)+(b-((b>>5)<<5)))*4)+0x1000;}
     else {q=(u8*)g+0x1814;if(!func_00266788(g,x,y))q=func_00266570(g,v,x,y);}
     if(c!=*q)return 0;
   }
 }
 return 1;
}
