typedef struct 
{
  char pad[0x8C];
  s16 a;
  s16 b;
  s16 c;
  s16 d;
  char pad2[8];
  s8 kind;
} S9;
void func_00109710(S9 *p)
{
  s16 d = 0;
  s16 c = 0;
  s16 b = 0;
  s16 a = 0;
  s16 pa;
  s16 pb;
  s16 pc;
  s16 pd;
  switch (p->kind)
  {
    case 1:
      a = (b = 30);
      goto l1e;

    case 2:
      a = 30;
      b = 15;
      c = 15;
      goto l32;

    case 3:
      a = 15;
      b = 15;
      goto l1e;

    case 4:
      c = 10;
      a = 10;
      b = 20;
      goto l32;

    case 5:
      a = 20;
      b = 20;
      c = 15;
      goto l32;

    case 6:
      a = 20;
      b = 20;
      c = 10;
      goto l32;

    case 7:
      a = 20;
      b = 0;
      l1e:
    c = 30;

      l32:
    d = 50;


    case 8:
      break;

  }

  pa = p->a;
  pb = p->b;
  pc = p->c;
  pd = p->d;
  if (pa >= a)
  {
    a = pa;
  }
  if (pb >= b)
  {
    b = pb;
  }
  if (pc >= c)
  {
    c = pc;
  }
  if (pd >= d)
  {
    d = pd;
  }
  p->d = d;
  p->a = a;
  p->b = b;
  p->c = c;
}
