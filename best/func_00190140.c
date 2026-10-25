typedef struct { s32 p; s32 q; s32 c8; s32 cC; s32 state; s32 pad[2]; } Ent;
typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; } Req;
typedef struct { s32 f0[0x16]; s32 f58; s32 pad5C; s32 f60; u8 pad64[3]; u8 f67; u8 pad68[8]; u8 f70; u8 f71; } Slot;
extern s32 D_00362DBC[];
extern u8 jtbl_004C006C[];
extern u8 D_010F45C0[];
extern u8 D_010F4610[];
extern u8 D_010F4700[];
extern u8 D_010F4800[];
void func_001A2660(void*, s32, s32);
void func_001AF710(void*, ...);
s32 func_001B08B0(void*,s32,s32,void*,s32,void*,s32,s32,s32);
s32 func_00190140(s32 a, s32 b, s32 c) {
  Slot *s;
  Req *r;
  s32 i;
  Ent *e;
  s32 *buf;
  if (c & 0x3F) {
    if (D_00362DBC[0]) func_001AF710(jtbl_004C006C + 0xEB3C, c);
    return 0;
  }
  if (((Ent *)(D_010F4610 + b * 0x1C + a * 0x70))->state == 1) {
    if (D_00362DBC[0]) func_001AF710(jtbl_004C006C + 0xEB6C, a, b);
    return 0;
  }
  s = (Slot *)c;
  i = 1;
  do {
    s->f58 = 0;
    s->f70 = 5;
    s->f71 = 2;
    s->f67 = 0;
    i--;
    func_001A2660(s, 0xFF, 0x20);
    s->f60 = 0;
    s = (Slot *)((u8 *)s + 0x80);
  } while (i >= 0);
  r = (Req *)D_010F4800;
  r->a = 1;
  r->b = a;
  r->c = b;
  r->e = c;
  if (func_001B08B0(D_010F45C0, 1, 0, r, 0x80, r, 0x80, 0, 0) < 0) return 0;
  e = (Ent *)(D_010F4610 + b * 0x1C + a * 0x70);
  buf = (s32 *)(D_010F4700 + a * 0x80 + b * 0x20);
  e->state = 1;
  *buf = 0;
  e->cC = 0;
  e->c8 = r->f;
  e->p = c;
  e->q = (s32)buf;
  return r->d;
}
