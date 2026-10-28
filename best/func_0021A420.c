struct Vec3 { f32 x, y, z; Vec3() {} };
extern char D_0044A150[];
extern const f32 D_00481628;
extern s32 D_004844A4;
void func_00153FD0(void *, Vec3, s32, s32);
s32 func_00153FA8(void *);
void func_00143830(void *);

struct Sub { u8 b8, b9; };
struct Obj {
    char pad0[0xC]; u32 fC;
    f32 x, y, z;
    s32 f1C;
    char pad1[0x38 - 0x20]; s16 f38;
    char pad2[0x48 - 0x3A]; char *f48;
    char pad3[0x54 - 0x4C]; s32 f54; s32 f58;
    char pad4[0x68 - 0x5C]; f32 f68, f6C, f70;
    u8 f74;
    char pad5[0x78 - 0x75];
    char sub[0x8]; u8 s8, s9;
};
struct Other {
    char pad0[0xFC]; s32 fFC;
    char pad1[0x234 - 0x100]; f32 f234;
    char pad2[0x3A0 - 0x238]; s32 f3A0;
    s32 pad3; s32 f3A8;
};

void func_0021A420(Obj *o, Vec3 pos, s32 unused, Other *t) {
    Sub *s;
    func_00153FD0(o, pos, 0, 0);
    o->f48 = D_0044A150;
    s = (Sub *)((char *)o + 0x78 + 8);
    s->b9 = 0;
    s->b8 = 0;
    o->f1C = 0;
    o->f38 = func_00153FA8(o);
    o->fC |= 0x4000;
    o->f54 = D_004844A4 + 0x258;
    if (func_00153FA8(o) % 0x10000 < 0x7333) {
        o->f74 = 0;
        t->f3A0 = 30;
    } else {
        o->f74 = 1;
        t->f3A8 = 30;
    }
    t->fFC = D_004844A4;
    o->f58 = (s32)(t->f234 * D_00481628);
    func_00143830(o);
    o->z += 36.0f;
    o->f68 = (o->x - 50.0f) + (f32)(s32)(func_00153FA8(o) % 100U);
    o->f6C = (o->y - 50.0f) + (f32)(s32)(func_00153FA8(o) % 100U);
    o->f70 = o->z + (f32)(s32)(func_00153FA8(o) % 2000U) + 36.0f;
}
