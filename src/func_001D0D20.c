class Obj {
public:
    char pad[0x60];
    virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
    virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8();
    virtual void f9(); virtual void Update();
};
extern "C" {
extern Obj *D_0034B440[];
void func_001D0D20(void) {
    s32 i;
    for (i = 1; D_0034B440[i] != 0; i++) {
        D_0034B440[i]->Update();
    }
}
}
