typedef struct Q {
  char pad000[0x910]; s32 f910;
  char pad914[0x38C]; s32 fCA0; f32 fCA4;
  char padCA8[0x18]; s32 fCC0;
} Q;
typedef struct Q2 {
  char pad000[0xC48]; s32 fC48, fC4C, fC50, fC54, fC58;
} Q2;
typedef struct Cmd { s32 id; s32 pad; u64 ptr; char rest[0x30]; } Cmd;
u64 func_0011B9A8(s32);
void func_0011B9E0(u64);
void func_0014CBF4(s32, Cmd *, s32);
void func_00152CB8(f32, s32, u64, f32 *);
s32 func_00154654(s32);
void func_00159084(void *, u64);

void func_0015BE7C(Q *p) {
  f32 r[4];
  Cmd c;
  u64 m = func_0011B9A8(((u32)(p->fCA0 + 0x13) >> 4) << 4);
  if (m != 0) {
    Q2 *q = (Q2 *)p;
    func_00159084(p, m);
    c.ptr = m;
    c.id = 0xC6;
    func_0014CBF4(p->f910, &c, 1);
    func_00152CB8(p->fCA4, p->fCC0, m, r);
    q->fC48 = (s32)r[2];
    q->fC4C = (s32)r[0];
    q->fC50 = (s32)(r[3] - r[2]);
    q->fC54 = (s32)(r[1] - r[0]);
    q->fC58 = func_00154654(p->f910);
    func_0011B9E0(m);
  }
}
