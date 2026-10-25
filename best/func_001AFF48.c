extern char jtbl_004C006C[]; extern char D_01107F80[],D_01108780[],D_01108F80[],D_01109780[];
void func_001B5C80(void);void func_001B5CD8(void);void func_001AF7E8(void);void func_001AFAD0(u32,void*,void*);void func_001AFCD0(u32,void*,s32,s32,s32,s32);s32 func_001AF7A0(s32);s32 sceSifGetReg(u32);void sceSifSetReg(u32,s32);void func_001B0358(void);void func_001B0610(void);void func_001B0820(void);
void func_001AFF48(void){char *p,*base,*t;u32 *q;u32 a,b,c;s32 one;
 func_001B5C80(); one=1;
 if(*(s32*)(jtbl_004C006C+0x3ea8)!=0){func_001B5CD8();return;}
 *(s32*)(jtbl_004C006C+0x3ea8)=one;func_001B5CD8();func_001AF7E8();func_001B5C80();
 base=D_01107F80;p=D_01109780;q=(u32*)p;a=(u32)D_01107F80|0x20000000;b=(u32)D_01108780|0x20000000;c=(u32)D_01108F80|0x20000000;
 q[8]=0x20;*(u32*)D_01109780=one;q[5]=b;q[1]=a;q[7]=c;q[2]=0x20;q[3]=0;q[4]=0;q[6]=0x20;q[9]=0;
 func_001AFAD0(0x80000008,(void*)0x001b0248,p);func_001AFAD0(0x80000009,func_001B0610,p);func_001AFAD0(0x8000000a,func_001B0820,p);func_001AFAD0(0x8000000c,func_001B0358,p);func_001B5CD8();
 if(sceSifGetReg(0x80000002)==0){t=base+0x40;*(s32*)(t+0xc)=one;func_001AFCD0(0x80000002,t,0x10,0,0,0);while(func_001AF7A0(0)==0){}sceSifSetReg(0x80000002,one);}
}
