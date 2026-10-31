typedef struct Node
{
  u8 pad[0x1C];
  struct Node *next;
} Node;
void func_0015217C(Node *);
void func_00151E24(Node *o, Node *n)
{
  Node *prev = (Node *) (((u8 *) o) + 0xFA0);
  Node *new_var;
  Node *next;
  o = *((Node **) (((u8 *) o) + 0xFBC));
  if (n == 0)
  {
    return;
  }
  while (o)
  {
    next = o->next;
    if (o == (new_var = n))
    {
      prev->next = next;
      func_0015217C(o);
    }
    else
    {
      prev = o;
    }
    o = next;
  }

}
