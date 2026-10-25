extern s32 func_001AF710(void*);
typedef struct {u64 q[12];} Packet;
s32 func_0018E9C0(Packet *p,s32 a1,s32 a2,s32 mode,s32 a4,s32 a5,s32 a6,s32 a7){
 s32 x=(s16)a1,y=(s16)a2,m=(s16)mode,b=(s16)a4,c=(s16)a5,d=(s16)a6,e=(s16)a7,scale=0;
 switch(m){case 1:scale=(d*e)>>2;break;case 2:scale=(d*e*3)>>4;break;case 3:scale=(d*e)>>3;break;case 4:scale=(d*e)>>4;break;case 5:scale=(d*e)>>5;break;}
 if(scale>0x7fff){func_001AF710((void*)0x004CE704);return 0;}
 p->q[0]=0;p->q[10]=0;
 p->q[10]=((u64)(u16)scale)|0x8000|((u64)(u16)b<<32);
 p->q[0]=4|((u64)(u16)x<<32);
 p->q[1]=0x80000000ULL|((u64)(u16)y<<32)|0xE;
 p->q[2]=0x50;
 p->q[3]=((u64)(u16)c<<32);
 p->q[4]=0x51;
 p->q[5]=((u64)(u16)d<<32)|((u64)(u16)e);
 p->q[6]=0x52;
 p->q[8]=0x53;
 p->q[7]=0;
 return 6;
}
