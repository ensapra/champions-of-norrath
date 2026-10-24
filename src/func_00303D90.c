s64 D_00486DC8;extern char D_00460CE0[],D_00483918[];extern s32 D_008EADB8[],D_008EAE88[];void func_00312DD0(void);void func_002FD348(s32*,char*,void*);
s32*func_0030DB68(void){if(!D_008EAE88[0]){if(D_008EADB8[0])goto ready;{func_00312DD0();func_002FD348(D_008EADB8,D_00483918,&D_00486DC8);}ready:func_002FD348(D_008EAE88,D_00460CE0,D_008EADB8);}return D_008EAE88;}
extern u8 D_0047E1F1[263];
char*func_003068C8(char*a){char*p=a;char s=*a;u32 c=(u8)*a;if(s){loop: {s32 sc=(s8)c;if(*(D_0047E1F1+sc)&2)*p=sc-32;p++;{u8 next=*p;c=next;if(next)goto loop;}}}return a;}
char*func_00304E38(char*a){char*p=a;char s=*a;u8 c=*a;if(s){do{s8 sc=(s8)c;if(D_0047E1F1[sc]&1)*p=sc+32;p++;c=*p;}while(c);}return a;}
typedef struct {char*p;s32 r,w;u16 flags;u16 fd;char*base;s32 size;char pad[0x3c];void*reent;char tail[8];} Stream;
extern char D_00448480[];s32 func_00306A60(void*,const char*,void*);
s32 func_00303D90(char*buf,u32 n,const char*fmt,...){Stream f;void*ap=(char*)__builtin_next_arg(fmt)-40;s32 r;f.flags=0x208;f.base=f.p=buf;f.size=f.w=n?n-1:0;f.reent=*(void**)D_00448480;r=func_00306A60(&f,fmt,ap);if(n)*f.p=0;return r;}
