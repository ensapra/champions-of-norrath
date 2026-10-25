typedef struct { s32 d[0x131]; } Elem;
typedef struct { Elem *data; s32 cap; s32 pad; s32 count; } Vec;
void func_00110EF0(void);
void func_001110E8(Vec *v, s32 idx, Elem *e) {
    s32 i;
    if (v->count >= v->cap) func_00110EF0();
    for (i = v->count - 1; i >= idx; i--)
        v->data[i + 1] = v->data[i];
    v->data[idx] = *e;
    v->count++;
}
