typedef struct { s32 w,h,unknown,x,y; } Params;
typedef unsigned char u8;
void func_00148F24(u8 *dst,u8 *src, unsigned long long *palette, Params *p) {
 s32 stride=p->w, height=p->h, y,x,k;
 s32 dx=p->x,dy=p->y;
 for(y=0;y<dy;y++) {
  for(x=0;x<stride;x++) {
   unsigned int c[4]={0,0,0,0};
   for(k=0;k<4;k++) { c[k]=src[((y*stride+x)*3+k)% (stride*height*3)]; }
   dst[(y*stride+x)]= (u8)((c[0]+c[1]+c[2]+c[3])>>2);
  }
 }
}
