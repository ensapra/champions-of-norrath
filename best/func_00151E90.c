extern volatile s32 D_0047FC1C;

typedef struct Timer {
    s64 time;
    s32 pad8;
    s32 arg;
    s64 data;
    void (*fn)(s32, s64, s32);
    struct Timer *next;
} Timer;

typedef struct {
    u8 pad[0xFA0];
    Timer head;
    s64 last;
} TimerMgr;

void func_0015217C(Timer *);

void func_00151E90(TimerMgr *m) {
    Timer *t, *prev, *next;
    Timer tmp;
    if (D_0047FC1C == m->last) return;
    t = m->head.next;
    prev = &m->head;
    if (t != NULL) {
        do {
            next = t->next;
            t->time -= D_0047FC1C - m->last;
            if (t->time <= 0) {
                tmp.arg = t->arg;
                tmp.fn = t->fn;
                prev->next = next;
                tmp.data = t->data;
                func_0015217C(t);
                tmp.fn(tmp.arg, tmp.data, 0);
            } else {
                prev = t;
            }
            t = next;
        } while (t != NULL);
    }
    m->last = D_0047FC1C;
}
