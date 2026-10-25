typedef struct Cb { s32 f00; s32 f04; s32 sema8; s32 f0C; s32 f10; s32 f14; s32 gp; void (*func)(s32); s32 arg; s32 f24; s32 sema; s32 f2C; } Cb;
typedef struct Msg { s32 pad[7]; Cb *cb; u32 cmd; s32 a; s32 b; } Msg;
s32 iSignalSema_2(s32);
void func_002E47A8(s32);

void func_002E47C8(Msg *m) {
    Cb *t;
    switch (m->cmd) {
    case 0x8000001A:
        t = m->cb;
        if (t->func != 0) {
            t->func(t->arg);
        }
        iSignalSema_2(t->sema);
        break;
    case 0x80000019:
        t = m->cb;
        t->f24 = m->a;
        t->f14 = m->b;
        iSignalSema_2(t->sema);
        break;
    case 0x8000001C:
        break;
    case 0x8000001D:
        t = m->cb;
        t->f2C = m->a;
        iSignalSema_2(t->sema);
        break;
    }
    t = m->cb;
    if (t->sema8 >= 0) {
        iSignalSema_2(t->sema8);
    }
    func_002E47A8(t->f00);
    t->f00 = 0;
}
