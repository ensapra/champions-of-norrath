typedef struct { s32 a; s32 flags; u8 pad[0x1C]; } E24;
typedef struct { u8 pad[0xB80]; E24 *items; u8 pad2[0x6C]; s32 count; u8 pad3[0x118]; s32 d0c; } S15BB;
void func_0015BB8C(S15BB *p) {
    s32 i;
    for (i = 0; i < p->count; i++) {
        p->items[i].flags &= 0xAF;
    }
    p->d0c = 0;
}
