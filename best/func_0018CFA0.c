typedef struct { s32 size; s32 count; s32 pad; u8 *cur; } Ring;
void func_001AE898(Ring *r) {
    r->count++;
    r->cur++;
    if (r->cur == (u8 *)r + (r->size + 0x10)) r->cur = (u8 *)r + 0x10;
}

typedef struct { u8 pad[0x58]; s32 count; s32 offs[1]; } Tbl;
void *func_0018CFA0(u8 *obj, s32 i) {
    Tbl *t = *(Tbl **)(obj + 0x380);
    if (t != NULL && i < t->count) {
        return (u8 *)t + t->offs[i];
    }
    return NULL;
}

void func_0018AE20(void *);
s32 func_0018CF58(u8 *obj, s32 *t) {
    if (t[0] != 0 || t[1] != 0) return -1;
    *(s32 **)(obj + 0x380) = t;
    func_0018AE20(obj);
    return 0;
}

void func_00192510(s32, void *);
void func_0018B0C8(u8 *obj, s32 a) {
    func_00192510(a, obj + 0x310);
}
