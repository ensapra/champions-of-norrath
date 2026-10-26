typedef struct { s32 v; u8 pad[0x1E]; s16 id; u8 pad2[0x24]; } Cell;
typedef struct { Cell c[75]; } Dummy;
u8 *D_00484544;
u8 *D_0048491C;
extern u8 D_00408748[];
extern u8 D_007CCBE0[];
extern u8 D_00408600[];
void func_00108428(s32, void *, s32 *, s32 *);

#define CELL(g, r, c) ((Cell *)((u8 *)(g) + (r) * 0x48 + (c) * 0x1518))

void func_001B6E80(s32 a0, s32 a1, s32 flag) {
    s32 k, r, c, n, idx, w, h, a, b, y, x, ok, dy, dx, wh[2];
    u8 *g, *lst, *tbl;
    Cell *s;
    if (a0 < 0) return;
    for (k = 0; k < 3; k++) {
        g = (flag ? D_0048491C : D_00484544) + a1 * 0x23988 + k * 0xBDD8;
        lst = flag ? D_007CCBE0 + k * 0x1208 : D_00408748 + a0 * 0x5DB0 + k * 0x1208;
        n = *(s32 *)(lst + 0x1200);
        for (r = 0; r < 75; r++)
            for (c = 0; c < 9; c++) {
                CELL(g, r, c)->v = 0;
                CELL(g, r, c)->id = 0;
            }
        if (n <= 0) continue;
        tbl = D_00408600 + a0 * 0x5DB0 + 0x50;
        s = (Cell *)lst;
        for (idx = 0; idx < n; idx++, s++) {
            func_00108428(*(s32 *)(tbl + 4), s, &wh[0], &wh[1]);
            s->id = idx;
            a = wh[0] / 32 + 1;
            b = (wh[1] - 6) / 0x22 + 1;
            for (y = 0; y < 75; y++) {
                for (x = 0; x < 9; x++) {
                    ok = 1;
                    for (dy = 0; dy < b; dy++)
                        for (dx = 0; dx < a; dx++)
                            if (CELL(g, y + dy, x + dx)->v != 0) ok = 0;
                    if (x + a >= 10 || y + b >= 0x4C) ok = 0;
                    if (ok) {
                        for (dy = 0; dy < b; dy++)
                            for (dx = 0; dx < a; dx++)
                                if (s) {
                                    *CELL(g, y + dy, x + dx) = *s;
                                    CELL(g, y + dy, x + dx)->id = idx;
                                }
                        goto next;
                    }
                }
            }
            next: ;
        }
    }
}
