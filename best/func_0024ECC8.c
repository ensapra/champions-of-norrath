typedef struct { s8 used; char pad[0x4F]; } Rec;
Rec *func_00166F48(void *);
extern u8 D_007D8A90[];
Rec *func_0024ECC8(s32 n) {
    Rec *p = func_00166F48(D_007D8A90);
    if (p != NULL) {
        s32 i = 0;
        if (n >= 0) {
            Rec *q = p;
            do {
                s8 c = q->used;
                q++;
                if (c == 0) return NULL;
                i++;
            } while (i <= n);
        }
        return &p[n];
    }
    return p;
}
