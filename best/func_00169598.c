extern char jtbl_004C006C[];
typedef struct { s32 index[8]; } IdList;
typedef struct { u8 b[8]; } Pair8;
void *func_00169598(void *arg0) {
 char *obj=(char*)arg0; IdList ids=*(IdList*)(jtbl_004C006C+0xBA2C);
 u8 *base=(u8*)obj+0x910; u32 count=*(u32*)(obj+0x4ec);
 u8 *dst=base+count*0x140+0x4bb0; s32 *idp=(s32*)&ids; u32 i=0; void *result;
again: {
 s32 id=*idp++; s32 srcOff=(id<<2)+0x5590; u8 *color=base+srcOff;
 dst[0]=color[0]; dst[1]=color[1]; dst[2]=color[2]; dst[3]=(color[3] * *(s32*)(obj+0x618))/255;
}
dst+=0x20; {
 u32 n=*(u32*)(obj+0x4ec); u32 step=(n*10+i)*32;
 s32 o0=step+0x4bb0, o1=step+0x5330, o2=step+0x50b0, o3=step+0x4e30;
 Pair8 *a=(Pair8*)(base+o0), *b=(Pair8*)(base+o1);
 Pair8 *c=(Pair8*)(base+o2), *d=(Pair8*)(base+o3);
 *b=*a; *c=*b; *d=*c; result=d;
}
i++; if(i<8)goto again; return result;
}
