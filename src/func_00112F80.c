struct V3 { f32 x, y, z; };
struct Ent { char pad[0x10]; V3 pos; };
struct Lnk { char pad[0xC]; Ent *ent; };
struct Obj { char pad[0x240]; Lnk *lnk; };
extern "C" {
s32 func_0010A510(Obj *, V3, s16, s16);
Ent *func_0010AAC0(Obj *, f32, f32, s16, s16);
void func_001CE218(Ent *, Obj *, s32, s32, s32, s32, s32, s32, f32, f32);

void func_00112F80(Obj *obj, s16 a, s16 b, s32 x, s32 y, s32 c, s32 d, s32 e, f32 fx, f32 fy) {
    Ent *ent;
    if (obj->lnk != NULL && func_0010A510(obj, obj->lnk->ent->pos, a, b)) {
        ent = obj->lnk->ent;
    } else {
        ent = func_0010AAC0(obj, fx, fy, a, b);
    }
    if (ent != NULL) {
        func_001CE218(ent, obj, c, 0, 0, d, e, 0, x, y);
    }
}
}
