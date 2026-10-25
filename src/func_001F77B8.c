struct Vec3 { f32 x, y, z; Vec3() {} Vec3(f32 a, f32 b, f32 c) { x = a; y = b; z = c; } };
class Obj {
public:
    char pad[0x48];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void SetState(s32);
};
extern "C" {
void func_0010D428(void *, s32);
s32 func_0010EBF8(void *, s32);
s32 func_0010A428(void *, s32);
void func_00111830(void *, f32);
void func_00111490(void *, f32);
void func_0010FC20(void *, Vec3);
s32 func_00112E08(void *);
s32 func_00113128(void *);
s32 func_00143878(void *);
extern volatile f32 D_00480ED8;
void func_001F77B8(Obj *o) {
    char *t = (char *)o;
    func_0010D428(t, *(s32 *)(*(char **)(t + 0x24) + 0xC));
    if (func_0010EBF8(t, *(s32 *)(*(char **)(t + 0x24) + 0xC)) == 0) {
        func_0010A428(t, 0x258);
        func_00111830(t, 1.0f);
        func_00111490(t, D_00480ED8);
        func_0010FC20(t, Vec3(0.0f, 0.0f, 0.0f));
        switch (*(s16 *)(t + 0x23C)) {
        case 0:
            if (*(s32 *)(t + 0x100) < *(s32 *)(t + 0x328)) {
                o->SetState(1);
            }
            break;
        case 1:
            if (*(s32 *)(t + 0x100) < *(s32 *)(t + 0x328)) {
                o->SetState(0);
            } else {
                func_00113128(t);
            }
            break;
        case 5:
            if (func_00112E08(t)) {
                o->SetState(3);
            }
            break;
        case 10:
            if (*(u16 *)(t + 0x126) & 0x80) func_00143878(t);
            break;
        }
    }
}
}
