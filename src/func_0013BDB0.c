typedef struct{void*data;s32 cap,min,len,grow;}PA;
void*func_0011B940(void*,s32);
void func_0013BDB0(PA*p){s32 g=p->grow,c=p->cap,n=c-g*2;if(c-g*3>=p->len&&n>=p->min){p->cap=n;p->data=func_0011B940(p->data,n*600);}}
