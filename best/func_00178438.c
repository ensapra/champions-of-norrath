typedef struct { u64 key; s32 val; } K;
typedef struct { u8 pad[0x18]; s32 v; } Ent;
extern Ent *D_010EB5F0[4];
extern u32 D_010EB5F4[4];
extern void func_00178B60(Ent *e, u64 *out);

void func_00178438(K *k) {
    u32 i = 0;
    s32 off = 0;
    u64 buf[1];
    if (D_010EB5F4[0] != 0) {
        do {
            s32 eq;
            func_00178B60((Ent *)((u8 *)D_010EB5F0[0] + off), buf);
            eq = ((buf[0] ^ k->key) & 0x00FFFFFF00FFFF00ULL) == 0;
            if (eq == 1) {
                k->val = *(s32 *)(off + (s32)D_010EB5F0[0] + 0x18);
                return;
            }
            i++;
            off += 0x1C;
        } while (i < D_010EB5F4[0]);
    }
}
