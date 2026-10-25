extern void func_0013BD40(void *);
typedef struct 
{
  u8 bytes[0x258];
} Item;
typedef struct 
{
  Item *items;
  s32 cap;
  s32 pad;
  s32 count;
} Queue;
void func_0013C928(Queue *q, s32 pos, Queue *src)
{
  s32 n = src->count;
  s32 end = pos + n;
  int new_var;
  while (q->cap < end)
  {
    func_0013BD40(q);
  }

  new_var = 0;
  if (n > new_var)
  {
    s32 i;
    for (i = new_var; i < n; i++)
    {
      q->items[pos + i] = src->items[i];
    }

  }
  q->count = end;
}
