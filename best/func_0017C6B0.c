typedef struct { f32 x, y, z; } V3;
typedef struct { char p0[0x28]; s32 ox; s32 oy; s32 w; s32 pad; s32 *grid; } T;
extern f32 D_004800AC;
void func_0017C6B0(T *t, V3 pos, f32 r) {
    s32 x0 = (s32)((pos.x - (r + 5.0f)) * D_004800AC + 1.0f) - t->ox;
    s32 x1 = (s32)((pos.x + r + 5.0f) * D_004800AC + 1.0f) - t->ox;
    s32 y1 = (s32)((pos.y + r + 5.0f) * D_004800AC + 1.0f) - t->oy;
    s32 y0 = (s32)((pos.y - (r + 5.0f)) * D_004800AC + 1.0f) - t->oy;
    s32 i, j, n;
    for (i = x0; i < x1; i++) {
        s32 *p;
        j = y0;
        if (j < y1) {
            p = t->grid + (i + j * t->w);
            n = y1 - j;
            do {
                s32 v = *p;
                s32 hi = v >> 16;
                if (hi > 0) hi = (s16)(hi - 1);
                *p = (v & 0xFFFF) | (hi << 16);
                p += t->w;
            } while (--n != 0);
        }
    }
}
