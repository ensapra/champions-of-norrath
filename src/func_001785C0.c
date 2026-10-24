typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; } Item178;
typedef struct { u8 pad[0xC]; s32 n; s8 start; s8 end; u8 pad2[0xE]; Item178 item[1]; } Obj178;
extern s32 D_001D0440[];
void func_00178408(s32, Item178 *);

s32 func_001785C0(Obj178 *o) {
    s32 i;
    Item178 *items = o->item;
    Item178 *e;
    for (i = o->start; i < o->end; i++) {
        e = &items[i];
        e->f8 += D_001D0440[0];
        func_00178408(1, e);
        if ((u8 *)o + o->n * 0x30 < (u8 *)e) return 0;
    }
    return 1;
}

s32 func_00178518(Obj178 *o) {
    s32 i;
    Item178 *items = o->item;
    Item178 *e;
    for (i = 0; i < o->start; i++) {
        e = &items[i];
        e->f8 += D_001D0440[0];
        func_00178408(1, e);
        if ((u8 *)o + o->n * 0x30 < (u8 *)e) return 0;
    }
    return 1;
}
