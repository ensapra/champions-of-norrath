typedef struct Rec18 Rec18;
typedef struct { s32 a, b, f8; void (*cb)(Rec18 *); } Sub18;
struct Rec18 { s32 a; s32 id; s32 b, c; Sub18 sub; };
extern Rec18 D_010C2BA8[];
void func_0011AD68(s32);
void func_00118340(s32 n) {
    if (D_010C2BA8[n].sub.cb != 0)
        D_010C2BA8[n].sub.cb(&D_010C2BA8[n]);
    if (D_010C2BA8[n].id >= 0) {
        func_0011AD68(D_010C2BA8[n].id);
        D_010C2BA8[n].id = -1;
    }
    D_010C2BA8[n].sub.f8 = 0;
}
