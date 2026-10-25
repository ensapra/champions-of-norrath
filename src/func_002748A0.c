typedef struct {
    char p0[0x2E8]; f32 fade;
    char p1[0x348 - 0x2EC]; f32 f348;
    char p2[4]; f32 f350;
    char p3[0x3BC - 0x354]; s32 idx;
    char p4[0x40C - 0x3C0]; s32 f40C;
    char p5[0x864 - 0x410]; s32 f864; s32 f868;
} Obj;
typedef struct { u32 flags; char pad[0x54]; } E58;
typedef struct { u32 *p; char pad[0x5DAC]; } E5DB0;
extern E58 D_0034BEC0[];
extern E5DB0 D_0040DB70[];
s32 D_00483F1C;
f32 D_004821DC;
f32 D_004821E0;

void func_002748A0(Obj *o) {
    s32 idx;
    if (o->f864 != 0) {
        if (o->f348 > o->f350) {
            o->fade = 1.0f;
            return;
        }
        o->fade = 0.0f;
        return;
    }
    if (o->f868 != 0) return;
    idx = o->idx;
    if (idx != -1 &&
        ((D_0034BEC0[idx].flags & 0x80) == 0 || D_00483F1C != 0 ||
         (D_0040DB70[idx].p != 0 && (D_0040DB70[idx].p[3] & 0x400000)))) {
        if (o->f40C == 0) goto sub;
    }
    o->fade += D_004821DC;
    if (idx != -1 && o->f348 < 2.0f) {
        o->fade = 0.0f;
        o->f868 = 1;
    }
    goto clamp;
sub:
    o->fade -= D_004821E0;
clamp:
    if (o->fade < 0.0f) o->fade = 0.0f;
    if (o->fade > 1.0f) o->fade = 1.0f;
}
