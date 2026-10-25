typedef struct { char pad[0x5CA0]; s16 t[0x6C]; char pad2[0x5DB0-0x5CA0-0xD8]; } Big;
extern Big D_00408600[];

s16 func_001AC260(s32 a, s32 key) {
    Big *b = &D_00408600[a];
    s16 *p;
    s32 v;
    if (b->t[0] != -1) {
        p = b->t;
        v = *p;
        for (;;) {
            if (v == key) return p[1];
            p += 2;
            v = *p;
            if (v == -1) break;
        }
    }
    return 0;
}
