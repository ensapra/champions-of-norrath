s32 func_0017D320(s32 a, s32 *out) {
 extern s32 func_001D1AE0[];
 extern s32 func_001D1C80[];
 extern s32 func_001CE218[];
 extern s32 L_001D16C0[];
 s32 r;
 if(func_0017C528(0x1A)==0)return -1;
 func_001D1AE0[8]=a;
 func_001AFE98(&func_001D1AE0[8],4);
 if(func_001B08B0(&func_001D1C80[0xF0],5,0,&func_001D1AE0[8],4,L_001D16C0,8,0,0)<0){
 SignalSema(func_001CE218[0x8B5]); return -1;
 }
 if(out)*out=*(s32*)((u8*)L_001D16C0+0x20000004);
 r=*(s32*)((u8*)L_001D16C0+0x20000000);
 SignalSema(func_001CE218[0x8B5]); return r;
}
