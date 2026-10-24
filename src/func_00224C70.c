extern u8 D_0044EC40[];
extern u8 D_0044ED78[];
s32 D_004844A0;
void func_0017D318(s32, s32);
void func_00164050(void *, s32);
void func_00141658(void *, s32);
void func_001447D8(void *);

typedef struct {
    u8 p0[0x48];
    void *vt;
    u8 p1[0x4C];
    u8 f98[0xF4];
    s32 f18C;
} Obj;

void func_00224C70(Obj *o, s32 flag) {
    o->vt = D_0044EC40;
    func_0017D318(D_004844A0, o->f18C);
    o->vt = D_0044ED78;
    func_00164050(o->f98, 2);
    func_00141658(o, 0);
    if (flag & 1) {
        func_001447D8(o);
    }
}
