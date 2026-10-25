typedef struct{void*data;s32 cap,min,len,grow;}PA;
void*func_0011B8D0(s32);void*func_0011B940(void*,s32);
void func_0013BD40(PA*p){s32 n=p->cap+p->grow;void*old=p->data;p->cap=n;if(old)p->data=func_0011B940(old,n*600);else p->data=func_0011B8D0(n*600);}
