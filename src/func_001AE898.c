typedef struct { s32 size; s32 count; s32 pad; char *cur; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (char *)r + (r->size + 0x10)) {
        r->cur = (char *)r + 0x10;
    }
}
