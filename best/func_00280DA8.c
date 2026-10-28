typedef struct O O;
extern s32 func_0010D428(O *, void *);
extern s32 func_0010EBF8(O *, void *);
extern s32 func_0010A428(O *, s32);
extern s32 func_00111830(O *, f32);
extern void func_00111490(O *, f32);
extern s32 func_00112C68(O *, f32, s32);
extern void func_00113128(O *);
extern void func_00112A98(O *);
extern void func_001130B8(O *);
extern s32 func_00112E08(O *);
extern void func_00143878(O *);
extern s32 func_00153FA8(O *);
struct O {
    char p0[0xC]; s32 flags; f32 x, y, z, t; char p20[4]; struct { char p[0xC]; } *q; char p28[0x20];
    char p48[1];
};
void func_00280DA8(O *o) {
    s32 r;
    func_0010D428(o, *(void **)((char *)((void **)((char *)o + 0x24))[0] + 0xC));
    if (func_0010EBF8(o, *(void **)((char *)(*(void **)((char *)o + 0x24)) + 0xC))) return;
    if (!func_0010A428(o, 0x258)) return;
    r = func_00111830(o, 1.0f);
    func_00111490(o, 0.5f);
    switch (*(s16 *)((char *)o + 0x23C)) {
    case 0:
        if (!func_00112C68(o, 400.0f, 0x7FFF)) {
            if (*(s32 *)((char *)o + 0x100) >= *(s32 *)((char *)o + 0x328)) return;
        }
        break;
    default:
        break;
    }
}
