extern "C" {
typedef struct { f32 x, y, z; } Vec3_2AE590;
typedef struct { f32 m[12]; } Mtx_2AE590;
typedef struct {
    char pad0[0x10];
    Vec3_2AE590 pos;
    char pad1c[0x38 - 0x1C];
    s16 ang;
    char pad3a[0x8C - 0x3A];
    s16 c[8];
} Model_2AE590;
void func_00157668(Mtx_2AE590 *m, Vec3_2AE590 pos, s16 ang);
void func_001803C0(s32 a, Mtx_2AE590 *m);
extern f32 D_00482C54;
}

class Base_2AE590 {
public:
    char pad0[0xC];
    Model_2AE590 *model;
    s32 unk10;
    virtual ~Base_2AE590();
};

class Obj_2AE590 : public Base_2AE590 {
public:
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    void func_002AE590(Vec3_2AE590 v);
};

void Obj_2AE590::func_002AE590(Vec3_2AE590 v)
{
    Mtx_2AE590 m;

    unk18 += D_00482C54;
    unk1C -= D_00482C54;
    if (unk20 < unk18) {
        delete this;
        return;
    }
    func_00157668(&m, model->pos, model->ang);
    func_001803C0(unk24, &m);
    model->c[4] = 0x15;
    model->c[5] = 0x1C;
    model->c[6] = 0x73;
    model->c[3] = 0x37;
    model->c[0] = 0x15;
    model->c[1] = 0x1C;
    model->c[2] = 0x73;
    model->c[7] = 0x37;
}
