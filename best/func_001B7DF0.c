typedef struct { void (*fn)(s32,s32); s32 arg; s32 gp; s32 pad; } Ent; extern u8 func_01109848[],jtbl_004C006C[];
s32 func_001B7DF0(s32 which,s32 x){ Ent *p; s32 n; s32 saved=0; if(which){p=(Ent*)(func_01109848+0x4040);n=32;}else{p=*(Ent**)(jtbl_004C006C+0x4f04);n=*(s32*)(jtbl_004C006C+0x4f08);} if(n>0){do{if(p->fn){saved=p->gp;p->fn(x,p->arg);}n--;p++;}while(n);}return saved;}
