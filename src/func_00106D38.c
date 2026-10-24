extern void func_001B6328(s32);
void func_001001C8(void) { func_001B6328(0); }

typedef struct { s32 a, b, c, d, e, f, g; } S7;
typedef struct { S7 *data; s32 cap; s32 unk8; s32 len; s32 grow; } PtrArr;
extern void func_00106288(PtrArr *);

void func_00106368(PtrArr *p, S7 *src) {
    if (p->len >= p->cap) func_00106288(p);
    p->data[p->len] = *src;
    p->len++;
}

extern void *func_0011B8D0(s32);
extern void func_0011B968(void *);
extern s32 func_001A24AC(void *, void *, s32);

s32 func_00106B70(PtrArr *p) {
    s32 n = p->cap;
    if (n > 0) {
        S7 *q = func_0011B8D0(n * 0x1C);
        S7 *old = p->data;
        if ((s32)q < (s32)old) {
            func_001A24AC(q, old, p->len * 0x1C);
            if (p->data != 0) func_0011B968(p->data);
            p->data = q;
            return 1;
        }
        func_0011B968(q);
    }
    return 0;
}

extern u8 D_010C1E80[];
extern void func_0014CD0C(void *, s32, s32, s32);
extern void func_00106C48(s32);
extern void func_00106C58(s32);
extern void func_001079A0();

void func_00106D38(s32 i, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    S7 s;
    u8 *base = D_010C1E80 + i * 0x14;
    s.a = a;
    s.b = b;
    s.c = c;
    s.d = d;
    s.e = e;
    s.f = f;
    s.g = 0;
    func_00106368((PtrArr *)base, &s);
    func_0014CD0C((void *)a, 6, (s32)func_00106C48, 0);
    func_0014CD0C((void *)a, 7, (s32)func_00106C58, 0);
    if (b & 1)
        func_0014CD0C((void *)a, 5, (s32)func_001079A0, 0);
}
