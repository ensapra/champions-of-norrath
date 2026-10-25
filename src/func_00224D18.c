class Obj {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void Fn(s32 x);
};
extern "C" s32 func_00224D18(Obj *o, u8 *p) {
    u8 *start = p;
    s32 v;
    p += 4;
    v = *(s32 *)(p - 4);
    *(s32 *)((char *)o + 0x178) = v;
    o->Fn(v);
    return p - start;
}
