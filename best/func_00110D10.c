extern s32 func_0013B6F0(void*,s32); extern s32 func_0011BA18(s32); extern s32 func_001A3D78(void*,s32); extern void func_00114948(s32,s32,s32,void*,void*,s32); extern char jtbl_004C006C[]; extern char D_010C2A50[]; extern char D_010C2A58[]; extern char D_010C2250[]; extern char func_001B9FD8[]; extern char func_00110AF0[];
void func_00110D10(s32 arg0,s32 arg1){s32 mode; s32 code; void *ptr;
*(s32*)D_010C2A50=arg1;*(s32*)D_010C2A58=1;mode=func_0013B6F0(jtbl_004C006C+0x756C,-1);
if(mode!=2){if(mode<3){if(mode!=1)goto direct;else if(arg0!=-14){if(arg0<-13){code=0x12;if(arg0!=-15)goto direct;}else{code=0x15;if(arg0!=-1)goto direct;}}else code=0x15;}else if(mode!=3)goto direct;else if(arg0!=-14){if(arg0<-13){code=0x14;if(arg0!=-15)goto direct;}else if(arg0!=-1)goto direct;else goto alternate;}else goto alternate;}
else if(arg0!=-14){if(arg0<-13){code=0x13;if(arg0!=-15)goto direct;}else{code=0x16;if(arg0!=-1)goto direct;}}else code=0x16;
goto common;
alternate: ptr=D_010C2250;func_001A3D78(ptr,func_0011BA18(0x17));goto done;
direct: ptr=D_010C2250;goto done;
common: ptr=D_010C2250;func_001A3D78(ptr,func_0011BA18(code));
done: func_00114948(3,0x1F4,0xFA,ptr,func_00110AF0,*(s32*)(func_001B9FD8+0x16EC));}
