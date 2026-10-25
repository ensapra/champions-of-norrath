extern s32 func_001708F0(u32,s32); extern u32 func_001B8FF0(s32,s32); extern s64 func_001B9570(s32,s32); extern u8 D_00506781[];
s32 func_001ACB90(s32 *arg0,s8 *arg1,s8 **arg2,s32 arg3){s32 *sp0=arg0;s32 sp4=0;s32 base=arg3;s8 *p=arg1;s8 c;s32 digit;s32 status;s64 lim;u32 max;u32 value=0;u8 flags;
do{c=*p++;}while(D_00506781[c]&8);if(c==0x2d){c=*p++;sp4=1;}else if(c==0x2b)c=*p++;
if((base==0||base==16)&&c=='0'&&(p[0]=='x'||p[0]=='X')){c=p[1];p+=2;base=16;}if(base==0)base=(c=='0')?8:10;
status=0;max=func_001B8FF0(-1,base);lim=func_001B9570(-1,base);
for(;;){flags=D_00506781[c];if(flags&4)digit=c-0x30;else if(flags&3)digit=(flags&1)?c-0x37:c-0x57;else break;if(digit>=base)break;
if(status>=0){if(max<value)status=-1;else if(max==value&&lim<digit)status=-1;else{status=1;value=digit+func_001708F0(value,base);}}c=*p++;}
if(status<0){value=0xffffffff;*sp0=0x22;}else if(sp4)value=0-value;if(arg2)*arg2=status?(p-1):arg1;return value;}
