extern s32 D_010CD810[];
extern s32 D_010CD814[];
extern s32 D_010CD820[];
s32 func_00131DC0(void *arg0) {
 s32 mode, i, cfg[4], id, result;
 mode=*(s32*)((char*)arg0+0x10);
 if (mode==1) { D_010CD814[0]=func_001104A8(D_010CD810[0],0x74,5); return 0; }
 if (mode==2) {
   cfg[0]=0x78; cfg[2]=0x1A4; cfg[3]=0x16;
   for(i=0;i<2;i++){cfg[1]=0x2D+i*0x16; id=func_0011BA18(0xCA+i); result=func_0010F6B0(D_010CD810[0],cfg,id); D_010CD820[i]=result;}
   return 0;
 }
 return 0;
}
