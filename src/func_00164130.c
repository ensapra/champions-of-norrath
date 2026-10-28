typedef struct { s8 pad[0x14]; s16 flags; s8 pad2[0xA]; } E164;
typedef struct { s8 pad[4]; s8 count; s8 pad2[0xB]; E164 e[1]; } S164;

s32 func_00164130(S164 *p, s32 mask) {
    s32 i;
    for (i = 0; i < p->count; i++) {
        E164 *e = &p->e[i];
        if (e->flags & mask) return i;
    }
    return 0xC4653600;
}
