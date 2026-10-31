/* identical to func_0014EC94 (matched), with its names changed by decompdecomp */
/* identical to func_0017DD48 (matched), with its names changed by decompdecomp */

void func_00177810(f32, f32, f32, f32);
void func_00178348(s32);
void func_00159AE0(void *, void *, s32);

extern u8 D_0037EF00[48];
f32 D_004800C8;
f32 D_004800C4;
f32 D_004869D8;
s32 D_004844A0;

s32 GetInstType__C20VIEffectVolumeSpriteR7VIScene(void) {
    return 1;
}

void func_0017DC50(void) {
    s32 t = D_004844A0;
    if (t != 0) {
        func_00178348(t);
    }
}

void func_0017DC78(void) {
    D_004869D8 = 1800.0f;
    func_00177810(50.0f, D_004800C4, 80.0f, 1.0f);
}

void func_0017DCC0(void *arg0, s32 arg1) {
    f32 unk0, unk4, unk8;
    func_00159AE0(arg0, D_0037EF00, arg1);
    unk0 = ((f32*)arg0)[0];
    unk4 = ((f32*)arg0)[1];
    unk8 = ((f32*)arg0)[2];
    unk4 = (2.0f * unk4 / unk8) * 240.0f + 240.0f;
    unk0 = (unk0 * D_004800C8 / unk8) * 320.0f + 320.0f;
    ((f32*)arg0)[1] = unk4;
    ((f32*)arg0)[0] = unk0;
}
