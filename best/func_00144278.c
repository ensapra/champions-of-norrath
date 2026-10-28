typedef struct MemChunk { u16 magic; u16 used; s32 size; s32 tag; struct MemChunk *next, *prev; s32 field14, field18; } MemChunk;
extern char D_00483B10[];
void *func_00144368(s32,char*); void func_00301FFC(void*,void*,s32); void func_00144558(void*);
void *func_00144278(void *ptr, s32 size) {
  MemChunk *c = (MemChunk*)((u8*)ptr - 0x1C);
  s32 floor = 0x40;
  s32 olds; MemChunk *n;
  if (size <= floor) size = floor;
  olds = c->size;
  if (olds < size) { void *p = func_00144368(size, D_00483B10); func_00301FFC(p, ptr, c->size); return p; }
  if (olds - size > 0x80) {
    size = (size + 7) & ~7;
    n = (MemChunk*)((u8*)c + size + 0x1C);
    n->next = c->next; n->prev = c; n->size = olds - size - 0x1C;
    n->magic = 0xABCD;
    c->next->prev = n;
    n->used = 1; c->next = n;
    n->tag = 0;
    c->size = size;
    func_00144558((u8*)ptr + size + 0x1C);
  }
  return ptr;
}
