struct V3 { f32 x, y, z; V3() {} V3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
inline V3 operator-(const V3 &a, const V3 &b) { return V3(a.x - b.x, a.y - b.y, a.z - b.z); }
struct Ent { char pad[16]; V3 pos; };
struct Actor { char pad0[16]; V3 pos; char pad1[0x38 - 0x1C]; s16 ang; char pad2[0x37C - 0x3A]; s32 flag; };
struct Slot { char pad[0x5570]; Ent *tgt; char pad2[0x5DB0 - 0x5574]; };
extern "C" {
extern char D_00483810[], D_00460850[];
extern Slot D_00408600[];
s32 D_0048453C;
s32 func_00140F60(void *, char *, s32);
s32 func_001D1158(void);
void func_001B3B20(s32, s32, s32);
f32 func_0015A070(s16);
f32 func_0015A100(s16);
s32 func_001D38F0(void);
s32 func_00143A80(void *, char *, s32);
void func_001D3E88(s32);
void func_00111DF0(Actor *a, s32 n) {
    if (a->flag == 0) return;
    if (D_00408600[n].tgt == 0) return;
    if (func_00140F60(a, D_00483810, 0) != 0 && func_001D1158() != 0) {
        if (func_001353A8(n) != 0) func_001B3B20(n, 0, 1);
        return;
    }
    V3 d = D_00408600[n].tgt->pos - a->pos;
    V3 v = V3(func_0015A070(a->ang), func_0015A100(a->ang), 0.0f);
    V3 *vp = &v;
    if (d.x * vp->x + d.y * vp->y > 0.0f && func_001D38F0() == 0) {
        D_0048453C = n;
        func_001D3E88(func_00143A80(a, D_00460850, 0));
    }
}
}
