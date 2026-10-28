typedef struct { s32 key; s32 flags; s32 pad[5]; } E;
typedef struct { E *items; s32 a, b, n, c; } G;
extern G D_010C1E80[];
extern s32 D_010C1EA8[];
s32 func_00107B60(void) {
    s32 g, i;
    for (g = 0; g < 2; g++) {
        for (i = 0; i < (D_010C1E80 + g)->n; i++) {
            E *e = (D_010C1E80 + g)->items + i;
            if (e->key == D_010C1EA8[0])
                return e->flags & 2;
        }
    }
    return 0;
}
