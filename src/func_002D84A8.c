extern unsigned int func_002DD640(void);
extern void func_002DD698(void);
typedef struct N
{
  s32 a;
  s32 b;
  s32 c;
  s32 d;
  s32 e;
  struct N *next;
} N;
extern u8 D_008E0440[];
void func_002D84A8(N *arg0, s32 arg1)
{
  u8 *b;
  unsigned int pad;
  N *head;
  N *p;
  func_002DD640();
  b = D_008E0440;
  arg0->a = arg1;
  arg0->b = 0;
  arg0->c = 0;
  arg0->d = 0;
  arg0->e = 0;
  arg0->next = 0;
  head = *((N **) (b + 0x28));
  if (head == 0)
  {
    *((N **) (b + 0x28)) = arg0;
  }
  else
  {
    p = head;
    while (p->next)
    {
      p = p->next;
    }

    p->next = arg0;
  }
  func_002DD698();
}
