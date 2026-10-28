typedef struct{char pad[0x3c4];s32 id[3];s32 n;}O277;extern f32 D_00482270;void func_002712B8(void*,s32,f32*);
s32 func_00277BF8(O277*o,f32*p){f32 v[4];f32 best=D_00482270;s32 res=-1;s32 i;for(i=1;i<o->n;i++){if(o->id[i-1]==-1){f32 dx,dy,d;func_002712B8(o,i,v);dx=v[0]-p[0];dy=v[1]-p[1];d=dx*dx+dy*dy;if(d<best){best=d;res=i;}}}return res;}
