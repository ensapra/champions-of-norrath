typedef struct { s32 id; s32 a; s32 b; s32 c; s32 d; } Entry;
typedef struct { Entry e; s32 p5; s32 p6; } Obj;
extern Entry D_00447F90[];
void *func_001449A8(s32,s32); s32 func_002EB790(void); void func_002EDAB8(s32,s32,void *); void *func_003021B0(void *,s32,s32);
s32 func_002EB0F8(s32 id, void **out) {
  s32 i; s32 cfg[4]; Obj *p; s32 k;
  i = -1;
  for (k = 0; k < 2; k++) if (D_00447F90[k].id == id) { i = k; break; }
  if (i == -1) return 0x80000004;
  if (id == 0x12c) {
    p = func_001449A8(0x188, 0);
    cfg[0] = 1;
    func_003021B0(p, 0, 0x188);
    p->p5 = func_002EB790();
    p->p6 = func_002EB790();
    func_002EDAB8(p->p5, 3, cfg);
    *out = p;
    p->e = D_00447F90[i];
  }
  return 0;
}
