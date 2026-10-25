extern "C" {
void func_00138758(s32, s32, s32 *);
void func_00138900(void *, s32);
}
class CObj {
public:
    char pad[0x48];
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void Notify(s32 i);
};
struct Flags { s32 a, b, c, d; };
struct Slot { u8 pad[0x5570]; Flags *f; u8 pad2[0x5DB0 - 0x5574]; };
extern "C" {
CObj *func_00143A58(void *);
extern Slot D_00408600[];
extern s32 D_00484538;
extern s32 D_0048453C;

s32 func_0013ABC0(s32 arg0, s32 *arg1)
{
    u8 buf[0xA0];
    s32 v;
    CObj *o;
    s32 i;

    func_00138758(arg0, arg1[1], &v);
    func_00138900(buf, v);
    o = func_00143A58(buf);
    if (o != 0) {
        if (D_0048453C != -1) {
            o->Notify(D_0048453C);
        }
        for (i = 0; i < D_00484538; i++) {
            if (i != D_0048453C && !(D_00408600[i].f->d & 8)) {
                o->Notify(i);
            }
        }
    }
    return 0;
}
}
