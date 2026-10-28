class Obj {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13();
    virtual void Fn(int a);
};
extern "C" {
extern char D_004853C8[];
extern int func_00143A80(void *, void *, int);
extern void func_00140678(int, Obj *volatile *, int);
void func_0021C870(void *arg0, int arg1) {
    Obj *volatile items[16];
    Obj *volatile *it;
    Obj *o;
    if (func_00143A80(arg0, D_004853C8, 0) != 0) {
        func_00140678(func_00143A80(arg0, D_004853C8, 0), items, 0x10);
        it = items;
        if (*it != 0) {
            o = *it;
            do {
                it++;
                o->Fn(arg1);
            } while ((o = *it) != 0);
        }
    }
}
}
