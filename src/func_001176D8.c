extern s32 D_001BD960[];extern s32 D_001BD964[];
void func_001176C0(s32 a,s32 b){*D_001BD960=a;*D_001BD964=b;}
void func_001176D8(s32*a,s32*b){*a=*D_001BD960;*b=*D_001BD964;}
typedef struct __attribute__((packed)){u64 a,b,c,d;} P32;
typedef struct {P32 *data;s32 cap,unk,len,grow;} Arr;
void *func_0011B940(void*,s32);void *func_0011B8D0(s32);
void ovl_ntgui2_func_00117778(void *v){Arr*p=v;s32 n=p->cap+p->grow;void*old=p->data;p->cap=n;if(old)p->data=func_0011B940(old,n*32);else p->data=func_0011B8D0(n*32);}
void func_00117848(void *v,void *src){Arr*p=v;if(p->len>=p->cap)ovl_ntgui2_func_00117778(p);p->data[p->len]=*(P32*)src;p->len++;}
