extern char jtbl_004C006C[]; void func_001AF710(char*,...); u16 func_0017F708(s32,s32);
u16 func_0017F5B0(s32 mode,s32 flags,s32 f2,s32 ch){u16 *tbl=0;u16 c=ch;s32 sh=(flags&0x22)!=0;u16 r=0;
switch(mode){case 0:tbl=(u16*)(jtbl_004C006C+0xC83C+(sh<<9));break;case 1:tbl=(u16*)(jtbl_004C006C+0xCC3C+(sh<<9));break;case 2:tbl=(u16*)(jtbl_004C006C+0xD03C+(sh<<9));break;default:func_001AF710(jtbl_004C006C+0xC824);}
if(c){if(c>=0x100)return c;{u16 v=tbl[c];if(v==0x4000)v=func_0017F708(f2&0xFF,c&0xFF);if(v==0x8000)v=c|0x8000;if((u16)(v-0x61)<0x1A&&(f2&2))v-=0x20;if((u16)(v-0x41)<0x1A&&(f2&2)&&sh)v+=0x20;r=v;}}
return r;}
