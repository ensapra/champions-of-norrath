struct Vec3 { f32 x, y, z; Vec3() {} };
struct Thunk { s16 off; s16 pad; void (*fn)(void *, s32); };
struct VT { u8 pad[0xB8]; Thunk t; };
struct Inner { u8 pad[0x48]; VT *vt; };
struct Mid { u8 pad[0xC]; s32 flags; };
struct Node { u8 pad[0xC]; Inner *in; };
struct Flagged { u8 pad[0xC]; Mid *m; };
struct Item { u8 pad[0xA0]; u64 flags; };
struct Obj {
  u8 pad0[0x10];
  Vec3 pos;
  u8 pad1c[0x34];
  s32 f50;
  u8 pad54[4];
  s32 f58;
  s32 f5C;
  Node *f60;
  Flagged *f64;
};
extern "C" {
extern s32 D_004844A4;
void *func_001441B8(s32);
s32 func_00153FA8(Obj *);
void func_00236B68(Item *, Vec3, s16, s32, s32);
s32 func_00194390(void *, void *, void *);
void func_001437E8(Obj *);
void func_0023B2E8(Obj *);

static inline void attach(Obj *o, Item *item) {
  if (item) {
    func_00194390((u8 *)o + 0x60, item, item);
    item->flags |= 0x1000000;
  }
}

void func_0023B588(Obj *o) {
  if (o->f50 < D_004844A4 && o->f5C == 0) {
    Item *item = (Item *)func_001441B8(0x468);
    if (item) {
      func_00236B68(item, o->pos, func_00153FA8(o), 0, o->f58);
    }
    attach(o, item);
    o->f5C = 1;
  }
  if (o->f64 == 0 || (o->f64->m->flags & 8)) {
    if (o->f60) {
      Inner *in = o->f60->in;
      Thunk *t = &in->vt->t;
      t->fn((u8 *)in + t->off, 10);
    }
  }
  if (o->f5C && !o->f60) {
    func_001437E8(o);
  }
  func_0023B2E8(o);
}
}
