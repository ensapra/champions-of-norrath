typedef struct {u32 cls;u32 sign;s32 exp;u64 frac;} FP;extern char jtbl_004C006C[];extern void func_00171698(s64*,FP*);extern s64 func_001715C0(FP*);
s64 func_001712C8(s64 a,s64 b){FP x,y;FP*r;FP*px;u64 num,den,q,bit,nx;s64 lt;u32 d,c;
func_00171698(&a,&x);func_00171698(&b,&y);px=&x;r=&x;c=x.cls;if(c>=2){r=&y;d=y.cls;if(d>=2){x.sign^=y.sign;
if((c^4)==0){if(c!=d)r=&x;else r=(FP*)(jtbl_004C006C+0xBFA4);}
else if((c^2)==0){if(c!=d)r=&x;else r=(FP*)(jtbl_004C006C+0xBFA4);}
else if((d^4)==0){x.frac=0;r=&x;x.exp=0;}
else if((d^2)==0){r=&x;x.cls=4;}
else{x.exp-=y.exp;num=x.frac;den=y.frac;lt=num<den;if(lt){num<<=1;x.exp--;lt=num<den;}q=0;bit=(u64)0x8000<<45;
do{nx=num<<1;if(!lt){q|=bit;nx=(num-den)<<1;}bit>>=1;lt=nx<den;num=nx;}while(bit);px->frac=q;r=px;}}}
return func_001715C0(r);}
