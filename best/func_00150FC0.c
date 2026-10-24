void func_00150CE4(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    *arg1 = *(s32 *)((u8 *)arg0 + 0x5A0) + *(s32 *)((u8 *)arg0 + 0x5D4);
    *arg2 = *(s32 *)((u8 *)arg0 + 0x5D4) + *(s32 *)((u8 *)arg0 + 0x5A4);
    *arg3 = *(s32 *)((u8 *)arg0 + 0x5AC);
    *arg4 = *(s32 *)((u8 *)arg0 + 0x5B0);
}

void func_00150F50(void *o) {
    void *p = *(void **)((u8 *)o + 0x4C);
    p = *(void **)((u8 *)p + 0x120);
    ((void (*)(void))p)();
}

s32 func_00152944(s32, s32);
s32 func_00150F74(u8 *o, s32 b) {
    s32 r = 0;
    if (b != 0) {
        r = func_00152944(b, *(s32 *)(o + 0x848));
        if (r != 0) {
            r = 1;
            *(s32 *)(o + 0x854) += 1;
        }
    }
    return r;
}

typedef struct N { s32 p0; s32 p4; struct N *next; s32 pc; s32 key; } N;
void func_001529A8(void *, void *);
void func_00150FC0(u8 *o, s32 key) {
    N *prev = (N *)(o + 0x840);
    N *head = prev;
    N *n;
    if (*(s32 *)(o + 0x864) == key)
        *(s32 *)(o + 0x864) = 0;
    while ((n = prev->next) != head) {
        prev = n;
        if (n->key == key) {
            func_001529A8(n, head);
            *(s32 *)(o + 0x854) -= 1;
            break;
        }
    }
}
