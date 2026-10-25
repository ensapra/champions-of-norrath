typedef struct { u32 f0, f4, f8, fC, f10, f14, f18, f1c, f20; } Ent;
typedef struct { char pad[0xB80]; Ent *ents; char pad2[0xD04 - 0xB84]; s32 fD04; } Ctx;
s32 func_0014918C(s8 **);
void func_0015AB48(Ctx *, s32, s32);
void func_0015AF4C(Ctx *, s32, s32);
void func_0015BD0C(Ctx *, s32, u32 *, u32 *, u32 *);
void func_0015BDB4(Ctx *, u32, u32 *, u32 *, u32 *);
s32 func_0015A928(Ctx *c, s32 idx, s8 *src, s32 n, s32 flag) {
  s32 i = 0;
  Ent *e = c->ents + idx;
  s32 fl = c->fD04 ? flag : 0;
  s8 *p = src;
  if (n > 0) {
    do {
      s32 j = idx + i;
      u32 *a = &e->f10, *b = &e->f14;
      u32 *volatile d = &e->f18;
      if (*p < 0) {
        s8 *tmp;
        s32 k;
        u32 t;
        func_0015AF4C(c, j, fl);
        t = e->f4 & 0xAF;
        if (fl) t |= 0x50;
        e->f4 = (t & 0xF8) | 2;
        k = 1;
        e->f0 = (u8)*p;
        tmp = p;
        func_0015BD0C(c, func_0014918C(&tmp), a, b, d);
        t = e->f0;
        if (t >= 0xE0) {
          k = 2;
          if (t >= 0xF0) k = (t >= 0xF8) ? 0 : 3;
        }
        do {
          i++;
          e++;
          p++;
          func_0015AF4C(c, idx + i, fl);
          t = e->f4 & 0xAF;
          if (fl) t |= 0x50;
          e->f4 = t;
          t &= 0xF8;
          if (k == 1) e->f4 = t | 4;
          else e->f4 = t | 2;
          k--;
          e->f0 = (u8)*p;
        } while (k != 0);
        e->f14 = 0;
        e->f10 = 0;
        e->fC = 0;
        e->f8 = 0;
        e->f18 = 0;
      } else {
        u32 t;
        func_0015AF4C(c, j, fl);
        t = e->f4 & 0xAF;
        if (fl) t |= 0x50;
        e->f4 = (t & 0xF8) | 1;
        e->f0 = (u8)*p;
        func_0015BDB4(c, (u8)*p, a, b, d);
      }
      i++;
      e++;
      p++;
    } while (i < n);
  }
  func_0015AB48(c, idx, i);
  return i;
}
