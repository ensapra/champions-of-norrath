typedef struct {
    s32 key;
    s32 flags;
    s32 pad[4];
    s32 f18;
} E;

typedef struct {
    E *items;
    s32 b, c;
    s32 count;
    s32 e;
} Q;

extern Q D_010C1E80[];
extern s32 D_010C1EA8[];
extern s32 func_00107BF0(void);

s32 func_00107B60(void) {
    s32 k, i;
    for (k = 0; k < 2; k++) {
        Q *q = &D_010C1E80[k];
        for (i = 0; i < q->count; i++) {
            if (q->items[i].key == D_010C1EA8[0])
                return q->items[i].flags & 2;
        }
    }
    return 0;
}

void func_00107AF0(void) {
    s32 k, i;
    for (k = 0; k < 2; k++) {
        Q *q = &D_010C1E80[k];
        for (i = 0; i < q->count; i++)
            q->items[i].f18 = 0;
    }
}

s32 func_00107A68(void) {
    Q *q = &D_010C1E80[func_00107BF0()];
    s32 i;
    for (i = 0; i < q->count; i++) {
        if (q->items[i].key == D_010C1EA8[0])
            return q->items[i].key;
    }
    return 0;
}
