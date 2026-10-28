typedef struct 
{
  u64 a;
  u64 b;
  s32 c;
} __attribute__((packed, aligned(4))) E;
typedef struct 
{
  E *data;
  s32 cap;
  s32 unused;
  s32 count;
} B;
void func_0013A3F8(B *);
void ovl_ntgui2_func_0013AAA8(B *a, B *b)
{
  s32 n = b->count;
  while (a->cap < (a->count + n))
  {
    func_0013A3F8(a);
  }

  {
    s32 i;
    for (i = 0; i < n; i++)
    {
      a->data[a->count + i] = b->data[i];
    }

  }
  a->count += n;
}
