typedef struct {
    s32 a;
    s32 b;
} Pair1A4D50;

typedef struct {
    char pad0[0x24];
    Pair1A4D50 *anims;
    char pad28[0xB0 - 0x28];
    f32 fB0;
    char padB4[0x120 - 0xB4];
    char sub[0x3C0 - 0x120];
    s32 id;
    char pad3C4[0x578 - 0x3C4];
    s32 state;
} Obj1A4D50;

extern s8 D_0040E21E[];
extern f32 D_00480490;
extern f32 D_00480494;
extern f32 D_00480498;
extern s32 D_004844C0;
void func_00113460(Obj1A4D50 *);
void func_00160128(void *, s32, s32, f32);
void func_001639E8(void *);

void func_001A4D50(Obj1A4D50 *o, s32 mode)
{
    s32 n = D_0040E21E[o->id * 0x5DB0] * 13;

    switch (mode) {
    case 0:
        if (D_004844C0 & 0x10000000) {
            func_00160128(o->sub, o->anims[4].b, 3, D_00480490);
        } else {
            func_00160128(o->sub, o->anims[n + 8].b, 3, D_00480494);
        }
        o->state = 0;
        break;
    case 1:
        o->fB0 = 80.0f;
        func_00113460(o);
        if (o->state != mode) {
            func_00160128(o->sub, o->anims[n + 9].b, 3, D_00480498);
        }
        func_001639E8(o->sub);
        o->state = mode;
        break;
    }
}
