typedef struct {
    char pad0[0x98];
    s32 unk98;
    char pad9C[0x924 - 0x9C];
    s32 unk924;
    s32 unk928;
    char pad92C[0x984 - 0x92C];
    s32 unk984;
    s32 unk988;
    char pad98C[0x9AC - 0x98C];
    s32 unk9AC;
    char pad9B0[0x9C0 - 0x9B0];
    s64 unk9C0;
    s64 unk9C8;
} Obj154A6C;

void func_0011B9E0(s32);
s32 func_0014BA30(s64 *, s64 *);
void func_00154798(Obj154A6C *);
s32 func_0016FA70(s32);
extern char func_001C8098[];

s32 func_00154A6C(Obj154A6C *o, Obj154A6C *a, Obj154A6C *b) {
    s32 ret;

    ret = (*(s32 (**)(void))(func_001C8098 + 0xDB8))();
    if (a->unk984 != b->unk984 && a->unk984 != 0) {
        if (o->unk924 != 0) {
            func_0011B9E0(o->unk924);
        }
        ret = 1;
        o->unk924 = func_0016FA70(a->unk984);
        o->unk98 = 2;
    }
    if (a->unk988 != b->unk988 && a->unk988 != 0) {
        if (o->unk928 != 0) {
            func_0011B9E0(o->unk928);
        }
        ret = 1;
        o->unk928 = func_0016FA70(a->unk988);
        func_00154798(o);
        o->unk98 = 2;
    }
    if (a->unk9AC != b->unk9AC) {
        o->unk9AC = a->unk9AC;
        ret = 1;
        func_00154798(o);
        o->unk98 = 2;
    }
    if (func_0014BA30(&a->unk9C0, &b->unk9C0) == 0) {
        o->unk98 = 2;
        ret = 1;
        o->unk9C0 = a->unk9C0;
        o->unk9C8 = a->unk9C8;
    }
    return ret;
}
