/* identical to func_0017E238 (matched), with its names changed by decompdecomp */
typedef struct{u8 pad0,b1,b2,hour;}Date;
extern void func_002D1450(Date *);
void func_002D15B0(Date *p){ if(++p->hour==24){ p->hour=0; func_002D1450(p);} }
