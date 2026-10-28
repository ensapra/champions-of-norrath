typedef struct E { u64 key; void *next; } E;
typedef struct L { u64 pad0; s32 handle; s32 pad1; s8 count; u8 pad2[15]; E ent[1]; } L;
s32 func_001787D0(s32);
void func_00178BD8(void *, void *);
extern u32 D_001D0448[];
s32 func_00178818(void *a, L *b, s32 c)
{
  E *e = b->ent;
  s32 i, r, same;
  if (b->handle) {
    r = func_001787D0(b->handle);
    if (r) {
      D_001D0448[0] = (u32)a;
      D_001D0448[1] = (u32)b;
      D_001D0448[2] = c;
      func_00178BD8(b, &D_001D0448[3]);
      return r;
    }
  }
  for (i = 0; i < b->count; i++, e++) {
    same = ((e->key ^ *(u64 *)e->next) & 0x00FFFFFF00FFFF00ULL) == 0;
    if (same) {
      r = func_00178818(a, e->next, c);
      if (r) return r;
    }
  }
  return 0;
}
