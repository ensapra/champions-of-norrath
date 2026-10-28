typedef int V4 __attribute__((mode(TI)));
typedef struct { char m[0x40]; V4 z; } Loc;
typedef struct { V4 v0,v1,v2,v3; void *item; s32 z44,z48,value,z50,z54,z58,z5c; } Entry;
typedef struct { s32 count; char *items; s32 status; } Out;
typedef struct { char pad[0xC]; s32 count; char tail[4]; } Input;
typedef struct { s32 pad0; s32 length; s32 pad8; s32 value; } Item;
extern void func_001A2660(void *, s32, s32);
extern void *func_00179280(s32, s32);
extern void func_00192708(void *);
s32 func_00176318(Out *out, Input *in) {
    Loc l;
    V4 *tp = &l.z;
    s32 i, off, len;
    Item *item;
    Entry *e;
    func_001A2660(tp, 0, 0x10);
    out->count = in->count;
    out->items = func_00179280(0x10, in->count * 0x60);
    if (out->items == 0) return 1;
    item = (Item *)((char *)in + 0x10);
    out->status = 0;
    off = 0;
    for (i = 0; i < out->count; i++) {
        e = (Entry *)(out->items + off);
        len = item->length;
        e->item = item;
        e->value = item->value;
        func_00192708(&l);
        e->v0 = *tp; e->v1 = *tp; e->v2 = *tp; e->v3 = *tp;
        e->z44 = 0; e->z48 = 0; e->z50 = 0; e->z54 = 0; e->z58 = 0; e->z5c = 0;
        i++;
        item = (Item *)((char *)item + len * 4 + 0x10);
        off += 0x60;
        i--;
    }
    return 0;
}
