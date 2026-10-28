typedef struct { s32 a,b; void *c; u8 x,y,z,pad; void *r,*s; } Req;
extern s32 SignalSema(s32),func_0017C210(s32),func_0017C380(void);
extern void func_001AF710(void*),func_001AFE98(); extern s32 func_001B08B0(); extern void func_0017BB78();
extern s32 D_001D04D0[],D_001D04E8[],D_001D04F4[],D_001D04F8[],D_001D0518[];
extern Req D_001D05C0; extern u8 D_001D15C0[],D_001D1690[],D_004CC648[],D_004CC660[]; extern s32 D_001D1680[];
s32 func_0017CE28(s32 a0,s32 a1,void *a2,u8 *a3) {
 Req *q=&D_001D05C0; s32 bytes;
 if (!(D_001D04F8[0]&1)) if (func_0017C380()==6) return 0;
 if (!func_0017C210(4)) return 0;
 q->a=a0; q->b=a1; q->c=a2; q->x=a3[0]; q->y=a3[1]; q->z=a3[2]; q->r=D_001D15C0; q->s=D_001D1680;
 if(a3[2]==1) bytes=a1*0x918; else if(a3[2]==2) bytes=a1*0x924; else bytes=a1<<11;
 D_001D1680[0]=0;
 if (!(D_001D04F8[0]&2)) func_001AFE98(a2,bytes);
 func_001AFE98(D_001D15C0,0x90); func_001AFE98(q,0x18); func_001AFE98(D_001D1680,4);
 if (D_001D04D0[0]>0) func_001AF710(D_004CC648);
 D_001D0518[0]=1; D_001D04F4[0]=1;
 if (func_001B08B0(D_001D1690,1,1,q,0x18,0,0,func_0017BB78,D_001D15C0)<0) { D_001D0518[0]=0; D_001D04F4[0]=0; SignalSema(D_001D04E8[0]); return 0; }
 if(D_001D04D0[0]>0) func_001AF710(D_004CC660);
 return 1;
}
