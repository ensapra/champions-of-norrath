typedef struct{u8 pad0,b1,b2,hour;}Date;
extern void ovl_ntgui2_func_0017E0D8(Date *);
void func_0017E238(Date *p){ if(++p->hour==24){ p->hour=0; ovl_ntgui2_func_0017E0D8(p);} }
