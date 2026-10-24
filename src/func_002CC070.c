typedef struct { s8 a; s8 b; } P;
typedef struct { s32 a; s32 b; P *buf; s32 n; } Q;
void func_002CC070(Q *p, P *src) {
    if (p->n < 0x80) {
        p->buf[p->n++] = *src;
    }
}
