typedef struct N { s32 a; s32 b; s32 c; struct N *next; } N;
void func_0018D2F0(void *p) { N *n; *(s32 *)((char *)p + 0x370) = 0; n = *(N **)((char *)p + 0x37C); do { n->b = 0; n = n->next; } while (n != 0); }
