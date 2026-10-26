typedef struct { f32 x, y, z; } V3;
extern f32 D_00482BF0, D_00482BF4, D_00482BF8, D_00482BFC;
s32 D_00483E5C;
extern u8 D_008D75E0[], D_008D7630[], D_008D7680[];
void func_00157668(void *, V3 *, s32, s32);
s32 func_0015E948(void *);
void func_0016C238(s32, void *, V3 *, s32, s32, V3 *, V3 *, s32, f32);
s32 func_0016CD50(s32);
void func_00180338(s32);
void func_00180380(s32);
void func_001803C0(s32, void *);
void func_00180DA0(void *, V3 *, V3 *, s32, f32, s32);

typedef struct { s32 (*fn)(void *, ...); } X;
#define VC(o, vt, slot) (*(s32 (**)())(*(u8 **)((u8 *)(o) + (vt)) + (slot) + 4))
#define VO(o, vt, slot) ((u8 *)(o) + *(s16 *)(*(u8 **)((u8 *)(o) + (vt)) + (slot)))
#define F(o, off) (*(f32 *)((u8 *)(o) + (off)))
#define I(o, off) (*(s32 *)((u8 *)(o) + (off)))
#define H(o, off) (*(s16 *)((u8 *)(o) + (off)))

void func_002AC6E8(u8 *t, V3 pos) {
    V3 v10, v20, v30, v40, v80, v90, vA0, vB0, vC0, vD0, vE0, vF0, v100;
    u8 buf40[64];
    s32 i, n, r;
    f32 f2;
    u8 *o;

    F(t, 0x18) = F(t, 0x18) + D_00482BF0;
    if (I(t, 0x1C) == 0) {
        o = *(u8 **)(t + 0xC);
        v80 = *(V3 *)(o + 0x10);
        func_00157668(buf40, &v80, H(o, 0x38), 6);
        func_00180338(I(t, 0x24));
        func_001803C0(I(t, 0x24), buf40);
        for (i = 6; i >= 0; i--) {
            v10.x = ((f32)func_0015E948(t) * 0.0000152587890625f - 0.5f) * F(*(u8 **)(t + 0xC), 0x1C) * D_00482BF4;
            v10.y = ((f32)func_0015E948(t) * 0.0000152587890625f - 0.5f) * F(*(u8 **)(t + 0xC), 0x1C) * D_00482BF4;
            v10.z = F(*(u8 **)(t + 0xC), 0x20) + 12.0f;
            v90.x = 0.0f;
            v90.y = 0.0f;
            v90.z = -76.0f;
            v20 = v90;
            func_00180DA0(D_008D7630, &v10, &v20, 0, 0.0f, 0);
        }
        func_00180380(I(t, 0x24));
        f2 = F(t, 0x18);
        if (D_00482BF8 < f2) {
            D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
            o = *(u8 **)(t + 8);
            r = ((s32 (*)(void *, s32, s32, s32, s32, void *))VC(o, 0x60, 0x58))(VO(o, 0x60, 0x58), 2, *(s8 *)t, 0, 0, o);
            if ((u32)D_00483E5C >> 16) {}
            if (((u32)D_00483E5C >> 16) % 100 + 1 < r) {
                o = *(u8 **)(t + 0xC);
                H(o, 0x31A) = I(t, 0x20) * 60;
                H(o, 0x8C) = 4;
                H(o, 0x8E) = 0x5C;
                H(o, 0x9A) = 0x51;
                I(t, 0x1C) = I(t, 0x1C) + 1;
                H(o, 0x94) = 4;
                H(o, 0x96) = 0x5C;
                H(o, 0x98) = 0;
                H(o, 0x90) = 0;
                H(o, 0x92) = 0x51;
                f2 = F(t, 0x18);
            } else {
                o = *(u8 **)(t + 0xC);
                v10.x = F(o, 0x10);
                v10.y = F(o, 0x14);
                v10.z = F(o, 0x18) + F(o, 0x20);
                for (n = 0; n < 100; n++) {
                    do {
                        vC0.x = (f32)func_0015E948(t) * 0.0000152587890625f * 2.0f - 1.0f;
                        vC0.y = (f32)func_0015E948(t) * 0.0000152587890625f * 2.0f - 1.0f;
                        vC0.z = (f32)func_0015E948(t) * 0.0000152587890625f * 2.0f - 1.0f;
                    } while (vC0.x * vC0.x + vC0.y * vC0.y + vC0.z * vC0.z > 1.0f);
                    vB0 = vC0;
                    vA0.x = vB0.x * 21.0f;
                    vA0.y = vB0.y * 21.0f;
                    vA0.z = vB0.z * 21.0f;
                    v20 = vA0;
                    func_00180DA0(D_008D7680, &v10, &v20, 0, 0.0f, 0);
                }
                o = *(u8 **)(t + 0x14);
                ((s32 (*)(void *, s32))VC(t, 0x14, 8))(VO(t, 0x14, 8), 3);
                return;
            }
        }
    } else if (I(t, 0x1C) == 1) {
        o = *(u8 **)(t + 0xC);
        n = func_0016CD50(((s32 (*)(void *))VC(o, 0x48, 0x80))(VO(o, 0x48, 0x80)));
        for (i = 0; i < 22; i++) {
            o = *(u8 **)(t + 0xC);
            r = ((s32 (*)(void *))VC(o, 0x48, 0x80))(VO(o, 0x48, 0x80));
            func_0015E948(t);
            vD0 = *(V3 *)(*(u8 **)(t + 0xC) + 0x10);
            func_0016C238(r, *(u8 **)(t + 0xC) + 0x120, &vD0, H(*(u8 **)(t + 0xC), 0x38), func_0015E948(t) % n, &v10, &v30, 0, 1.0f);
            do {
                vF0.x = (f32)func_0015E948(t) * 0.0000152587890625f * 2.0f - 1.0f;
                vF0.y = (f32)func_0015E948(t) * 0.0000152587890625f * 2.0f - 1.0f;
                vF0.z = (f32)func_0015E948(t) * 0.0000152587890625f * 2.0f - 1.0f;
            } while (vF0.x * vF0.x + vF0.y * vF0.y + vF0.z * vF0.z > 1.0f);
            vE0.x = 0.0f;
            vE0.y = 0.0f;
            vE0.z = 0.0f;
            v20 = vE0;
            func_00180DA0(D_008D75E0, &v10, &v20, 0, 0.0f, 0);
        }
        f2 = F(t, 0x18);
    } else {
        f2 = F(t, 0x18);
    }
    if ((f32)I(t, 0x20) < f2 - D_00482BFC) {
        if (t) ((s32 (*)(void *, s32))VC(t, 0x14, 8))(VO(t, 0x14, 8), 3);
    }
}
