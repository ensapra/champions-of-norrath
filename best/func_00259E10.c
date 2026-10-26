extern s32 func_00135438(s32); extern s32 func_0026FC90(s32); extern s32 func_002847A0(void);
extern s32 D_00484F50; extern u8 D_00484F99; extern u8 D_0042E2D0[]; extern u8 D_00474A68[]; extern u8 D_007E05E0[]; extern u8 D_0081E240[]; extern u8 D_0081E2B0[];
void func_00259E10(void) {
 volatile u32 one=1; u8 *p,*q,*base; s32 i,j,n;
 base=D_0081E2B0+func_0026FC90(D_00484F50)+func_002847A0(); p=base+0x1008;
 for(i=3;i>=0;i--) { *(s8 *)(0x70000000+i*2)=p[0]; *(s8 *)(0x70000001+i*2)=p[1]; q=D_0042E2D0+(3-i)*12; q[0]=p[0];q[1]=p[1]; p+=2; p+=0x5DBC; }
 func_00135438(0); p=base+0x1008; n=func_00135438(0)*2; p[0]=*(u8 *)(0x70000000+n);p[1]=*(u8 *)(0x70000001+n);
 q=D_0042E2D0+func_00135438(0)*12; for(i=0;i<12;i++) p[2+i]=q[i];
 base=D_0081E2B0+func_0026FC90(D_00484F50)+func_002847A0()+0x1008+0xE; p=base;
 for(i=0;i<4;i++){ q=p; if(i) q=p+0x5DB0+0xE; p=q; }
 for(j=0;j<0x5DB0;j++) D_007E05E0[j]=p[j];
 base=D_0081E2B0+func_0026FC90(D_00484F50)+func_002847A0()+0x1008;
 p=base+0xE; for(i=0;i<4;i++) { q=p; p+=0x5DB0; if(i) p+=0xE; } 
 n=func_00135438(0); base=D_0081E2B0+func_0026FC90(D_00484F50)+func_002847A0()+0x1008+0xE;
 p=base; for(i=0;i<n;i++){p+=0x5DB0; p+=0xE;}
 for(j=0;j<0x5DB0;j++) q[j]=p[j];
 D_0081E240[0x6A]=one;
 base=D_0081E240+0x70; base+=func_0026FC90(D_00484F50)+func_002847A0()+0x1004;
 for(i=0;i<4;i++) base[i]=((u8*)&one)[i];
 if(D_00484F99){q=D_0081E240; for(i=0;i<13;i++) q[i]=D_00474A68[i];}
}
