typedef struct { u32 a, b, c, d; } E;
typedef s32 (*CB)(void *, s32, void *);
s32 func_002FA9F0(u32 x, void *tab, CB *obj, s32 mode, s32 *out) {
  s32 ret = 0;
  E *ent, *p;
  s32 i;
  u32 a;
  *out = 1;
  if (tab) {
    i = 0;
    ent = (E *)((char *)tab + 8);
    if (mode) {
      i = (s32)(x - (u32)ent) >> 4;
      x = ((E *)x)->b - 1;
      if (ent[i].a == -1) goto done;
      i++;
    } else {
      x = x - 1;
    }
    if (ent[i].a == -1) goto done;
    p = &ent[i];
    a = *(volatile u32 *)p;
    do {
      if (x >= a && x < p->b) {
        if (p->d) {
          if (*obj && (*obj)(obj, p->d, tab)) {
            if (ret == 0) ret = p->c;
            *out = 0;
            break;
          }
        } else if (ret == 0) ret = p->c;
      }
      p++;
      a = p->a;
    } while (a != -1);
  }
done:
  return ret;
}
