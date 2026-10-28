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
  int a = 0, b = 0, c = 0, d = 0;
  switch (p->kind)
  {
    case 1: a = 30; b = 30; c = 30; d = 50; break;
    case 2: a = 30; b = 15; c = 15; d = 50; break;
    case 3: a = 15; b = 15; c = 30; d = 50; break;
    case 4: a = 10; b = 20; c = 10; d = 50; break;
    case 5: a = 20; b = 20; c = 15; d = 50; break;
    case 6: a = 20; b = 20; c = 10; d = 50; break;
    case 7: a = 20; b = 0; c = 30; d = 50; break;
    case 8: break;
  }
  if (p->a >= a) a = p->a;
  if (p->b >= b) b = p->b;
  if (p->c >= c) c = p->c;
  if (p->d >= d) d = p->d;
  p->a = a;
  p->b = b;
  p->c = c;
  p->d = d;
}
