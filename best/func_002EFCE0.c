extern s64 func_002F81C0(s64,s64);
void func_002EFCE0(void *arg0,void *arg1,s32 arg2,s64*arg3,s16*arg4){s32 sp0; s64 *sp4; s16 *sp8;s64 sp10,sp18,sp20,sp28,sp30,sp38,sp40,sp48,sp50; s64 t0,t1,t2,t3,t4,t5,t6,t7,t8; s64 v18,v19,v20,v21,v22,v23,v30,v3,v32,v33,v34,v35,v36,v37,v5,v52;s64*p17;
p17=(s64*)((u8*)arg0+0x9b0);sp4=arg3;sp8=arg4;sp0=arg2-1;sp50=*(s64*)((u8*)arg1+0x38);v18=p17[0];v19=p17[1];v20=p17[2];v21=p17[3];v22=p17[4];v23=p17[5];v30=p17[6];sp10=p17[7];sp18=*(s64*)((u8*)arg1);sp20=*(s64*)((u8*)arg1+8);sp28=*(s64*)((u8*)arg1+0x10);sp30=*(s64*)((u8*)arg1+0x18);sp38=*(s64*)((u8*)arg1+0x20);sp40=*(s64*)((u8*)arg1+0x28);sp48=*(s64*)((u8*)arg1+0x30);
if(arg2!=0){do{t0=func_002F81C0(sp50,sp10)>>15;t1=*sp4++;t2=(t1-t0)-(func_002F81C0(sp48,v30)>>15);sp10=v30+(func_002F81C0(sp48,t2)>>15);t3=t2-(func_002F81C0(sp40,v23)>>15);v30=v23+(func_002F81C0(sp40,t3)>>15);t4=t3-(func_002F81C0(sp38,v22)>>15);v23=v22+(func_002F81C0(sp38,t4)>>15);t5=t4-(func_002F81C0(sp30,v21)>>15);v22=v21+(func_002F81C0(sp30,t5)>>15);t6=t5-(func_002F81C0(sp28,v20)>>15);v21=v20+(func_002F81C0(sp28,t6)>>15);t7=t6-(func_002F81C0(sp20,v19)>>15);v20=v19+(func_002F81C0(sp20,t7)>>15);v3=0x7fff;t8=t7-(func_002F81C0(sp18,v18)>>15);if(t8<0x7fff){v3=t8;if(v3< -0x8000)v3=-0x8000;}sp0--;v19=v18+(func_002F81C0(sp18,v3)>>15);v18=v3;*sp8++=v18&0xffff;}while(sp0!=-1);}
v32=0x7fff;if(v18<0x7fff){v32=v18;if(v32< -0x8000)v32=-0x8000;}p17[0]=v32;
if(v19<0x7fff){v33=v19;if(v33< -0x8000)v33=-0x8000;}else v33=0x7fff;p17[1]=v33;
if(v20<0x7fff){v34=v20;if(v34< -0x8000)v34=-0x8000;}else v34=0x7fff;p17[2]=v34;
if(v21<0x7fff){v35=v21;if(v35< -0x8000)v35=-0x8000;}else v35=0x7fff;p17[3]=v35;
if(v22<0x7fff){v36=v22;if(v36< -0x8000)v36=-0x8000;}else v36=0x7fff;p17[4]=v36;
if(v23<0x7fff){v37=v23;if(v37< -0x8000)v37=-0x8000;}else v37=0x7fff;p17[5]=v37;
v5=v30;if(v5<0x7fff){if(v5< -0x8000)v5=-0x8000;}else v5=0x7fff;p17[6]=v5;
if(sp10<0x7fff){v52=sp10;if(v52< -0x8000)v52=-0x8000;}else v52=0x7fff;p17[7]=v52;}
