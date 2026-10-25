struct Vec3 { f32 x, y, z; Vec3() {} };
typedef struct { s32 pad; s32 (*fn)(void); } VT;
struct Obj {
    char pad0[0xC]; s32 flags;
    Vec3 pos;
    char pad1C[0x1C]; u16 f38;
    char pad3A[0xE]; VT *vt;
    char pad4C[0x374]; s32 state;
};
extern "C" {
s32 func_002FD2E0(s32, s32);
s32 func_0030E7C8(void);
s32 D_00484F54;
Obj **D_00484F9C;

s32 func_001CAA40(s32 idx, Vec3 *pos, u16 *out2, s32 *a, s32 *b, s32 *c) {
    Obj *o = D_00484F9C[idx];
    s32 t;
    if (o == NULL) return -1;
    t = o->vt->fn();
    if (func_002FD2E0(t, func_0030E7C8())) {
        switch (o->state) {
        case 0:
            *a = 0xB6; *b = 0x2F; *c = 0x3A;
            break;
        case 1:
            *a = 0; *b = 0xBF; *c = 0;
            break;
        case 2:
            *a = 0xB4; *b = 0xB2; *c = 0;
            break;
        case 3:
            *a = 0x1D; *b = 0x20; *c = 0xA1;
            break;
        }
    } else if (D_00484F54 != 0) {
        if (o->flags & 0x1000000) {
            *a = 0; *b = 0x40; *c = 0;
        } else {
            *a = 0x40; *b = 0; *c = 0;
        }
    } else {
        return 0;
    }
    *pos = o->pos;
    *out2 = o->f38;
    return 1;
}
}
