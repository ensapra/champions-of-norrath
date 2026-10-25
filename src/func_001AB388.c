struct V { f32 x, y, z; V() {} };
struct Obj { char pad[0x48]; virtual void m0(s32, ...); virtual void m1(s32, ...); };
struct Ent { char pad[0xAC]; f32 f0; f32 f1; char pad1[0x5570 - 0xB4]; Obj *obj; char pad2[0x5DB0 - 0x5574]; };
extern "C" {
s32 func_001353A8(s32, V *);
void func_0013F2D0(void *, V *, s32, s32, s32);
s32 func_001441B8(s32);
void func_00194930(s32, void *, s32, s32, s32);
void func_001A7698(Obj *);
void func_001D0900(s32);
extern Ent D_00408600[];
s32 D_00483E5C;

void func_001AB388(s32 idx, V *pp) {
    V pos = *pp;
    char buf[0x20];
    if (func_001353A8(idx, pp)) func_001D0900(1);
    Obj *o = D_00408600[idx].obj;
    if (o) o->m0(3);
    s32 t = func_001441B8(0x580);
    if (t) {
        func_0013F2D0(buf + 0x10, &pos, 0x60, 0x18, 0);
        D_00483E5C = D_00483E5C * 0x19660D + 0x3C6EF35F;
        func_00194930(t, buf + 0x10, D_00483E5C >> 16, idx, 0);
    }
    D_00408600[idx].f0 = D_00408600[idx].f1 * 0.5f;
    func_001A7698(D_00408600[idx].obj);
}
}
