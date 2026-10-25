typedef unsigned int U128 __attribute__((vector_size(16)));
typedef struct { s32 count; void *items; s32 status; } Out;
typedef struct { char pad[0xC]; s32 count; char tail[4]; } Input;
typedef struct { s32 pad0; s32 length; s32 pad8; s32 value; } Item;
typedef struct { U128 v0,v1,v2,v3; void *item; s32 z44,z48,value,z50,z54,z58,z5c; } Entry;
extern void func_001A2660(void *, s32, s32);
extern s32 func_00179280(s32, s32);
extern void func_00192708(void *);
s32 func_00176318(Out *out, Input *in) {
    U128 temp;
    s32 i, offset;
    Item *item;
    Entry *entry;
    func_001A2660(&temp, 0, 0x10);
    out->count = in->count;
    out->items = (void *)func_00179280(0x10, in->count * 0x60);
    if (out->items == 0) return 1;
    item = (Item *)((char *)in + 0x10);
    out->status = 0;
    offset = 0;
    for (i = 0; i < out->count; i++) {
        entry = (Entry *)((char *)out->items + offset);
        entry->item = item;
        entry->value = item->value;
        func_00192708(&temp);
        entry->v0=temp; entry->v1=temp; entry->v2=temp; entry->v3=temp;
        entry->z44=0; entry->z48=0; entry->z50=0; entry->z54=0; entry->z58=0; entry->z5c=0;
        item=(Item*)((char*)item+item->length*4+0x10);
        offset+=0x60;
    }
    return 0;
}
