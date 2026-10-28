extern char D_00408600[]; typedef struct { f32 x,y,z; } Pt3; s32 D_00484538; f32 sqrtf(f32);
s8 func_0010EB18(Pt3 *pp,f32 best){Pt3 p=*pp; Pt3 *lp=&p; s32 i,idx=-1; char *base; s32 *e;
for(i=0;i<D_00484538;i++){base=D_00408600;e=*(s32 **)(base+i*0x5DB0+0x5570);if(e && !(e[3]&8)){f32 *pos=(f32 *)(e+4);f32 dx=lp->x-pos[0],dy=lp->y-pos[1],dz=lp->z-pos[2];f32 d=(dx*dx+dy*dy+dz*dz);if(d<best){best=d;idx=i;}}}return idx;}
