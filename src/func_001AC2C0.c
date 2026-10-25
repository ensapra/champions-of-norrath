typedef struct { s16 key; s16 val; } KV;
typedef struct { u8 pad[0x5CA0]; KV kv[68]; u8 pad2[0x5DB0 - 0x5CA0 - 68*4]; } Ent5DB0;
extern Ent5DB0 D_00408600[];
void func_001AC2C0(s32 a, s32 key, s32 val) {
    Ent5DB0 *e = &D_00408600[a];
    s32 i;
    for (i = 0; e->kv[i].key != -1; i++) {
        if (e->kv[i].key == key) {
            e->kv[i].val = val;
            return;
        }
    }
    e->kv[i].key = key;
    e->kv[i].val = val;
}
