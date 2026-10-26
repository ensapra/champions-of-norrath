typedef struct {
    unsigned char pad0[0x30];
    s32 count;
    unsigned char pad34[0x4C];
    s32 x;
    s32 y;
} Obj;
typedef struct {
    unsigned char pad0[0xE0];
    s32 (*calc)(void*, s32, void*, s32);
    unsigned char padE4[0x34];
    void (*draw)(void*, s32, void*, void*, s32);
    unsigned char pad11C[8];
    void (*end)(void*, void*, s32, s32);
} Manager;
typedef struct { s32 x, y; u16 w, h; u32 z; } Item;
typedef struct { u8 pad[0xE4]; void (*init)(void*, void*, void*); } Mgr2;
extern Manager *D_00362CC8;
extern Obj D_010F44A8;
extern u8 jtbl_004C006C[];
void func_00187130(s32 arg0, s32 arg1) {
    s32 count;
    s32 i;
    Item *item;
    u8 *list;
    Obj *obj = &D_010F44A8;
    Manager *m = D_00362CC8;
    count = ((s32*)obj)[0x30/4];
    ((Mgr2*)m)->init(m, m, &D_00362CC8);
    item = (Item*)(jtbl_004C006C + 0xDDB4);
    list = jtbl_004C006C + 0xDD6C;
    for (i=2; i>=0; i--) {
        s32 a = m->calc(m, item->y, (void*)(item->x + obj->x), item->w);
        s32 b = m->calc(m, a + obj->y, 0, item->h);
        m->draw(m, 0x80808080, (void*)&a, list, arg1);
        item = (Item*)((u8*)item + 0x10);
        list += 8;
    }
    count = obj->count;
    if (count >= 6) {
        count -= 6;
        list = jtbl_004C006C + 0xDCF4;
    } else list = jtbl_004C006C + 0xDCC4;
    item = (Item*)(jtbl_004C006C + 0xDDA4);
    {
        s32 a = m->calc(m, item->y, (void*)(item->x + obj->x), item->w);
        s32 b = m->calc(m, a + obj->y, 0, item->h);
        m->draw(m, 0x80808080, (void*)&a, list + count*8, arg1);
    }
    item = (Item*)(jtbl_004C006C + 0xDE14);
    {
        s32 a = m->calc(m, item->y, (void*)(item->x + obj->x), item->w);
        s32 b = m->calc(m, a + obj->y, 0, item->h);
        m->draw(m, 0x80808080, (void*)&a, jtbl_004C006C + 0xDD54, arg1);
    }
    m->end(m, (void*)&count, 0, 0x80808080);
}
