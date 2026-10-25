typedef struct { s32 a, b, c; } V12;
typedef struct { char q0[0xC]; s32 f0c; s32 f10; s32 f14; } P24;
#define FLD(o, T, off) (*(T *)((char *)(o) + (off)))
extern char D_004741E0[], D_004741F0[], D_00474200[];
s32 func_00165DC0(char *, char *);
s32 func_00109808(void *, s32, s32, s32);
void func_0016C060(s32, s32, s32, s32, s32, s32, s32, s32);
void func_001DC2C0(void *, s32, void *, V12 *, s16, s32, void *, s32, f32, f32, s32, s32);

void func_002468A0(void *o) {
    s32 h, i;
    V12 v;
    if (FLD(o, s32, 0x3C0) != 0) {
        i = func_00165DC0(D_004741E0, D_004741F0);
        v = FLD(o, V12, 0x10);
        func_001DC2C0((char *)o + 0x408, i, (char *)o + 0x3C8, &v, FLD(o, s16, 0x38), FLD(o, P24 *, 0x24)->f0c, (char *)o + 0x120, FLD(o, s16, 0x23C) == 6, 0.5f, 1.0f, 0, 0);
    }
    h = func_00109808(o, FLD(o, P24 *, 0x24)->f0c, FLD(o, P24 *, 0x24)->f14, 0);
    if (FLD(o, s32, 0x3C0) != 0) {
        i = func_00165DC0(D_004741E0, D_004741F0);
        func_0016C060(i, func_00165DC0(D_004741E0, D_00474200), 0, FLD(o, P24 *, 0x24)->f0c, h, -1, -1, 0);
    }
}
