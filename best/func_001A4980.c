extern s32 func_001708F0(u64,s32,s32); extern u32 func_001B8FF0(u64,s32); extern s64 func_001B9570(u64,s32); extern u8 jtbl_00503023[];
u64 func_001A4980(s32 *out,s8 *arg1,s8 **endp,s32 base){s32 *sp0=out;s8 *start=arg1;s8 *p=start;s32 b=base;s32 neg=0;s8 ch;u8 f;s32 status;s32 d;u64 limit,value=0;u32 cutoff;s64 signedcut;
do{ch=*p++;}while(*(&jtbl_00503023[0x375e]+ch)&8);
if(ch==0x2d){ch=*p++;neg=1;}else if(ch==0x2b)ch=*p++;
if((b==0||b==0x10)&&ch==0x30&&((*p==0x78)||(*p==0x58))){ch=p[1];p+=2;b=0x10;}
if(b==0)b=(ch^0x30)?0xa:8;
limit=neg?((u64)0x8000<<48):(~(u64)0>>1);
signedcut=(s64)(s32)func_001B9570(limit,b);cutoff=func_001B8FF0(limit,b);
status=0;
for(;;){f=*(&jtbl_00503023[0x375e]+ch);if(f&4)d=ch-0x30;else if(f&3)d=(f&1)?ch-0x37:ch-0x57;else break;
if(d<b){if(status>=0){if(cutoff<value)status=-1;else if(value==cutoff&&signedcut<d)status=-1;else{d+=func_001708F0(value,b,status);status=1;value=d;}}ch=*p++;}else break;}
if(status<0){value=limit;*sp0=0x22;}else if(neg)value=0-value;
if(status!=0)start=p-1;
if(endp)*endp=start;
return value;}
