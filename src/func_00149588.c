s32 D_0047FA98; s32 func_0014B5E4(s32,s32,s32,s32,s32);
s32 func_0014947C(s32 a,s32 b,s32 c,s32 d){return func_0014B5E4(D_0047FA98,a,b,c,d);}
void func_001493C8(u8 **pp,s32 c){u8 *p=*pp,*q;u8 mask;s32 n,m;
if((u32)c<128){*p++=c;}else{m=0x800;n=1;while(c>=m){m<<=5;n++;}mask=(1<<(7-n))-1;p+=n;p++;q=p;while(n-- != 0){{s32 t=(c&63)|128;--q;*q=t;}c>>=6;}q[-1]=~mask|(c&(mask>>1));}*pp=p;}
#define F(p,t,o) (*(t*)((char*)(p)+(o)))
void func_0014CF78(void*,void*,void*);void func_0014D18C(void*,void*);void func_0014CF0C(void*,s32,s32);
void func_00149588(void*p){void*end;void*n;void*next;s32 a,b,c;if(F(p,s32,0x854)){n=(char*)p+0x840;end=n;loop:next=F(n,void*,8);if(next!=end){n=next;if(!F(n,s32,0))goto loop;func_0014CF78(F(n,void*,16),&a,&b);func_0014D18C(F(n,void*,16),&c);func_0014CF0C(p,a+c*2,b+c*2);}}}
s32 func_00149360(u8**pp){u8*p=*pp;s32 b=*p++;s32 c,m;c=b;if((s32)(b<<24)<0){c=-1;if((u8)(b+0x3e)<0x33){c=b&127;m=64;do{{s32 t=m-1;m<<=5;{s32 x=*p++;x&=63;c&=t;c=(c<<6)|x;}}}while(c>=m);}}*pp=p;return c;}
