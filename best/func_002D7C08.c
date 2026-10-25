extern s32 iSignalSema_2(s32); extern void func_002D7B78(void *);
typedef struct {void*buf;s32 pad04;s32 sema;s32 pad0c[2];s32 size;void*gp;void(*func)(void*);void*arg;s32 rsize;} RpcData;
typedef struct{s32 pad[7];RpcData*cd;u32 cmd;s32 a;s32 b;} RpcPkt;
void func_002D7C08(RpcPkt *p){RpcData*c=p->cd;switch(p->cmd){case 0x8000000a:if(c->func)c->func(c->arg);break;case 0x80000009:c->rsize=p->a;c->size=p->b;break;default:break;}if(c->sema>=0)iSignalSema_2(c->sema);func_002D7B78(c->buf);c->buf=0;}
