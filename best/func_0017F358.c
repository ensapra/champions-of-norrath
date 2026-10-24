extern u8 func_01000000[];
#define D_010EE181 (func_01000000+0xEE181)
#define D_010EE1C1 (func_01000000+0xEE1C1)
#define D_010EE1C0 (func_01000000+0xEE1C0)
#define D_010EE118 ((u8**)(func_01000000+0xEE118))
#define D_010EE084 ((u8**)(func_01000000+0xEE084))
s32 func_0017F290(void){u8 a=*D_010EE1C1,b=*D_010EE181;return a==b?0:-1;}
s32 func_0017F240(void){u8*s=D_010EE1C0,*d=*D_010EE118;s32 n;if(s[6])return -1;n=6;do{u8 c=*s;n--;s++;*d=c;d++;}while(n>=0);return 0;}
#define F(p,o) (*(s32*)((u8*)(p)+(o)))
s32 func_0017F358(s32 a){void*p=*D_010EE084+a*56+16;F(p,36)=0;F(p,28)=0;F(p,32)=0;F(p,4)=0;return 0;}
s32 func_0017F388(s32 a,u16 b){void*e=*D_010EE084+a*56;void*p=(u8*)e+16;s32 n;if(F(p,36)>=4)return -1;n=F(e,44);*(s32*)((u8*)e+n*2+34)=(u16)b;F(e,44)=n+1;if(F(p,28)>=4)F(p,28)=0;F(p,36)++;return 0;}
