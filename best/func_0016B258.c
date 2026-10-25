f32 func_0014C97C(void); f32 func_0014CA18(s32);
void func_0016B258(void *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4,s32 arg5,void *arg6) {
 s32 sp0,sp4,sp8; s16 temp_3_3,temp_7; s32 temp_2,temp_3,temp_lo,var_20,var_23,var_2,var_3,var_5; u16 temp_2_2,temp_3_2,temp_4; void *temp_18,*temp_18_2,*var_18;
 var_3=0;sp0=arg5;
 switch(arg1){case 3:var_2=*(s32*)((char*)arg0+0x5ED8);sp4=1;var_23=1;if(var_2==0)var_3=1;break;case 1:var_2=*(s32*)((char*)arg0+0x5ED4);sp4=1;var_23=-1;if(var_2==0)var_3=1;break;case 2:var_2=*(s32*)((char*)arg0+0x5ED8);sp4=-1;var_23=1;if(var_2==0)var_3=1;break;default:sp4=-1;var_23=-1;var_2=*(s32*)((char*)arg0+0x5ED4);if(var_2==0)var_3=1;break;}
 if(var_3){temp_2=*(s32*)((char*)arg0+0x5ED0);var_3=(temp_2<0)?(temp_2+3):temp_2;var_3>>=2;}
 var_20=0;temp_3=sp0+var_3;sp8=temp_3;var_5=(sp4*arg4)+arg2;temp_3_2=*(u16*)((char*)arg0+0x4E0);temp_2_2=*(u16*)((char*)arg0+0x4DC);temp_3_3=temp_3_2+((var_23*temp_3)+arg3);temp_7=temp_2_2+arg2;
 *(s16*)((char*)arg6+0x12)=temp_3_3;*(s16*)((char*)arg6+0x10)=temp_2_2+var_5;temp_18=(char*)arg6+0x20;*(s16*)((char*)temp_18+0x12)=temp_3_3;*(s16*)((char*)temp_18+0x10)=temp_7;temp_18_2=(char*)temp_18+0x20;*(s16*)((char*)temp_18_2+0x10)=temp_7;*(s16*)((char*)temp_18_2+0x12)=temp_3_2+arg3;var_18=(char*)temp_18_2+0x20;
 do {temp_lo=(var_20<<14)/7;var_20+=1;*(s16*)((char*)var_18+0x10)=*(u16*)((char*)arg0+0x4DC)+(((sp4*(arg4*2))+arg2)-(sp4*(s32)func_0014CA18(temp_lo)));temp_4=*(u16*)((char*)arg0+0x4E0);var_5=var_23*(s32)func_0014C97C();*(s16*)((char*)var_18+0x12)=temp_4+(var_5+arg3);var_18=(char*)var_18+0x20;}while(var_20<8);
 *(s16*)((char*)var_18+0x12)=temp_4+((var_23*sp8)+arg3);*(s16*)((char*)var_18+0x10)=*(u16*)((char*)var_18-0x10)&0xFFFF;
}
