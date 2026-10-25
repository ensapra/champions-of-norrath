extern s32 func_001C6788[]; extern s32 func_001C6058[]; extern s32 func_001B9FD8[]; extern s32 jtbl_004C006C[]; extern s32 D_001C6890; extern char func_0013CBA0[],func_0013CC88[],func_0013CEF0[],func_001466E0[],func_001471D0[];
s32 func_0011BA18(s32); void func_00114948(s32,s32,s32,s32,void*,s32); void func_001A3D78(void*,void*,void*,void*); s32 func_001A4174(void*,void*); void func_00118140(void*,s32,void*,void*,void*); void func_00118160(void*);
void func_00146538(void){u8 sp[0x2A0];s32 i=0; s32 *flag;
 if(D_001C6890!=1){if(func_001C6788[0xB0/4]==10&&func_001C6788[0xAC/4]==func_001C6788[0xB0/4])goto warn55;
 if(D_001C6890==0){if(func_001C6788[0xB0/4]>=30)goto warn57;} if(func_001C6788[0xAC/4]>=10)goto warn59;}
 func_001A3D78(sp,jtbl_004C006C+0xB124/4,func_001C6058+0xA8/4,func_001C6058+0xA8/4+0x100);
 for(i=0;i<func_001C6788[0xB4/4];i++){if(func_001A4174((void*)(func_001C6788[0xA8/4]+i*0x20*4+i*4+0x10C),sp)==0){func_001C6788[0x110/4]=1;break;}}
 flag=&func_001C6788[0x110/4]; if(*flag==0&&func_001C6788[0xB4/4]>=30)goto warn7b;
 {u8 *q=sp+0x260;func_00118140(q,1,func_0013CBA0,func_0013CC88,func_0013CEF0);*(void**)(sp+0x268)=func_001466E0;func_00118160(q);}return;
warn55: func_00114948(2,500,250,func_0011BA18(0x55),func_001471D0,func_001B9FD8[0x16EC/4]);return;
warn57: func_00114948(2,500,250,func_0011BA18(0x57),func_001471D0,func_001B9FD8[0x16EC/4]);return;
warn59: func_00114948(2,500,250,func_0011BA18(0x59),func_001471D0,func_001B9FD8[0x16EC/4]);return;
warn7b: func_00114948(2,500,250,func_0011BA18(0x7B),func_001471D0,func_001B9FD8[0x16EC/4]);}
