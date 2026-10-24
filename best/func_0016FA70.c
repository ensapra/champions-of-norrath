s32 D_00480404;
s32 D_00480408;
s32 D_0048040C;
s32 D_00480410;

void func_0016FACC(s32 *a, s32 *b, s32 *c, s32 *d) {
    *a = D_00480404;
    *b = D_00480408;
    *c = D_0048040C;
    *d = D_00480410;
}

s32 func_001A444C();
void *func_0011B9A8(s32);
void func_001A24AC(void *, void *, s32);

void *func_0016FA70(void *s) {
    s32 n = func_001A444C() + 1;
    void *p = func_0011B9A8(n);
    if (p != NULL) {
        func_001A24AC(p, s, n);
    }
    return p;
}

typedef struct {
    s32 type;
    s64 p;
} Item;

s32 func_0014CBF4(s32, Item *, s32);

void func_0016F828(u8 *o) {
    Item it[5];
    s64 a, b, c;
    s32 w;

    if (*(s32 *)(o + 0x988) == 0) {
        w = *(s32 *)(o + 0x984);
        if (*(s32 *)(o + 0x918) != 0) {
            a = (s32)(o + 0x9C0);
            b = (s32)(o + 0x9E0);
            c = (s32)(o + 0xA00);
        } else {
            a = (s32)(o + 0x9D0);
            b = (s32)(o + 0x9F0);
            c = (s32)(o + 0x960);
        }
        it[0].type = 0x6A;
        it[0].p = a;
        it[1].type = 0x39;
        it[1].p = b;
        it[4].type = 0xC8;
        it[4].p = c;
        func_0014CBF4(w, it, 2);
    }
}
