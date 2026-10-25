typedef struct { s32 sema; s32 *res; s32 n; char a[0x400]; char b[0x400]; } Req;
typedef struct { s32 count, max_count, init_count, wait_threads, attr, option; } SemaParam;
extern Req D_01109800[];
extern u8 D_0110A440[];
extern u8 D_0110AF00[];
extern s32 jtbl_004C006C[];
s32 CreateSema(SemaParam*); void DeleteSema(s32); void WaitSema(s32);
s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,s32,s32);
void func_001B1538(s32); void func_001B1568(void); void func_001B1668(void);
s32 func_001B4348(u8 *p, u8 *q) {
  Req *r = D_01109800;
  SemaParam sp;
  s32 res[4];
  s32 id, i, v;
  func_001B1538(0x11);
  if (!*(s32*)((u8*)jtbl_004C006C + 0x3F30)) func_001B1668();
  i = 0;
  if (r->a[0] = p[0]) {
    for (;;) {
      i++;
      if (i >= 0x400) break;
      if (!(r->a[i] = p[i])) break;
    }
  }
  if (i == 0x400) r->a[0x3FF] = 0;
  i = 0;
  if (r->b[0] = q[0]) {
    for (;;) {
      i++;
      if (i >= 0x400) break;
      if (!(r->b[i] = q[i])) break;
    }
  }
  if (i == 0x400) r->b[0x3FF] = 0;
  sp.max_count = 1;
  sp.init_count = 0;
  sp.option = 0;
  id = CreateSema(&sp);
  r->res = res;
  r->sema = id;
  r->n = 4;
  if (func_001B08B0(D_0110AF00, 0x18, 0, D_01109800, 0x80C, D_0110A440, 4, 0, 0) < 0) {
    DeleteSema(id); func_001B1568(); return -11;
  }
  v = *(s32*)((u32)D_0110A440 | 0x20000000);
  func_001B1568();
  if (!v) { DeleteSema(id); return -11; }
  WaitSema(id);
  DeleteSema(id);
  return res[0];
}
