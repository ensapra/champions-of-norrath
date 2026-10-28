typedef struct { char p0[0x5ac]; s32 w; s32 h; char p1[0x360]; s32 l[4]; } S169;
void func_00169E70(S169 *s,s32*a1,s32*a2,s32*a3,s32*a4,s32*a5,s32*a6,s32*a7,s32*sp){
 s32 *p=(s32*)((char*)s+0x910);
 s32 x,y,t;
 *a1=p[0x55a0/4];*a2=p[0x55a4/4];*a3=p[0x55a8/4];*a4=p[0x55ac/4];
 y=(p[0x55a0/4]+p[0x55a4/4])*2;x=p[0x55a0/4]*s->w;
 if(s->w<y){*a1=x/y;*a2=p[0x55a4/4]*s->w/((p[0x55a0/4]+p[0x55a4/4])*2);}
 y=(p[0x55a8/4]+p[0x55ac/4])*2;x=p[0x55a8/4]*s->h;
 if(s->h<y){*a3=x/y;*a4=p[0x55ac/4]*s->h/((p[0x55a8/4]+p[0x55ac/4])*2);}
 *a5=*a1-*a2+(s->w>>1);
 t=*a4;*a6=*a3-t+(s->h>>1);
 *a7=(s->w-((*a1+*a2)*2))>>1;*sp=(s->h-((*a3+*a4)*2))>>1;}
