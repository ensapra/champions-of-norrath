s32 func_001119D8(void *, char *);
s32 func_001EE1E8(char *a, char *dst) {
 char *base=dst; s32 n=func_001119D8(a,dst); char *p2=a+0x3D6; char *p1=a+0x3D4;
 s32 off=0x20; s32 key=0x15; dst+=n; s32 i=0; s32 v;
 do { if(*(s16*)(p1+off)==key){v=*(s16*)(p2+off);goto done;} i++; off+=8; } while(i<4);
 v=0; done: *(s32*)dst=v!=0; dst+=4; return dst-base;
}
