typedef struct {
    s32 key;
    s32 pad[5];
    s32 f18;
} E;

extern u8 D_010C1E80[];

void func_001079A0(s32 v) {
    s32 off = 0;
    s32 *cnt = (s32 *)(D_010C1E80 + 0xC);
    s32 k = 1;
    do {
        s32 i = 0;
        if (*cnt > 0) {
            u8 *q = D_010C1E80 + off;
            s32 o = 0;
            E *items = *(E **)q;
            E *e = items;
            do {
                o += 0x1C;
                if (e->key == v)
                    e->f18 = 1;
                i++;
                e = (E *)((u8 *)items + o);
            } while (i < *(s32 *)(q + 0xC));
        }
        k--;
        off += 0x14;
        cnt += 5;
    } while (k >= 0);
}
