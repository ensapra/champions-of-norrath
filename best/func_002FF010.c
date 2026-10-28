typedef struct N N;
struct N { u8 pad[12]; s32 id; void (*fn)(void *, s32); s32 cnt; N *next; u64 count; void *arg; };
N **func_002FA108(void); void func_002FA588(void *); s32 func_002FE608(s32); void func_002FEE30(void) __attribute__((noreturn));
void func_002FF010(N *p) {
    N **slot = func_002FA108();
    N **head = slot;
    N *n = *slot;
    u64 count = p->count - 1;
    p->count = count;
    if (p != n || p->cnt != 0) {
        if (count) {
            if (p == n) {
                n = p->next;
                if (n && n->cnt == 0) {
                    N *x = n;
                    slot = &p->next;
                    while (x && x->cnt == 0) {
                        slot = &x->next;
                        x = *slot;
                    }
                    *head = n;
                    p->next = *slot;
                    *slot = p;
                }
            }
        } else {
            for (;;) {
                if (!n) func_002FEE30();
                if (n == p) break;
                slot = &n->next;
                n = *slot;
            }
            *slot = p->next;
            if (p->fn) p->fn(p->arg, 2);
            if (func_002FE608(p->id) == 0) func_002FA588(p->arg);
            func_002FA588(p);
        }
    }
}
