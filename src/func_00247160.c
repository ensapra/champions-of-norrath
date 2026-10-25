typedef struct { char pad[0x4]; s32 (*fn)(void); } VT;
typedef struct { char pad0[0xC]; u32 flags; char pad1[0x38]; VT *vt; char pad2[0x318 - 0x4C]; s16 h; char pad3[0x3CC - 0x31A]; s8 c; } O;
s32 func_0010B4A8(void);
s32 func_002FD2E0(s32, s32);
s32 func_00316358(void);
s32 func_00247160(O *a0, O *a1) {
    s32 result = 0;
    s32 r = func_0010B4A8();
    if (r) result = r + 1;
    if (a1 != 0) {
        if (result == 0) {
            s32 x = a1->vt->fn();
            if (func_002FD2E0(x, func_00316358()) != 0) {
                if (!(a1->flags & 8)) {
                    if (a0->h == 0) {
                        if (a0->c == 2 && a1->c == 1) {
                            result = 1;
                        } else {
                            s32 c = (s8)(u8)a0->c;
                            if (c == 1) {
                                if (a1->c == 2) result = c;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
