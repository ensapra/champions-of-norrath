u32 D_00483E5C;
s8 D_00484318;
s32 D_004844A4;
s32 func_001441B8(s32);
void func_0028DA68(s32, f32 *, s32, f32, f32);

typedef struct {
    char pad0[0x10];
    f32 x, y, z;
    char pad1[0x4C - 0x1C];
    f32 v[3];
    u8 unk58;
    s8 unk59;
} Obj28B540;

#define RND() ((D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F) >> 16)

void func_0028B540(Obj28B540 *o) {
    f32 pos[3];
    f32 *v;
    s32 h;

    o->unk58++;
    v = o->v;
    v[0] *= 0.5f;
    v[1] *= 0.5f;
    v[2] *= 0.5f;
    if (o->v[2] < 0.0f) {
        o->v[2] = -o->v[2];
    }
    pos[2] = o->z;
    if (o->unk59 != 0) {
        if (D_00484318 != 0 || D_004844A4 % 37 == 0) {
            pos[0] = o->x + ((s32)RND() * (1.0f / 65536.0f) - 0.5f) * ((s32)RND() * (1.0f / 65536.0f) * 40.0f + 10.0f);
            pos[1] = o->y + ((s32)RND() * (1.0f / 65536.0f) - 0.5f) * ((s32)RND() * (1.0f / 65536.0f) * 40.0f + 10.0f);
            h = func_001441B8(0x4A8);
            if (h != 0) {
                func_0028DA68(h, pos, RND() % 3 * 60 + 120, 240.0f, 0.5f);
            }
        }
    }
}
