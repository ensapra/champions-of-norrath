extern unsigned char func_001B9FD8[];
extern unsigned char func_001BCB38[];
extern unsigned char func_01000000[];
extern unsigned char jtbl_004C006C[];
extern void func_001A2660(void*, s32, s32);
extern s32 func_0010FBC0(s32, void*, s32, s64, s64, s64, s64, s32);
extern s32 func_00161FDC(s32, void*, void*, s32, void*, void*, s32, s32);
extern void func_0014B460(s32);
extern void func_0014CD0C(s32,s32,void*,s32);
extern void func_0010DE10(s32,void*);
extern void func_00106C78(s32,s32,s32);
extern void func_00112FE0(void);
extern void func_00113160(void);
extern void func_00113178(void);
s32 func_001131F8(s32 a0, s32 a1, s32 *out) {
 s64 x[0x80]; s32 init[4]; s32 id, n=0, i, v, r; void *obj;
 func_001A2660(&x[0x82],0,16);
 x[0x42]=*(s64*)(func_001B9FD8+0x1708+0x50);
 x[0x43]=*(s64*)(func_001B9FD8+0x1708+0x58);
 x[0x44]=*(s64*)(func_001B9FD8+0x1708+0x60);
 x[0x45]=*(s64*)(func_001B9FD8+0x1708+0x68);
 x[0x46]=*(s64*)(jtbl_004C006C+0x7654);
 x[0x47]=*(s64*)(jtbl_004C006C+0x765C);
 x[0x48]=*(s64*)(jtbl_004C006C+0x7664);
 x[0x49]=*(s64*)(jtbl_004C006C+0x766C);
 x[0x4A]=*(s64*)(jtbl_004C006C+0x7674);
 x[0x4B]=*(s64*)(jtbl_004C006C+0x767C);
 x[0x80]=0; x[0x81]=a1;
 r=func_0010FBC0(*(s32*)(func_01000000+0xC2AA8),&x[0x80],*(s32*)(func_001BCB38+0xE0C),x[0x42],x[0x43],x[0x44],x[0x46],*(s32*)(func_01000000+0xC2AC0));
 *out=r;
 id=*(s32*)(*(s32*)(func_001BCB38+0xE10)+a0*0x4C4+0x4B4);
 x[0]=0; x[3]=a1; x[5]=*(s32*)(func_01000000+0xC2AC0); x[7]=*(s32*)(func_001BCB38+0xE0C);
 x[0x16]=1; x[0x18]=(s64)&x[0x82]; x[0x1A]=(s64)&x[0x42];
 for(i=0;i<7;i++) x[9+i*2]=0;
 if(id==1){x[0x1c]=0x65;x[0x1e]=0x60;x[0x1d]=x[0x46];n=16;}
 else if(id==0){x[0x1c]=0x65;x[0x1e]=0x60;x[0x1d]=x[0x44];n=16;}
 else if(id==2){x[0x1c]=0x65;x[0x1e]=0x60;x[0x1d]=x[0x48];n=16;}
 else if(id==4){x[0x1c]=0x65;x[0x1e]=0x60;x[0x1d]=x[0x4A];n=16;}
 else n=14;
 x[n++]=0x66;
 obj=(void*)(*(s32*)(func_001BCB38+0xE10)+a0*0x4C4);
 x[n]=0xC7; *(f32*)((char*)&x[n]+8)=*(f32*)(func_001B9FD8+0x1918);
 x[n+1]=8; x[n+2]=0xC9; x[n+3]=0; x[n+4]=1; x[n+5]=1;
 x[n+6]=(s64)obj;
 if((*(s32*)((char*)obj+0x4B4)&2)!=0)x[n+7]=0;else x[n+7]=1;
 *(s32*)&x[n+7+1]=0x11;
 v=func_00161FDC(*(s32*)(func_01000000+0xC2AA8),jtbl_004C006C+0x7684,x,n+8,(void*)&x[n+1],(void*)&x[n+6],1,0xCD);
 func_0014B460(v);
 if(*(s32*)((char*)obj+0x4B0)==0)func_0014CD0C(v,0x58,func_00112FE0,a0);
 func_0014CD0C(v,7,func_00113160,a0); func_0014CD0C(v,6,func_00113178,a0);
 func_0010DE10(v,(char*)obj+0x258); func_00106C78(0,v,1); return v;
}
