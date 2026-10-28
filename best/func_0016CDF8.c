typedef struct { s16 pad[8]; s16 x, y; s16 pad2[6]; } Q;
void func_0016CDF8(void *arg0, s32 dir, s32 x, s32 y, s32 w, s32 h, Q *out) {
    u16 ox = *(u16 *)((u8 *)arg0 + 0x4DC);
    u16 oy = *(u16 *)((u8 *)arg0 + 0x4E0);
    s32 hq = h / 4;
    s32 hh = h / 2;
    s32 x0 = x, x1 = x + w;
    s32 ya = y - hq, yb = y + (h - hq), yc = y + hh;
    s32 ta, tb, tc, td, te, tf;
    if (dir == 1) {
        ta = x0; tb = ya; tc = x1; td = ya;
        out[0].x = ox + x0; out[0].y = oy + ya;
        out[1].x = ox + x1; out[1].y = oy + ya;
        out[2].x = ox + x0; out[2].y = oy + y;
        out[3].x = ox + x1; out[3].y = oy + y;
        out[4].x = ox + x0; out[4].y = oy + yc;
        out[5].x = ox + x1; out[5].y = oy + yc;
        out[6].x = ox + x0; out[6].y = oy + yb;
        out[7].x = ox + x1; out[7].y = oy + yb;
    }
}
