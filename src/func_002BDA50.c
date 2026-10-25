class Obj {
public:
    char pad[0x60];
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual int Get(int i, ...);
};
extern "C" {
extern float D_00482F78, D_00482F7C, D_00482F80;
extern char D_004798E0[], D_004798F8[];
int func_001671F8(char *);
void func_00190E20(int, int, float, float, float, float, float, float, float, float);

static inline float R(float v) {
    return (float)(int)(v >= 0.0f ? v + 0.5f : v - 0.5f);
}

void func_002BDA50(Obj *o, int a1, int a2) {
    int x = o->Get(0);
    int y = o->Get(1, a2);
    int z = o->Get(2, a2);
    if (y != 0) {
        int s = func_001671F8(D_004798E0);
        float fx = (float)x;
        float r1 = R(fx + fx * D_00482F78);
        float fz = (float)z;
        float fy = (float)y;
        float r2 = R(fz + fz * D_00482F7C);
        func_00190E20(a1, s, fx, r1, fy, fz, r2, 0.0f, 0.0f, 0.0f);
    } else {
        int s = func_001671F8(D_004798F8);
        float fx = (float)x;
        float r1 = R(fx + fx * D_00482F80);
        func_00190E20(a1, s, fx, r1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    }
}
}
