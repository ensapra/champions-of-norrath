extern "C" {
typedef struct { f32 x, y, z; } V3;
typedef struct { s16 off; s16 pad; void (*fn)(void *, s32); } VE;
extern void func_00153FD0(void *, V3, s32, s32);
extern void func_00143830(void *);
extern s32 func_0013EF30(V3 *, V3 *, void *, s32);
extern f32 func_0015A070(s32);
extern f32 func_0015A100(s32);
extern s32 func_001828D8(s32, s32, s32, s32, s32, s32, s32, f32);
extern void func_00183DD0(s32, V3);
extern void *D_0044A030;
f32 D_0048160C;
s32 D_004844A4;
void func_00219B40(u8 *a0, V3 *a1, s32 a2, u8 *a3, f32 f) {
    V3 lo, hi;
    u8 *list[32];
    s32 best[2];
    f32 far_d, near_d, dist, dot, f20;
    s32 i, n;
    V3 d, fw;
    u8 *e;
    far_d = D_0048160C;
    near_d = far_d;
    n = 0;
    func_00153FD0(a0, *a1, 0, 0);
    *(void **)(a0 + 0x48) = D_0044A030;
    *(u8 *)(a0 + 0x68 + 9) = 0;
    *(u8 *)(a0 + 0x68 + 8) = 0;
    best[0] = -1;
    best[1] = -1;
    f = f * 60.0f;
    *(s32 *)(a0 + 0xC) |= 0x4001;
    *(s32 *)(a0 + 0x58) = (s32)((f32)D_004844A4 + f);
    func_00143830(a0);
    lo.x = *(f32 *)(a0 + 0x10) - 360.0f;
    lo.y = *(f32 *)(a0 + 0x14) - 360.0f;
    lo.z = *(f32 *)(a0 + 0x18) - 360.0f;
    hi.x = *(f32 *)(a0 + 0x10) + 360.0f;
    hi.y = *(f32 *)(a0 + 0x14) + 360.0f;
    hi.z = *(f32 *)(a0 + 0x18) + 360.0f;
    func_0013EF30(&lo, &hi, list, 0x20);
    if (list[0] != 0) {
        i = 0;
        do {
            e = list[i];
            if (e != a0 && e != a3) {
                s32 fl = *(s32 *)(e + 0xC);
                if (fl & 0x20) {
                    f32 dx = *(f32 *)(e + 0x10) - *(f32 *)(a0 + 0x10);
                    f32 dy = *(f32 *)(e + 0x14) - *(f32 *)(a0 + 0x14);
                    f32 dz = *(f32 *)(e + 0x18) - *(f32 *)(a0 + 0x18);
                    dist = __builtin_sqrtf(dx * dx + dy * dy + dz * dz);
                    if ((dist < far_d || dist < near_d) && !(fl & 8) && !(fl & 0x40) && !(0.0f < (f32)*(s32 *)(e + 0x39C))) {
                        f20 = func_0015A070(*(s16 *)(a3 + 0x38));
                        fw.x = f20;
                        fw.y = func_0015A100(*(s16 *)(a3 + 0x38));
                        fw.z = 0.0f;
                        d.x = *(f32 *)(e + 0x10) - *(f32 *)(a3 + 0x10);
                        d.z = 0.0f;
                        d.y = *(f32 *)(e + 0x14) - *(f32 *)(a3 + 0x14);
                        dot = fw.x * d.x + fw.y * d.y;
                        if (0.0f < dot) {
                            far_d = dist;
                            best[0] = n;
                        } else {
                            near_d = dist;
                            best[1] = n;
                        }
                    }
                }
            }
            i++;
            n++;
        } while (list[i] != 0);
    }
    if (best[0] != -1 || best[1] != best[0]) {
        u8 *t;
        V3 cp;
        *(u8 **)(a0 + 0xB0) = list[best[0] != -1 ? best[0] : best[1]];
        t = *(u8 **)(a0 + 0xB0);
        *(s32 *)(a0 + 0x54) = D_004844A4;
        *(s32 *)(t + 0x39C) = (s32)f;
        *(s32 *)(t + 0xFC) = D_004844A4;
        *(u16 *)(a0 + 0x38) = *(u16 *)(t + 0x38);
        *(V3 *)(a0 + 0x10) = *(V3 *)(t + 0x10);
        i = func_001828D8(5, 0x1C6, 4, 0x80, 0x80, 0x80, 0x80, 2.0f);
        *(s32 *)(a0 + 0xB8) = i;
        func_00183DD0(i, *(V3 *)(a0 + 0x10));
        *(s32 *)(a0 + 0xBC) = 1;
    } else {
        *(s32 *)(a0 + 0xB0) = 0;
        if (a0) {
            VE *v = (VE *)(*(u8 **)(a0 + 0x48) + 8);
            v->fn(a0 + v->off, 3);
        }
    }
}
}
