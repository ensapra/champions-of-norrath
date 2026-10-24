typedef struct {
    s32 size;
    s32 count;
    s32 pad8;
    u8 *cur;
    u8 buf[1];
} Ring;

void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + r->size + 0x10) {
        r->cur = r->buf;
    }
}

typedef struct {
    s32 depth;
    s32 vals[0x23];
    s32 ptrs[0x20];
} Stack175;

extern Stack175 D_010EA950;

void func_001752F0(void) {
    D_010EA950.depth = 0;
}

typedef struct {
    s32 a;
    s32 pad[9];
} Ent28;

extern Ent28 D_010EA1E8[];
void func_0018E0C0(s32);

void func_001752C0(s32 i) {
    func_0018E0C0(D_010EA1E8[i].a + 0x10);
}

void func_00171AE0(s32);

s32 func_00175250(void) {
    Stack175 *s = &D_010EA950;
    s32 p;
    if (s->depth == 0) {
        return -1;
    }
    s->depth--;
    p = s->ptrs[s->depth];
    if (p == 0) {
        return 0xFFFF;
    }
    func_00171AE0(p);
    return s->vals[s->depth];
}
