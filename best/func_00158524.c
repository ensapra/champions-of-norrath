s32 func_001591D8(void);
s32 func_0015AD38(void *, s32);
void func_0015ACB0(void *, void *, s32, s32, s32);
void ovl_ntgui2_func_0015A7B8(void *);
void func_0015B210(void *);
void func_0015AFAC(void *);
typedef struct { char pad0[0x98]; s32 field98; char pad9c[0xAE4]; u32 items; u32 gap[2]; s32 count; char padb90[0x60]; s32 capacity; } Obj58524;
s32 func_00158524(Obj58524 *p) {
    s32 removed, last;
    s32 *entry, *items;
    if (p == NULL) return 0;
    if (func_001591D8() != 0) return 1;
    if (p->count <= 0) return 0;
    if (p->capacity <= 0) { p->capacity = 0; p->count = 0; return 0; }
    if (p->capacity < p->count) p->count = p->capacity;
    if (func_0015AD38(p, p->count - 1)) {
        items = (s32 *)p->items;
        func_0015ACB0(items + p->count * 9 - 9, items + p->count * 9, 0x24, p->capacity - p->count, p->count);
        p->capacity--;
        p->count--;
    } else {
        items = (s32 *)p->items;
        last = p->count - 1;
        entry = items + last * 9;
        removed = 0;
        goto check;
    loop:
        removed++;
    check:
        if ((u32)(*entry - 0x80) < 0x40) {
            entry -= 9;
            goto loop;
        }
        removed++;
        func_0015ACB0(items + (p->count - removed) * 9, items + p->count * 9, 0x24, p->capacity - p->count, p->count);
        p->capacity -= removed;
        p->count -= removed;
    }
    ovl_ntgui2_func_0015A7B8(p);
    func_0015B210(p);
    p->field98 = 2;
    func_0015AFAC(p);
    return 1;
}
