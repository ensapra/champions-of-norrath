typedef struct { u8 pad[0x720]; s32 a; s32 b; u8 pad1[4]; s8 c; u8 pad2[3]; s32 id; } G;
extern G D_006F6E50[];
s32 func_00184B78(s32 id) {
    G *e;
    s32 key = id;
    if (key == 0) return 0;
    e = &D_006F6E50[key & 0xFF];
    if (e->id != key) return 0;
    if (e->c != 0) {
        if (e->a != 0) {
            if (e->b != 0) return 1;
        }
    }
    return 0;
}
