extern f32 D_0047FB08;
typedef struct { s16 type, val, p0, p1; } Slot;
typedef struct { u8 *obj; Slot s[8]; } Obj;
static inline s32 find(Obj *a, s32 t) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (a->s[i + 4].type == t)
            return a->s[i + 4].val;
    }
    return 0;
}
s32 func_001039F0(Obj *a) {
    f32 fh = (f32)*(s16 *)(a->obj + 0x1A);
    if (find(a, 0x23) != 0) {
        f32 sum = (f32)find(a, 0x23) * D_0047FB08 * fh + fh;
        fh = sum;
    }
    return (s32)fh;
}
