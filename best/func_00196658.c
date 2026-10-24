void func_0019545C(void *);
void func_0019548C(void *);
void func_001954BC(void);
void func_0019550C(void);
void func_00196120(void *a, s32 b, s32 c) {
    if (b != 0 || c != 0) {
        if (c != 0) {
            if (c > 0) func_0019550C();
            else func_001954BC();
        }
        if (b != 0) {
            if (b > 0) func_0019548C(a);
            else func_0019545C(a);
        }
    }
}

typedef struct { s32 p0; s32 f4; s32 f8; } G;
extern G D_00364290;
extern u8 D_004CECB8[], D_004CED70[];
void func_001A1568(void *, s32, void *);
void func_001966E8(void *, s32);
void func_00195D10(void *);
void func_00196658(u8 *o, s32 b) {
    if (o == 0) func_001A1568(D_004CECB8, 0x6F4, D_004CED70);
    func_001966E8(o, b);
    if (D_00364290.f8 == *(s32 *)(o + 0x48)) func_00195D10(o);
    *(s32 *)(o + 0x4C) = 0;
    D_00364290.f8 = -1;
    D_00364290.f4 &= ~1;
}
