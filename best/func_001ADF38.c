typedef struct { char *name; u8 pad[0x1D - 4]; s8 cat; } Info;
typedef struct { Info *info; u16 qty; u16 pad6; u64 flags; u8 pad10[0x10]; u8 b20; u8 b21; u16 id; u8 rest[0x24]; } Item;
extern u8 D_00408748[];
extern char D_004663F0[];
extern u8 D_00466400[];
extern char D_00466418[];
extern char D_00466428[];
extern char D_00484838[];
extern char D_00484840[];
s32 D_00484CD8;
s32 func_003044FC(char *, char *);
s32 func_001D39C0(void *);
void func_001D3AB0(void *, s32);
s32 func_001671F8(char *);
void func_001C2378(s32, s32, s32);
void func_001A5358(s32);
void func_001ABD68(s32, s32);

s32 func_001ADF38(s32 a0, Item *it, s32 flag) {
    Info *info = it->info;
    u64 fl = it->flags;
    Item *list = (Item *)(D_00408748 + a0 * 0x5DB0 + info->cat * 0x1208);
    Item *p;
    s32 i, n, a, b;
    if (fl & 0x100) {
        for (i = 0; i < 0x40; i++) {
            p = &list[i];
            if (p->info != info) continue;
            if (list[i].flags != fl) continue;
            if (p->b20 != it->b20) continue;
            if (p->b21 != it->b21) continue;
            if (D_00484CD8 == 1 && flag && func_003044FC(info->name, D_004663F0) == 0) {
                if (!func_001D39C0(D_00466400)) {
                    func_001D3AB0(D_00466400, 1);
                    a = func_001671F8(D_00466418);
                    b = func_001671F8(D_00466428);
                    func_001C2378(a0, a, b);
                }
            }
            p->qty += it->qty;
            func_001A5358(a0);
            func_001ABD68(a0, 0);
            func_001ABD68(a0, 1);
            return i;
        }
    }
    if (func_003044FC(info->name, D_00484838) == 0 || func_003044FC(it->info->name, D_00484840) == 0) {
        for (p = list, i = 0; i < *(s32 *)((u8 *)list + 0x1200); i++, p++) {
            if (p->info && func_003044FC(p->info->name, it->info->name) == 0) return -1;
        }
    }
    n = *(s32 *)((u8 *)list + 0x1200);
    p = list + n;
    if (p->info != 0) return -1;
    *p = *it;
    if (flag && func_003044FC(it->info->name, D_004663F0) == 0 && !func_001D39C0(D_00466400)) {
        func_001D3AB0(D_00466400, 1);
        a = func_001671F8(D_00466418);
        b = func_001671F8(D_00466428);
        func_001C2378(a0, a, b);
    }
    func_001ABD68(a0, 0);
    func_001ABD68(a0, 1);
    n = *(s32 *)((u8 *)list + 0x1200);
    list[n].id = n;
    *(s32 *)((u8 *)list + 0x1200) = n + 1;
    return n;
}
