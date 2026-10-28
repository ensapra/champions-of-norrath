void func_0016EBF4(u8*p){u8*base=p+0x970;s32 x=*(s32*)(p+0x5A0)+*(s32*)(p+0x5D4),y=*(s32*)(p+0x5A4)+*(s32*)(p+0x5D4);s32 w=*(s32*)(p+0x920),h=*(s32*)(base+0x304);s32 quarter=w/4,three=w*3/4;s32 x0,x1,x2,x3,x4,x5,x6,x7,y0,y1,y2,y3,y4,y5,y6,y7;u16 ox=*(u16*)(p+0x4DC),oy=*(u16*)(p+0x4E0);s32 index=*(s32*)(p+0x4EC);u8*q,*v;if(!*(s32*)(p+0xC78)){x0=x;x1=x;x2=x+quarter;x3=x+quarter;x4=x+three;x5=x+three;x6=x+w;x7=x+w;y0=y;y1=y+h;y2=y;y3=y+h;y4=y;y5=y+h;y6=y;y7=y+h;}else{x0=x;x1=x+h;x2=x;x3=x+h;x4=x;x5=x+h;x6=x;x7=x+h;y0=y;y1=y;y2=y+quarter;y3=y+quarter;y4=y+three;y5=y+three;y6=y+w;y7=y+w;}q=base+index*384;
#define PUT(n) v=q+0x70+n*32; *(u16*)(v+0x10)=ox+x##n; *(u16*)(v+0x12)=oy+y##n;
PUT(0) PUT(1) PUT(2) PUT(3) PUT(4) PUT(5) PUT(6) PUT(7)
#undef PUT
}
