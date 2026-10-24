typedef struct{s32 size;s32 count;u8 *rd;u8 *wr;u8 data[1];}Ring;
void func_001AE898(Ring *r){ r->count++; r->wr++; if (r->wr == r->data + r->size) r->wr = r->data; }
typedef struct { s32 pad0; s32 pad1; s32 id; s32 flags; s64 a; s64 b; } Ent;
s64 func_001B6DC0();
s64 func_001B73D0(s32 h) {
    Ent *e = (Ent *)(((u32)h >> 10) << 6);
    if (h < 0 || (h & 0x3FF) != e->id) return -1;
    if (e->flags & 1) return e->a - e->b;
    return 0;
}
s64 func_001B7468(s32 h) {
    Ent *e = (Ent *)(((u32)h >> 10) << 6);
    s64 r;
    if (h < 0 || (h & 0x3FF) != e->id) return -1;
    r = e->b;
    if (e->flags & 1) r += func_001B6DC0() - e->a;
    return r;
}
