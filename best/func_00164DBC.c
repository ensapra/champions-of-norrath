typedef struct { u64 lo, hi; } Q;
typedef struct { s32 id; s64 v; } Msg;
typedef struct VT { char pad[0x110]; void (*f110)(void*); } VT;
typedef struct A {
 char p0[0x4C]; VT *vt; char p1[0x98-0x50]; s32 f98; char p2[0x538-0x9C]; s32 f538; char p3[0x910-0x53C]; s32 f910;
 char p4[0x1230-0x914]; Q q1230; Q q1240; Q q1250; s32 f1260; char p6[0x1270-0x1264]; Q q1270; s32 f1280;
} A;
extern s32 func_0014BA30(void*, void*);
extern void func_0014CBF4(s32, void*, s32, s32);
extern void func_00165508(void*);
extern char func_001C8098[];
s32 func_00164DBC(A *a, A *b, A *c) {
 char buf[0x800];
 s32 changed;
 Q *p = &b->q1230;
 changed = (*(s32 (**)(void*))(func_001C8098+0xdb8))(a);
 if (func_0014BA30(p, &c->q1230) == 0) {
  a->q1240 = a->q1230;
  a->q1230 = *p;
  if (a->f538) {
   a->vt->f110(a);
   return 2;
  }
  a->q1250 = *p;
  a->f98 = 2;
  changed = 1;
 }
 p = &b->q1270;
 if (func_0014BA30(p, &c->q1270) == 0) {
  Msg *m = (Msg*)buf;
  a->q1270 = *p;
  m->id = 0x39;
  m->v = (s32)&a->q1270;
  func_0014CBF4(a->f910, m, 1, 0);
  changed = 1;
 }
 if (b->f1260 != c->f1260) {
  Msg *m = (Msg*)(buf + 0x400);
  a->f1260 = b->f1260;
  func_00165508(a);
  changed = 1;
  m->id = 0x48;
  m->v = a->f1260;
  func_0014CBF4(a->f910, m, 1, 0);
 }
 if (b->f1280 != c->f1280) {
  a->f1280 = b->f1280;
  changed = 1;
 }
 return changed;
}
