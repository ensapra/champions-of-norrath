typedef struct { s32 w[3]; } C12;
typedef struct { s32 f0; s32 p4; s32 f8; s32 fc; s32 f10; } X;
typedef struct {
    u8 p0[0x10]; C12 pos; u8 p1[8]; X *x; u8 p2[0x10]; s16 h; u8 p3[0xBA]; s32 f0f4; u8 p4[0x28]; u8 f120[0x108]; s64 f228;
} O;
s64 func_0016C970(s32, s32);
void *func_001441B8(s32);
void func_00148D08(void *, C12 *, s16, s32, void *, s32, s32, s32, f32, s64, s32, s32);
void func_00203800(O *o, s32 mode) {
    s64 changed = 0;
    if (mode == 1) {
        changed = func_0016C970(o->x->fc, o->f0f4);
        o->f0f4 &= ~0x30;
        changed ^= func_0016C970(o->x->fc, o->f0f4);
    }
    if (changed) {
        void *r = func_001441B8(0x248);
        if (r) {
            C12 v = o->pos;
            func_00148D08(r, &v, o->h, o->x->fc, o->f120, o->x->f0, o->x->f8, o->x->f10, 1.0f, changed, 0x4001, 0);
        }
    }
    o->f228 = func_0016C970(o->x->fc, o->f0f4);
}
