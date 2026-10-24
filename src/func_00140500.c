typedef struct { s32 id; u8 pad[0x10]; u8 name[6]; } Rec140;
extern Rec140 D_010D1340;

s32 func_00140500(u8 *dst) {
    Rec140 *r = &D_010D1340;
    s32 i;
    for (i = 0; i < 6; i++) {
        dst[i] = r->name[i];
    }
    return r->id;
}
