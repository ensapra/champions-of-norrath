class Obj {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual int Call(short *a, int b);
};
extern "C" {
extern char D_004853C8[];
extern int func_00143A80(void *, void *, int);
extern Obj *func_00143A58(int);
void func_0021C7D0(void *arg0, short *arg1, int arg2) {
    Obj *o;
    *arg1 = 0;
    if (func_00143A80(arg0, D_004853C8, 0) != 0) {
        o = func_00143A58(func_00143A80(arg0, D_004853C8, 0));
        if (o != 0) o->Call(arg1, arg2);
    }
}
}
