typedef struct { s32 key; s32 pad[5]; s32 f18; } E;
typedef struct { E *items; s32 a, b, n, c; } G;
extern G D_010C1E80[];
void func_001079A0(s32 v) {
    s32 g, i;
    for (g = 0; g < 2; g++) {
        for (i = 0; i < D_010C1E80[g].n; i++) {
            if (D_010C1E80[g].items[i].key == v)
                D_010C1E80[g].items[i].f18 = 1;
        }
    }
}
