typedef struct {
    s32 a;
    s32 b;
    s32 type;
    s32 pad;
    s32 e;
} Req177508;

typedef struct {
    char pad0[0x18];
    void *unk18;
} Obj177508;

void func_00177450(void *);
s32 func_001774D0(void *, s32, s32);
s32 func_00178A30(Obj177508 *, s32 *, Req177508 *);
void func_00179158(u32);
void *func_00179280(s32, s32);

s32 func_00177508(Obj177508 *o, s32 mode) {
    Req177508 req;
    s32 out;
    s32 w, h;
    s32 ret;
    void *p;

    req.a = 1;
    req.b = 1;
    req.type = 4;
    req.e = 1;
    switch (mode) {
    case 1:
        ret = func_00178A30(o, &out, &req);
        if (ret != 0) {
            return ret;
        }
        w = out + 0x10;
        req.type = 3;
        req.e = 2;
        ret = func_00178A30(o, &out, &req);
        if (ret != 0) {
            return ret;
        }
        h = out + 0x10;
        p = func_00179280(0x10, 0x10);
        if (p == NULL) {
            return 1;
        }
        ret = func_001774D0(p, w, h);
        if (ret != 0) {
            return ret;
        }
        o->unk18 = p;
        break;
    case 2:
        p = o->unk18;
        if (p == NULL) {
            return 2;
        }
        func_00177450(p);
        break;
    case 3:
        break;
    case 4:
        p = o->unk18;
        func_00179158((u32)p & 0x0FFFFFFF);
        o->unk18 = NULL;
        break;
    default:
        return 0;
    }
    return 0;
}
