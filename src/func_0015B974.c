typedef struct {
    u32 ch;
    s32 attr;
    char pad[0x1C];
} Cell;

typedef struct {
    char pad0[0xB80];
    Cell *cells;
    char pad1[0x8];
    s32 pos;
    char pad2[0x60];
    s32 end;
    char pad3[0x110];
    s32 hlOn;
} TextBox;

s32 func_0015B974(TextBox *tb, s32 flag, s32 n) {
    s32 hl;
    s32 cnt = 0;
    Cell *c;
    s32 len;
    u32 ch;

    c = &tb->cells[tb->pos];
    hl = tb->hlOn ? flag : 0;
    if (n-- == 0 || tb->pos == tb->end) goto done;
    if (c->ch < 0x80) goto single;
    if (tb->pos >= tb->end - 1) goto done;
multi:
    ch = c->ch;
    if (ch < 0xE0) len = 1;
    else if (ch < 0xF0) len = 2;
    else len = (ch < 0xF8) ? 3 : 0;
    do {
        len--;
        cnt++;
        c->attr = hl ? (c->attr & 0xAF) | 0x50 : c->attr & 0xAF;
        c++;
        tb->pos++;
    } while (len != 0);
single:
    n--;
    cnt++;
    c->attr = hl ? (c->attr & 0xAF) | 0x50 : c->attr & 0xAF;
    c++;
    tb->pos++;
    if (n == -1 || tb->pos == tb->end) goto done;
    if (c->ch < 0x80) goto single;
    if (tb->pos < tb->end - 1) goto multi;
done:
    return cnt;
}
