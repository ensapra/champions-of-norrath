typedef struct { f32 x, y, z; } Vec3;
typedef struct { f32 x, y, z; f32 pad[5]; } Vec8;
typedef struct { char pad[0x10]; Vec3 pos; char pad2[0x88-0x1C]; s8 f88; s8 f89; u8 f8A; } Obj;
f32 func_0015A540(s32);
void func_00143830(Obj *);
void func_001815C8(Vec3 *, s32, s32, s32, s32, s32, s32, s32, f32, f32);
s32 D_004844A4;
s32 D_00484F68;
void func_00230030(Obj *o) {
    Vec8 v;
    Vec3 w;
    s32 r;
    v.x = o->pos.x;
    v.y = o->pos.y;
    v.z = o->pos.z - 6.0f;
    r = (s32)(func_0015A540((s32)o * 0x19660D + D_004844A4 * 16 + 0x7EFE41) * 22.0f);
    if ((u32)(o->f8A - 3) < 2) v.z += 12.0f;
    o->f89 = 0;
    if (o->f88 == 0) {
        func_00143830(o);
        o->f88 = 1;
    }
    if ((u32)(o->f8A - 2) < 2) {
        w = o->pos;
        func_001815C8(&w, 0x7C, 0x51, 0x3E, 0x7D, D_00484F68, 0, 0, 26.0f, (f32)(r * 64 + 0x4E20));
        return;
    }
    func_001815C8((Vec3 *)&v, 0xFA, 0x96, 0, 0x28, D_00484F68, 0, 2, 25.0f, (f32)(r * 64 + 0x36AC));
}
