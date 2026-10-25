typedef struct {s32 a,b,c,d,e,f,g,h;} SifState;
typedef struct {s32 fn,arg,unused;} SifEntry;
extern u8 D_01107C80[],D_01107D00[],D_01107D40[];
extern s32 D_01107D54[];
extern SifState D_01107D58[];
extern SifEntry D_01107D80[];
extern s32 D_01107F00[];
extern s32 D_004C3F10[];
void func_001B5C80(void);void func_001B5CD8(void);void FlushCache(s32);
void func_001AF790(void);void func_001AF770(void);s32 func_001AFD50(s32);
void sceSifSetDChain(void);s32 AddDmacHandler(s32,s32(*)(s32),s32);void func_001AE338(s32);
s32 sceSifGetReg(u32);void sceSifSetReg(u32,s32);
void func_001AFCD0(u32,void*,s32,s32,s32,s32);
void func_001AF7E8(void){
 SifEntry *p; s32 i,v; SifState *st;
 func_001B5C80();
 if(D_004C3F10[0]) {func_001B5CD8();return;}
 D_004C3F10[0]=1;
 st=D_01107D58;
 st->a=(s32)D_01107C80|0x20000000;
 st->b=(s32)D_01107D00|0x20000000;
 st->h=(s32)D_01107F00;
 st->e=32;st->c=0;st->d=(s32)D_01107D80;st->f=0;st->g=0;
 p=D_01107D80; do {p->fn=0;p->arg=0;p++;}while((s32)p<(s32)(D_01107D80+32));
 {s32 *end=D_01107F00+31; i=31;do{*end--=0;}while(--i>=0);}
 D_01107D80[0].fn=(s32)func_001AF790;D_01107D80[1].fn=(s32)func_001AF770;
 D_01107D80[1].arg=(s32)st;D_01107D80[0].arg=(s32)st;
 func_001B5CD8();FlushCache(0);
 if(*(volatile u32*)0x1000E010&32) *(volatile u32*)0x1000E010=32;
 if(!(*(volatile u32*)0x1000C000&256))sceSifSetDChain();
 D_01107D54[0]=AddDmacHandler(5,func_001AFD50,0);func_001AE338(5);
 v=sceSifGetReg(0x80000000);st->c=v;
 if(v){*(s32*)(D_01107D40+16)=(s32)D_01107C80;func_001AFCD0(0x80000000,D_01107D40,20,0,0,0);return;}
 while(!(sceSifGetReg(4)&0x20000));
 v=sceSifGetReg(2);D_01107D58[0].c=v;
 sceSifSetReg(0x80000000,v);sceSifSetReg(0x80000001,(s32)D_01107D58);
 *(s32*)(D_01107D40+16)=(s32)D_01107C80;*(s32*)(D_01107D40+12)=0;
 func_001AFCD0(0x80000002,D_01107D40,20,0,0,0);
}
