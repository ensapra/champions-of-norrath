typedef struct { f32 x, y, z; } V3;
typedef struct { s16 off; s16 pad; s32 (*fn)(void *); } VE;
typedef struct { char pad[0x80]; VE e; } VT;
typedef struct { char pad[0x10]; V3 pos; char p2[0x10]; s32 *tbl; char p3[0x10]; s16 s38; } A;
extern s32 func_001441B8(s32, ...);
extern s32 func_00153FA8(void *);
extern void func_0016C238(s32, void *, V3 *, s32, s32, V3 *, V3 *, s32, f32);
extern s32 func_0016CD50(s32, void *, void *);
extern void func_00180DA0(void *, void *, void *, s32);
extern void func_001E5278(s32, V3 *, s32, s32, f32, f32, f32, s32, s32, s32, s32, s32, f32, f32, f32, f32);
extern char D_004E20D0[];
f32 D_0047FC6C;
void func_00112438(char *a, char *b, s32 n) {
    V3 p1, p2, p3, p4, d, q, w;
    s32 i, r1, r2, r3;
    VT *vt;
    if (b == 0) return;
    r1 = func_0016CD50(((s32 *)*(s32 *)(a + 0x24))[n * 2 + 1], b + 0x120, b + 0x10);
    vt = *(VT **)(b + 0x48);
    r2 = func_0016CD50(vt->e.fn(b + vt->e.off), 0, 0);
    i = 99;
    do {
        i--;
        {
            s32 m = func_00153FA8(a) % r1;
            p3 = *(V3 *)(a + 0x10);
            func_0016C238(((s32 *)*(s32 *)(a + 0x24))[n * 2 + 1], a + 0x120, &p3, *(s16 *)(a + 0x38), m, &p1, &p2, 0, 1.0f);
        }
        vt = *(VT **)(b + 0x48);
        r3 = vt->e.fn(b + vt->e.off);
        {
            s32 m = func_00153FA8(a) % r2;
            p4 = *(V3 *)(b + 0x10);
            func_0016C238(r3, b + 0x120, &p4, *(s16 *)(b + 0x38), m, &q, &w, 0, 1.0f);
        }
        d.x = q.x - p1.x;
        d.y = q.y - p1.y;
        d.z = q.z - p1.z;
        {
            f32 k = 1.0f / __builtin_sqrtf(d.x * d.x + d.y * d.y + d.z * d.z);
            d.x *= k; d.y *= k; d.z *= k;
        }
        d.x *= 30.0f; d.y *= 30.0f; d.z *= 30.0f;
        func_00180DA0(D_004E20D0, &q, &d, 0);
    } while (i >= 0);
    *(s16 *)(a + 0x92) = 0x40;
    *(s16 *)(a + 0x8C) = 0x8E;
    *(s16 *)(a + 0x8E) = 0x3A;
    *(s16 *)(a + 0x90) = 0x52;
    *(s16 *)(a + 0x96) = 0x3A;
    *(s16 *)(a + 0x98) = 0x52;
    r1 = func_001441B8(0xBC);
    if (r1) {
        V3 o, v;
        v.x = 0.0f; v.y = 0.0f; v.z = 44.0f;
        o.x = *(f32 *)(a + 0x10) + v.x;
        o.y = *(f32 *)(a + 0x14);
        o.z = *(f32 *)(a + 0x18) + v.z;
        func_001E5278(r1, &o, 0, 0, 255.0f, 103.0f, 115.0f, 0, 0, 0, 0, 0, 120.0f, 60.0f, 0.5f, D_0047FC6C);
    }
}
