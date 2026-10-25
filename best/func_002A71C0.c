extern f32 D_00482AF4, D_00482AF8, D_00482AFC;
extern u8 D_00408600[];
struct V12 { s32 a, b, c; };
struct Sub { char pad[0x8C]; s16 h8c, h8e, h90, h92, h94, h96, h98; char pad2[0x3C0 - 0x9A]; s32 idx; };
class Base {
public:
    char pad[0x14];
    virtual void Fn(s32);
};
class Obj : public Base {
public:
    Sub *sub;
    f32 f1c;
    f32 f20;
    void func_002A71C0(V12 v);
};
void Obj::func_002A71C0(V12 v) {
    Sub *s = sub;
    f1c += D_00482AF4;
    u8 *base = D_00408600 + s->idx * 0x5DB0;
    f32 *p = (f32 *)(base + 0xA0);
    f32 hi = p[4], lo = p[3];
    if (lo + 1.0f <= hi) p[3] = lo + f20;
    f32 y = f1c;
    if (y < D_00482AF8) {
        s->h92 = 0x3f; s->h8c = 0x68; s->h8e = 0x6b; s->h90 = 0x40;
        s->h94 = 0x68; s->h96 = 0x6b; s->h98 = 0x40;
    }
    if (D_00482AFC < y && this) Fn(3);
}
