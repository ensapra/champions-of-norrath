typedef struct Hdr { s16 a; s16 pad; s16 b; s16 pad2; s32 w8; s32 w12; } Hdr;
typedef struct Cell Cell;
typedef struct Src { s32 a; s32 b; Cell *c; } Src;
typedef struct Item { Src *p; u8 pad[56]; } Item;
typedef struct Tbl { u8 pad[0x24]; Item *items; } Tbl;
struct Cell {
    u8 pad[0x50];
    u16 A[32][40];
    u8 pad2[0x40];
    u16 B[32][32];
    Tbl *tbl;
    s32 time;
    s32 pad3[2];
    Hdr **obj;
    s32 pad4[3];
};
extern s32 func_001D0E70();
void func_00187798(void *, void *, void *);
s32 D_00483E58;
s32 D_00484130;
Cell *D_00484138;
f32 D_0048413C;
f32 D_00484140;
s32 D_00484144;
s32 D_004841C0[1];
s32 D_004844A4;

void func_00178348(void) {
    s32 i, x, y;
    if (func_001D0E70() != 0) return;
    for (i = 0; i < D_00484130; i++) {
        Cell *e = &D_00484138[i];
        if (e->obj != NULL) {
            if (D_004844A4 - e->time >= 200) {
                Hdr **o = e->obj;
                e->obj = NULL;
                (*o)->w8 = 0;
                continue;
            }
            if (D_004841C0[0]-- >= 0) {
                f32 r = D_00484140;
                f32 f6 = D_0048413C;
                f32 r2 = r * r;
                f32 k = f6 / r2;
                u32 s1, s2, s3;
                s32 cx, cy, x0, x1, y0, y1;
                f32 fcx, fcy;
                s1 = D_00483E58 * 0x19660D + 0x3C6EF35F;
                s2 = s1 * 0x19660D + 0x3C6EF35F;
                s3 = s2 * 0x19660D + 0x3C6EF35F;
                D_00483E58 = s3;
                cx = (s1 >> 16) % 20 + 6;
                cy = (s2 >> 16) % 20 + 6;
                D_004841C0[0] = (s32)(s3 >> 16) % D_00484144;
                fcx = cx; fcy = cy;
                x0 = (s32)(fcx - r);
                x1 = (s32)(fcx + r + 1.0f);
                y0 = (s32)(fcy - r);
                y1 = (s32)(fcy + r + 1.0f);
                if (x0 < 0) x0 = 0;
                if (x1 > 31) x1 = 31;
                if (y0 < 0) y0 = 0;
                if (y1 > 31) y1 = 31;
                for (y = y0; y <= y1; y++) {
                    for (x = x0; x <= x1; x++) {
                        f32 d = (y - cy) * (y - cy) + (x - cx) * (x - cx);
                        if (!(r2 < d)) {
                            s32 v = (s32)(f6 - d * k) + (s16)e->B[y][x];
                            if (v > 0x7FFF) v = 0x7FFF;
                            e->B[y][x] = v;
                        }
                    }
                }
            }
            e = &D_00484138[i];
            func_00187798(&e->A, &e->B, (u8 *)*e->obj + 0x10);
        }
    }
    for (i = 0; i < D_00484130; i++) {
        Cell *e = &D_00484138[i];
        Hdr *h;
        Cell *r;
        if (e->obj == NULL) continue;
        h = *e->obj;
        if (h->a != -1) {
            r = e->tbl->items[h->a].p->c;
            if (r) {
                for (y = 0; y < 32; y++) e->A[y][0] = r->A[y][30];
                for (y = 0; y < 32; y++) r->A[y][31] = e->A[y][1];
                for (y = 0; y < 32; y++) e->B[y][0] = r->B[y][30];
                for (y = 0; y < 32; y++) r->B[y][31] = e->B[y][1];
            }
        }
        if (h->b != -1) {
            e = &D_00484138[i];
            r = e->tbl->items[h->b].p->c;
            if (r) {
                for (x = 0; x < 32; x++) e->A[0][x] = r->A[30][x];
                for (x = 0; x < 32; x++) r->A[31][x] = e->A[1][x];
                for (x = 0; x < 32; x++) e->B[0][x] = r->B[30][x];
                for (x = 0; x < 32; x++) r->B[31][x] = e->B[1][x];
            }
        }
    }
}
