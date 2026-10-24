typedef struct { s32 x, y, z; } P12;
s32 func_00149068(void *, P12 *, char *, char *, char *, s32, s32, s32, f32);
extern u8 D_0044CDD8[];
s32 func_001E6190(void *a, P12 *b, char *lmp, char *vif, char *tex, s32 c, s32 flags) {
    P12 p = *b;
    func_00149068(a, &p, lmp, vif, tex, c, flags, 0, 1.0f);
    *(s32 *)((u8 *)a + 0x248) = 0;
    *(s32 *)((u8 *)a + 0x24C) = 0;
    *(void **)((u8 *)a + 0x48) = D_0044CDD8;
}
