typedef struct Vec3 { f32 x, y, z; } Vec3;
typedef struct Rect16 { s16 x, y, w, h; } Rect16;
void func_001DBBB0(s32, void *, Vec3 *, s32, void *, u32, f32, f32, f32);
void func_002A85F8(void *unused, u8 *o) {
    Vec3 tmp;
    Vec3 v;
    Rect16 *r = (Rect16 *)(o + 0x8C);
    r[0].y = 0x30;
    r[0].w = 0xBE;
    r[1].y = 0x30;
    r[1].w = 0xBE;
    r[0].x = 0x2C;
    r[1].h = 0x29;
    r[1].x = 0x2C;
    r[0].h = 0x29;
    v = *(Vec3 *)(o + 0x10);
    func_001DBBB0(*(s32 *)(o + 0x534), o + 0x120, &v, *(s16 *)(o + 0x38), o + 0x338, 0x5E808080, 1.0f, 1.0f, 0.0f);
}
