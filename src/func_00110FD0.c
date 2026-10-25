typedef struct { s32 data[0x131]; } Elem110FD0;
typedef struct { Elem110FD0 *items; s32 cap; s32 unk8; s32 count; } Vec110FD0;
void func_00110EF0(Vec110FD0 *);

void func_00110FD0(Vec110FD0 *v, Elem110FD0 *e)
{
    if (v->count >= v->cap)
        func_00110EF0(v);
    v->items[v->count] = *e;
    v->count++;
}
