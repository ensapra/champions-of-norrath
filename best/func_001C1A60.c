typedef struct { char a[0x20]; char b[0x20]; } E;
typedef struct { u8 pad[0x4568]; E e[0x40]; s32 n; u8 pad2[0x5DB0-0x556C]; } R;
extern R D_00408600[];
extern s32 D_00484538;
s32 func_003044FC(void *, void *);
void func_00304640(void *, void *);
void func_001C1A60(char *a, char *b) {
    s32 n = 0, i, c;
    R *r;
    if (D_00484538 <= 0) return;
    r = D_00408600;
    do {
        c = r->n;
        if (c >= 0x40) return;
        for (i = 0; i < c; i++, c = r->n)
            if (!func_003044FC(r->e[i].a, a)) return;
        func_00304640(r->e[c].a, a);
        func_00304640(r->e[c].b, b);
        r->n++;
        r++;
        n++;
    } while (n < D_00484538);
}
