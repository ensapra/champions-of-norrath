extern "C" {
struct V { f32 x, y, z; };
extern char D_00438EB8[], D_004506B0[], D_00477798[], D_004777C8[], D_004777D8[];
extern char D_004860E0[], D_004860E8[], D_004860F0[], D_004860F8[];
extern f32 D_004825BC, D_004825C0;
void func_001411F0(void *, void *, void *);
s32 func_00140F60(void *, void *, s32);
void func_00143830(void *);
s32 func_00143A80(void *, void *, s32);
void *func_001441B8(s32);
f32 func_0015A070(s32);
f32 func_0015A100(s32);
void func_001637A8(void *);
void func_00163830(void *, s32, s32);
s32 func_00165DC0(void *, void *);
void func_00194390(void *, void *, void *);
void func_00216600(void *, void *, s32, s32);

void func_0028B858(char *t, V *p, s16 h) {
    V sp0, sp10, sp20, sp30;
    char *q = t + 0x5C;
    char *r = t + 0xF8;
    char *s = D_004777C8;
    f32 c30 = 30.0f, c8 = 8.0f;
    sp0 = *p;
    func_001411F0(t, &sp0, D_00438EB8);
    *(char **)(t + 0x48) = D_004506B0;
    q[5] = 4;
    *(s32 *)r = 0;
    *(u8 *)(t + 0x28) = 0x48;
    *(s16 *)(t + 0x38) = h;
    *(s32 *)(t + 0x1C) = 0;
    *(s32 *)(t + 0xC) = 0;
    *(s32 *)(t + 0x58) = 0;
    *(u8 *)(t + 0x55) = 0;
    *(u8 *)(t + 0x54) = 0;
    *(u8 *)(t + 0x4E) = 0;
    if (func_00143A80(t, s, 0))
        *(f32 *)(t + 0xF0) = (f32)func_00140F60(t, s, 0) * D_004825BC;
    else
        *(f32 *)(t + 0xF0) = D_004825C0;
    s = D_004860E0;
    if (func_00143A80(t, s, 0))
        *(s32 *)(t + 0xF4) = func_00140F60(t, s, 0) * 60;
    else
        *(s32 *)(t + 0xF4) = 0;
    *(s32 *)(t + 0x50) = func_00143A80(t, D_004860E8, 0);
    s = D_004860F0;
    if (func_00143A80(t, s, 0))
        *(s8 *)(t + 0x56) = func_00140F60(t, s, 0);
    else
        *(s8 *)(t + 0x56) = 0;
    func_00143830(t);
    func_001637A8(q);
    *(u8 *)(t + 0x57) = 0;
    if (func_00140F60(t, D_004860F8, 0))
        *(s32 *)(t + 0xF4) = 0;
    else
        func_00163830(q, func_00165DC0(D_00477798, D_004777D8), 1);
    if (*(s8 *)(t + 0x56) == 0) {
        s32 j, k;
        sp10.x = func_0015A070(*(s16 *)(t + 0x38));
        sp10.y = func_0015A100(*(s16 *)(t + 0x38));
        sp10.z = 0.0f;
        sp20.x = func_0015A070(*(s16 *)(t + 0x38) + 0x4000);
        sp20.y = func_0015A100(*(s16 *)(t + 0x38) + 0x4000);
        sp20.z = 0.0f;
        for (j = -3; j < 5; j++) {
            for (k = -1; k < 2; k++) {
                if ((u32)(j + 2) >= 6 || k != 0) {
                    char *o = (char *)func_001441B8(0x4C);
                    if (o) {
                        sp30 = *(V *)(t + 0x10);
                        func_00216600(o, &sp30, *(s16 *)(t + 0x38), 0);
                    }
                    if (o) {
                        f32 f4 = (f32)k * 22.5f;
                        f32 f3 = (f32)j * 22.5f;
                        *(s32 *)(o + 0xC) |= 0x4000;
                        *(f32 *)(o + 0x10) += sp10.x * f3 + sp20.x * f4;
                        *(f32 *)(o + 0x14) += sp10.y * f3 + sp20.y * f4;
                        if (j < 0) *(f32 *)(o + 0x1C) = c30 + c8;
                        else *(f32 *)(o + 0x1C) = c30;
                        func_00194390(r, o, o);
                    }
                }
            }
        }
    }
}
}
