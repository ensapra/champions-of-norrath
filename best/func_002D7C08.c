extern s32 iSignalSema_2(s32);
extern void func_002D7B78(void *);

typedef struct {
    void *buf;
    s32 pad04[1];
    s32 sema;
    s32 pad0C[2];
    s32 size;
    void *gp;
    void (*func)(void *);
    void *arg;
    s32 rsize;
} RpcData;

typedef struct {
    s32 pad[7];
    RpcData *cd;
    u32 cmd;
    s32 a;
    s32 b;
} RpcPkt;

void func_002D7C08(RpcPkt *pkt) {
    RpcData *cd;

    if (pkt->cmd == 0x8000000A) {
        cd = pkt->cd;
        if (cd->func != 0) {
            cd->func(cd->arg);
        }
    } else if (pkt->cmd == 0x80000009) {
        cd = pkt->cd;
        cd->rsize = pkt->a;
        cd->size = pkt->b;
    }
    cd = pkt->cd;
    if (cd->sema >= 0) {
        iSignalSema_2(cd->sema);
    }
    func_002D7B78(cd->buf);
    cd->buf = 0;
}
