extern u8 D_007E05E0[]; extern u8 D_0081E2B0[]; extern u8 D_0081E240[]; extern u8 D_0042E2D0[]; s32 D_00484538,D_00484F50;
s32 func_0026FC90(s32); s32 func_002847A0(void);
void func_0025A108(void){
 u8 *p; s32 i,j; s32 off;
 off=func_0026FC90(D_00484F50); p=D_0081E2B0+off;
 off=func_002847A0(); p+=off+0x1008;
 for(i=0;i<4;i++){u8*q=p+0xe + i*0x5db0;if(i==0)for(j=0;j<0x5db0;j++)q[j]=D_007E05E0[j];}
 *(u16*)(D_0081E240+0x6a)=D_00484538;
 off=func_0026FC90(D_00484F50); p=D_0081E240+0x70+off;
 off=func_002847A0(); p+=off+0x1004;
 for(i=0;i<4;i++)p[i]=((u8*)&D_00484538)[i];
 off=func_0026FC90(D_00484F50); p=D_0081E2B0+off;
 off=func_002847A0(); p+=off+0x1008;
 for(i=0;i<4;i++){p[0]=(u8)(i*2);p[1]=(u8)(i*2+1);*(u64*)(p+2)=*(u64*)(D_0042E2D0+i*12);*(u32*)(p+10)=*(u32*)(D_0042E2D0+i*12+8);p+=0x5dbe;}
}
