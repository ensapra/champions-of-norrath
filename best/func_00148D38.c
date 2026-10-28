typedef struct { int stride, pad, x,y,x2,y2; } Rect;
void func_00148D38(unsigned char *src,unsigned short *dst,short *d,Rect *r) {
 int w=r->x2-r->x,h=r->y2-r->y,x,y,k,c; src+=3*(r->stride*r->y+r->x); dst+=w*h-4;
 for(y=0;y<h;y++,src+=r->stride*3) for(x=0;x<w;x+=4) { for(k=0;k<4;k++) { int rgb[3]; for(c=0;c<3;c++){int v=src[x*3+k*3+c]+d[((y&3)*8+k*3+c)&31]; if(v<0)v=0;if(v>255)v=255;rgb[c]=v;} dst[k]=0x8000|(rgb[0]>>3)|((rgb[1]>>3)<<5)|((rgb[2]>>3)<<10); } dst-=4; }
}
