extern char D_010C9D00[], func_001B9FD8[], func_001C6058[];
void func_001A42B8(void *, void *);
typedef struct { s32 used; char a4[0x100], a104[0x100], a204[0x100], a304[0x100], a404[0x100]; s32 f504, f508, f50C; } Slot;
void func_00126F58(void) {
    Slot *tbl = (Slot *)(func_001B9FD8 + 0x1930);
    s32 *idx = (s32 *)(func_001B9FD8 + 0x192C);
    char *g = D_010C9D00;
    Slot *s = &tbl[*idx];
    s->f504 = *(s32 *)(g + 0x1300);
    s->f508 = *(s32 *)(g + 0x1308);
    s->f50C = *(s32 *)(g + 0x130C);
    func_001A42B8(s->a304, g + 0xF00);
    func_001A42B8(tbl[*idx].a404, g + 0x1000);
    func_001A42B8(tbl[*idx].a204, g + 0xE00);
    func_001A42B8(tbl[*idx].a4, func_001C6058 + 0xA8);
    func_001A42B8(tbl[*idx].a104, func_001C6058 + 0x1A8);
    tbl[*idx].used = 1;
}
