s32 func_00266C90(void*);s32 func_00266CB8(void*);s32 func_00266CE0(void*,s32,s32);
s32 func_00266788(void*,s32,s32);s32 func_00266490(void*,s32,s32);
void func_002640A0(void *grid,void *cursor,s32 baseX,s32 baseY) {
 u8 *g=grid; s32 x,y,n,m,v; s32 *cell;
 n=func_00266C90(cursor);
 for(x=0;x<n;x++) {
   m=func_00266CB8(cursor);
   for(y=0;y<m;y++) {
     if(func_00266CE0(cursor,y,x)) {
       s32 xx=baseX+x, yy=baseY+y;
       if(xx>=0&&xx<*(s32*)(g+0x1800)&&yy>=0&&yy<*(s32*)(g+0x1808)) {
         v=*(s32*)(g+0x1804);
         if(yy<v) cell=(s32*)(g+(((xx&~31)*32+(yy&~31))*4));
         else cell=(s32*)(g+0x1810);
         if(!func_00266788(g,xx,yy)) {
           cell=(s32*)func_00266490(g,xx,yy);
         }
         *cell=0;
       } else func_00266788(g,xx,yy);
     }
   }
 }

}
