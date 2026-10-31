typedef struct LNode { s32 a,b; struct LNode *next,*prev; } LNode;
void func_0011B9E0(void *);
void func_001529A8(LNode *n) { volatile LNode *p=n; LNode *q; p->prev->next=p->next; q=p->prev; p->next->prev=q; func_0011B9E0(n); }
