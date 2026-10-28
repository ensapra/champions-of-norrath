typedef struct { u8 pad[0x258]; u8 data[1200 - 0x258]; } Blk;
typedef struct { Blk *blk; s32 a, b, c, d; } Item;
typedef struct { Item *items; s32 f4; s32 f8; s32 count; } List;
s32 ovl_ntgui2_func_0013AD08(List *, void *, s32 *, s32 *);
s32 func_00139A50(Item *, s32);
s32 ovl_ntgui2_func_0013B380(List *l, void *a) {
    s32 x, y;
    if (ovl_ntgui2_func_0013AD08(l, a, &x, &y)) {
        func_00139A50(&l->items[x], y);
        return 1;
    }
    return 0;
}
