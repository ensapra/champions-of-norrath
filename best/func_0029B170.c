extern "C" {
extern const f32 D_004828C0;
}
typedef struct { f32 x, y, z; } Vec3;
typedef struct {
    s16 at0;
    u8 pad2[2];
    void (*fn)(void *, s32);
} Sub;
typedef struct {
    u8 pad0[0xC];
    u8 *unkC;
    void *unk10;
    u8 *unk14;
    f32 f18;
} ObjB;

extern "C" void func_0029B170(ObjB *a, Vec3 *v) {
    Vec3 local = *v;
    f32 d;
    a->f18 = d = a->f18 - D_004828C0;
    if (d < 0.0f) {
        if (a != 0) {
            Sub *s = (Sub *)(a->unk14 + 8);
            s->fn((u8 *)a + s->at0, 3);
        }
    } else {
        s32 y;
        f32 one = 1.0f;
        y = (s32)((one <? d) * 128.0f);
        *(s16 *)(a->unkC + 0x92) = 0x71;
        *(s16 *)(a->unkC + 0x96) = y;
        *(s16 *)(a->unkC + 0x8E) = y;
    }
}
