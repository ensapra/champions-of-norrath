class Obj {
public:
    char pad0[0x10];
    f32 pos[3];
    char pad1[0x48 - 0x1C];
    virtual void v1();
    virtual void Set(f32 a, s32 b, s32 c);
};

typedef struct {
    char pad[0x5570];
    Obj *obj;
    char pad2[0x5DB0 - 0x5574];
} Ent;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} Arg1;

typedef struct {
    char pad[0x10];
    f32 pos[3];
} Pos;

extern "C" {
extern Ent D_00408600[];
extern s32 D_0042A3E8[];
s32 D_00484F44;
void func_00138758(void *, s32, s32 *);
void func_00138900(void *, s32);
Pos *func_00143A58(void *);
s16 func_0015A198(f32, f32);

s32 func_00138A78(void *arg0, Arg1 *arg1)
{
    char buf[0xA0];
    s32 n;
    f32 v[3];
    Pos *p;
    s32 i;
    s32 *id;

    func_00138758(arg0, arg1->unk4, &n);
    func_00138900(buf, n);
    p = func_00143A58(buf);
    id = D_0042A3E8;
    for (i = 0; i < D_00484F44; i++, id++) {
        Obj *o = D_00408600[*id].obj;
        f32 dx = o->pos[0] - p->pos[0];
        f32 dy = o->pos[1] - p->pos[1];
        f32 dz = o->pos[2] - p->pos[2];
        if (dx * dx + dy * dy + dz * dz < (f32)arg1->unk8) {
            v[0] = dx;
            v[1] = o->pos[1] - p->pos[1];
            v[2] = o->pos[2] - p->pos[2];
            o->Set((f32)arg1->unkC, 0, 0);
            *(f32 *)((char *)D_00408600[*id].obj + 0x2F4) = (f32)arg1->unk10;
            *(s16 *)((char *)D_00408600[*id].obj + 0x2EC) = func_0015A198(v[1], v[0]);
        }
    }
    return 0;
}
}
