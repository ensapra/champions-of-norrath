typedef struct Item { char pad[0xC]; s32 flags; } Item;
typedef struct Obj {
    char pad0[0xC8];
    s16 px, py;
    char padCC[0x23C - 0xCC];
    s16 mode;
    char pad23E[0x3C8 - 0x23E];
    s32 f3C8;
    s32 f3CC;
} Obj;
s32 func_001CE218(Item *, Obj *, s32, s32, s32, s32, s32, s32, f32, f32);
void func_00236A70(Obj *a, Item **list) {
    Item **p;
    Item *it;
    if ((a->f3CC == 0 && a->f3C8 == 0 && a->mode == 0x15) || (s16)a->mode == 0x16 || (s16)a->mode == 0x17) {
        p = list;
        it = *p;
        if (it) {
            do {
                p++;
                if (it->flags & 0x20) {
                    func_001CE218(it, a, 100000, 0, 0, 0x100041, 0, 0, (f32)a->px, (f32)a->py);
                    a->f3CC = 1;
                }
                it = *p;
            } while (it);
        }
    }
}
