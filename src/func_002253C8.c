typedef struct { f32 x, y, z; } V3;
extern "C" void func_0021F1A8(void *);
class C148 {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void Set(V3 v);
};
struct Obj { char pad[0x10]; V3 pos; char pad2[0xF8 - 0x1C]; C148 *f148; };
extern "C" void func_002253C8(Obj *o) {
    if (o->f148) {
        o->f148->Set(o->pos);
    }
    func_0021F1A8(o);
}
