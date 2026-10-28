typedef struct { s32 count, max_count, init_count, wait_threads, attr, option; } SemaParam;
typedef struct { s32 sema; s32 *res; s32 n; s32 a; } Req;
typedef struct { s32 a; s32 b; } Hdr;
extern s32 D_004449F4;
extern Req D_008E04C0[];
extern u8 D_008E1100[];
extern u8 D_008E1BC0[];
Hdr *func_002D8A80(void); void func_002D8EF8(s32); void func_002D8F28(void);
s32 CreateSema_2(SemaParam*); void DeleteSema_2(s32); void WaitSema_2(s32);
s32 func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_002DABC0(void){
  Hdr *t = func_002D8A80();
  SemaParam sp;
  s32 res[4];
  s32 id, r;
  Req *q = D_008E04C0;
  func_002D8EF8(10);
  if (D_004449F4 == 0) { func_002D8F28(); return -1; }
  if (!t || !t->b) { func_002D8F28(); return -9; }
  q->a = t->a;
  sp.max_count = 1;
  sp.init_count = 0;
  sp.option = 0;
  id = CreateSema_2(&sp);
  q->sema = id;
  q->res = res;
  q->n = 4;
  if (func_002D8270(D_008E1BC0, 10, 0, q, 20, D_008E1100, 4, 0, 0) < 0) {
    DeleteSema_2(id); func_002D8F28(); return -11;
  }
  t->b = 0;
  r = *(s32*)((u32)D_008E1100 | 0x20000000);
  func_002D8F28();
  if (!r) { DeleteSema_2(id); return -11; }
  WaitSema_2(id);
  DeleteSema_2(id);
  return res[0] > -1 ? 0 : res[0];
}
