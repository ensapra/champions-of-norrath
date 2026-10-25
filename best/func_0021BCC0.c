extern "C" {
typedef struct { f32 x, y, z; } V3;
struct Obj21BCC0 {
    char pad0[0xC];
    s32 flags;
    V3 pos;
    char pad1C[0x48 - 0x1C];
    void *vt;
    s16 snd;
    s16 snd2;
};
void func_001411F0(Obj21BCC0 *, V3);
void func_001437E8(Obj21BCC0 *);
s32 func_00143A80(Obj21BCC0 *, char *, s32);
s16 func_00175440(s32, V3);
void func_0017D348(s32, s32, s32);
s16 func_0017D3D0(s32, s32);
extern char D_0044D0A8[];
extern s32 D_004844A0;
extern char D_00485358[];

void func_0021BCC0(Obj21BCC0 *o, V3 pos) {
    func_001411F0(o, pos);
    o->vt = D_0044D0A8;
    o->flags |= 0x100003;
    if (func_00143A80(o, D_00485358, 0) != 0)
        o->flags &= 0xFFEFFFFF;
    o->snd = func_00175440(D_004844A0, o->pos);
    func_0017D348(D_004844A0, o->snd, 1);
    o->snd2 = func_0017D3D0(D_004844A0, o->snd);
    if (o->snd < 0)
        func_001437E8(o);
}
}
