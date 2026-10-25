typedef struct { s32 id; s16 h; u64 key; s16 a[4]; s16 b[4]; s8 c0, c1; s16 p22; s16 v0; s16 p26[3]; s16 v1; s16 p2e[3]; s16 v2; s16 p36[3]; s16 v3; s16 p3e[9]; } L;
typedef struct { s32 id; s16 h; u64 key; s32 pad[14]; } E;
typedef struct { E e[64]; s32 cnt; } T;
void func_00104440(L *, s32, s32, s32, s32);

void func_00107498(T *t, s32 a1, s32 a2, s32 a3) {
    L l;
    s16 *p;
    s32 i, n, ok;
    E *e;
    p = &l.v3;
    for (i = 3; i >= 0; i--) {
        *p = -1;
        p -= 4;
    }
    l.c0 = -1;
    l.c1 = -1;
    for (i = 0; i < 4; i++) {
        l.a[i] = 0;
        l.b[i] = 0;
    }
    n = 0;
    for (;;) {
        s32 cnt;
        n++;
        ok = 1;
        if (n < 3) {
            func_00104440(&l, a1, a3, -1, 1);
            cnt = t->cnt;
            if (cnt > 0) {
                e = t->e;
                for (i = cnt; i != 0; i--, e++) {
                    if (e->id != 0 && l.id == e->id) {
                        if (l.key == e->key) ok = 0;
                    }
                }
            }
            if (!ok) continue;
            e = &t->e[cnt];
            t->cnt = cnt + 1;
            e->key = l.key;
            e->h = l.h;
            e->id = l.id;
        }
        break;
    }
}
