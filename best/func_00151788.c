extern char func_001C8098[];
void func_0014D394(s32);
void func_0015171C(s32);
void *func_0011B9A8(s32);

void func_0016DA14(void *arg0) {
    s32 i;
    ((void (*)(void *))*(unsigned int *)(func_001C8098 + 0x1090))(arg0);
    i = 0;
    if (*(s32 *)((char *)arg0 + 0x9C4) > 0) {
        do {
            func_0014D394(((s32 *)*(void **)((char *)arg0 + 0x980))[i++]);
        } while (i < *(s32 *)((char *)arg0 + 0x9C4));
    }
}

void func_00151788(s32 *p, s32 n) {
    while (n--) {
        if (*p) {
            func_0015171C(*p);
            *p = 0;
        }
        p++;
    }
}

void func_0015175C(s32 *p, s32 n) {
    while (n--) {
        *p++ = 0;
    }
}

typedef struct { s32 a; s32 pad; s64 c; s32 b; } Node1516;
Node1516 *func_001516C4(s32 a, s32 b, s64 c) {
    Node1516 *n = func_0011B9A8(0x20);
    if (n != NULL) {
        n->c = c;
        n->a = a;
        n->b = b;
    }
    return n;
}
