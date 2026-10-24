s32 GetMemorySize();
s32 _InitTLB();
s32 func_001B83E8();
s32 func_001B83A8(void) {
    if (GetMemorySize() == 0x02000000) {
        return func_001B83E8();
    }
    return _InitTLB();
}

typedef struct { char name[0xC]; s32 val; } Ent178;
typedef struct { u8 pad[0xC]; s32 count; Ent178 ent[1]; } Tbl178;
s32 func_0019FDF8(const char *, const char *, s32);

s32 func_00178750(Tbl178 *t, const char *name, s32 *out) {
    Ent178 *e = t->ent;
    s32 i;
    for (i = t->count - 1; i > 0; i--, e++) {
        if (func_0019FDF8(name, e->name, 0xC) == 0) {
            *out = e->val;
            return 0;
        }
    }
    return 5;
}

typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; } Item178;
typedef struct { u8 pad[0xC]; s32 n; s8 start; s8 end; u8 pad2[0xE]; Item178 item[1]; } Obj178;
extern s32 D_001D0440[];
void func_00178408(s32, Item178 *);

s32 func_001785C0(Obj178 *o) {
    s32 i;
    Item178 *e;
    for (i = o->start, e = &o->item[i]; i < o->end; i++, e++) {
        e->f8 += D_001D0440[0];
        func_00178408(1, e);
        if ((u8 *)o + o->n * 0x30 < (u8 *)e) return 0;
    }
    return 1;
}

s32 func_00178518(Obj178 *o) {
    s32 i;
    Item178 *e = o->item;
    for (i = 0; i < o->start; i++, e++) {
        e->f8 += D_001D0440[0];
        func_00178408(1, e);
        if ((u8 *)o + o->n * 0x30 < (u8 *)e) return 0;
    }
    return 1;
}
