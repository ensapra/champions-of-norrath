typedef struct P {
  char pad000[0x9C];
  s32 f9C;
  char pad0A0[0x870];
  s32 f910;
  char pad914[0x2B4];
  s32 fBC8;
  char padBCC[0xC0];
  s32 fC8C;
  char padC90[0x38];
  u32 fCC8;
} P;
extern u8 func_001C8098[];
extern u8 func_0015ADA4[];
s32 func_0014D29C(P *);
s32 func_0014F200(s32, u64, P *, void *);
void func_0014F288(s32, s32);
void func_0015BE7C(P *);

void func_0015A440(P *p, s32 a) {
  if (p->fC8C != 0) {
    func_0014F288(func_0014D29C(p), p->fC8C);
    p->fC8C = 0;
  }
  if (a != 0 && p->fCC8 != 0) {
    p->fC8C = func_0014F200(func_0014D29C(p), p->fCC8, p, func_0015ADA4);
    p->fBC8 = 1;
  }
  if (p->f9C != a) {
    void *t = func_001C8098;
    t = *(void **)((u8 *)t + 0xDE4);
    ((void (*)(P *, s32))t)(p, a);
    if (a == 0 && p->f910 != 0) {
      func_0015BE7C(p);
    }
  }
}
