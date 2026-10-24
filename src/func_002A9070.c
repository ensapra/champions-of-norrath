typedef struct S9070 { u8 pad[0xE]; s16 e; s16 f10; u8 pad2[6]; s16 f18; s16 f1a; u8 pad3[8]; f32 f24; f32 f28; } S9070;
void func_002A9070(volatile S9070 *a) {
    f32 one = 1.0f;
    f32 five = 5.0f;
    a->f18 = 13;
    a->f28 = five;
    a->f24 = one;
    a->f10 = 1;
    a->f1a = 5;
    a->e = 1;
}

extern void *D_00438EF8[];
s32 func_00143A58(void *p);
s32 func_002A91A8(void *unused, void *p) {
    u32 t;
    if (*(s32 *)((char *)p + 0xC) & 0x40) {
        t = *(u32 *)((char *)p + 0x3C0);
        if (t < 4) {
            if (!func_00143A58(D_00438EF8[t])) return 1;
        }
    }
    return 0;
}

typedef struct Vec3 { f32 x, y, z; } Vec3;
void func_001DBBB0(s32, void *, Vec3, s32, void *, u32, f32, f32, f32);
void func_002A85F8(void *unused, u8 *o) {
    *(s16 *)(o + 0x8E) = 0x30;
    *(s16 *)(o + 0x90) = 0xBE;
    *(s16 *)(o + 0x96) = 0x30;
    *(s16 *)(o + 0x98) = 0xBE;
    *(s16 *)(o + 0x8C) = 0x2C;
    *(s16 *)(o + 0x9A) = 0x29;
    *(s16 *)(o + 0x94) = 0x2C;
    *(s16 *)(o + 0x92) = 0x29;
    func_001DBBB0(*(s32 *)(o + 0x534), o + 0x120, *(Vec3 *)(o + 0x10), *(s16 *)(o + 0x38), o + 0x338, 0x5E808080, 1.0f, 1.0f, 0.0f);
}
