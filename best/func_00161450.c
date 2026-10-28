typedef struct Nd { s32 _0; s32 _4; s32 time; struct Nd *prev; struct Nd *next; struct Nd *child; s32 _18; u16 flags; u16 _1E; s32 _20; s32 _24; } Nd;
extern Nd *D_0048690C; extern Nd *D_00486910;
Nd *func_00161450(void) {
  Nd *n = D_00486910;
  Nd *cur = n, *tail, *h, *p;
  Nd *c;
  if (n->child && (n->child->flags & 0x4800)) {
    tail = D_0048690C; h = n;
    do {
      if (cur->next) {
        if (cur->prev) cur->prev->next = cur->next; else h = cur->next;
        n = h;
        cur->next->prev = cur->prev;
        cur->prev = tail; tail->next = cur; tail = cur; cur->next = 0;
      }
      cur = n;
    } while (n->child && (n->child->flags & 0x4800));
    D_0048690C = tail; D_00486910 = h;
  }
  p = n;
  D_00486910 = p->next;
  c = p->child;
  p->next->prev = 0;
  if (c) c->_4 = 0;
  p->prev = D_0048690C;
  D_0048690C->next = p;
  D_0048690C = p;
  p->time = 1000000;
  p->next = 0;
  p->_20 = 0;
  p->_24 = 0;
  p->child = 0;
  return p;
}
