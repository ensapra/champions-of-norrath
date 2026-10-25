typedef struct 
{
  s32 id;
  s32 pad;
  s64 ptr;
  char rest[0x7F0];
} Ev;
typedef struct 
{
  s32 id;
  s32 pad;
  s64 ptr;
  char rest[0x3F0];
} Ev2;
typedef struct 
{
  char p0[0x910];
  s32 h910;
  char p1[4];
  s32 h918;
  char p2[0x940 - 0x91C];
  s64 a940;
  s64 a948;
  char p3[0x990 - 0x950];
  s64 a990;
  s64 a998;
} Obj;
extern char func_001C8098[];
s32 func_0014BA30(void *, void *);
void func_0014CBF4(s32, void *, s32);
s32 func_0016E294(Obj *d, Obj *s, Obj *t)
{
  Obj **new_var;
  Ev a;
  Ev2 b;
  s32 na = 0;
  s32 nb = 0;
  s32 r;
  r = (*((s32 (**)(void)) (func_001C8098 + 0xDB8)))();
  if (func_0014BA30(&s->a990, &t->a990) == 0)
  {
    a.id = 0x6C;
    na = 1;
    d->a990 = s->a990;
    r = 1;
    a.ptr = (s32) (&d->a990);
    d->a998 = s->a998;
  }
  new_var = &d;
  if (func_0014BA30(&s->a940, &t->a940) == 0)
  {
    b.id = 0x61;
    (*new_var)->a940 = s->a940;
    nb = 1;
    b.ptr = (s32) (&d->a940);
    r = 1;
    (*new_var)->a948 = s->a948;
  }
  if (na)
  {
    func_0014CBF4(d->h910, &a, na);
  }
  if (nb)
  {
    func_0014CBF4((*new_var)->h918, &b, nb);
  }
  return r;
}
