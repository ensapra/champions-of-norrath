f32 func_0015A070(s32);
f32 func_0015A100(s32);
s32 func_0017D348(s32, s32, s32);
void func_00143878(void *);
extern s32 D_004844A0;
extern f32 D_00481594;
typedef struct {
    char pad0[0xC];
    s32 flags;
    f32 x;
    f32 y;
    char pad18[0x38 - 0x18];
    s16 angle;
    char pad3A[0x4C - 0x3A];
    s16 snd;
    char pad4E[2];
    f32 speed;
    s32 timer;
    s16 h;
} Obj215BE8;
void func_00215BE8(Obj215BE8 *o) {
    s32 *p;
    if (o->timer >= 0x79)
        func_0017D348(D_004844A0, o->snd, 0);
    p = &o->timer;
    if ((*p)++ >= 0x97) {
        func_00143878(o);
        o->flags |= 2;
        return;
    }
    o->x -= func_0015A070(o->angle + 0x4000) * o->speed;
    o->y -= func_0015A100(o->angle + 0x4000) * o->speed;
    o->h -= o->speed * 200.0f;
    o->speed += D_00481594;
}
