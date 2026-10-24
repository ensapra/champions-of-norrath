typedef struct{s32 size;s32 count;u8 *rd;u8 *wr;u8 data[1];}Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if (r->wr == r->data + r->size) r->wr = r->data; }
typedef struct { s32 a; s32 b; s32 flag; s32 c; s32 cnt; } G;
extern G D_003642D0;
G *func_0019C00C(s32 a) {
    G *g = &D_003642D0;
    if (a != 1) { g->flag = 1; return g; }
    g->flag = 0;
    return g;
}
