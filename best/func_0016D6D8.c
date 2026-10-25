typedef struct { s16 x; s16 y; } Pt;
typedef struct { u64 *end; u64 *head; u64 *q; } Cur;
extern s32 D_00484468;
extern u64 *D_004844C4;
extern u64 *D_004844C8;
void func_0015EB80(u64 *, s32, Pt *, s32, s32, u64 *, s32, u64);

void func_0016D6D8(Pt *pt, s32 a1, s32 a2, s32 a3, s32 a4) {
    Cur c;
    u64 *b;
    u64 tag;
    s32 sx, sy, v9, v5;
    volatile Pt *vpt = pt;
    volatile s32 va3 = a3, va4 = a4;
    if (D_00484468 - (D_004844C8 - D_004844C4) >= 0xBB8) {
        b = D_004844C8;
        c.end = b + 0x1A;
        v5 = a2 * 16 + 0x7200;
        sy = pt->y * 16;
        sx = pt->x;
        v9 = a1 * 32 + 0x5800;
        c.q = b + 2;
        tag = (((c.end - b) - 2) >> 1) | 0x10000000;
        c.q[0] = (u64)0x10000000 << 32 | 0x8000;
        c.q[1] = 0xE;
        b[5] = 0x3F;
        b[4] = 0;
        b[7] = 6;
        b[6] = 0;
        b[9] = 0x14;
        b[8] = 0x61;
        b[0xB] = 1;
        b[0xD] = 0x42;
        b[0xC] = 0x2A;
        b[0xE] = 0x156;
        b[0xF] = 0;
        b[0x11] = 0x47;
        b[0x10] = 0x3001C;
        b[0x12] = 0x40004;
        b[0x13] = 3;
        b[0x15] = 5;
        b[0x14] = v9 | ((u64)v5 << 16) | ((u64)0xA000 << 20);
        b[0x17] = 3;
        b[0x16] = ((sy + 4) << 16) | (sx * 16 + 4);
        b[0x19] = 5;
        b[0x18] = (v9 + sx * 32) | ((u64)(v5 + sy) << 16) | ((u64)0xA000 << 20);
        ((s32 *)b)[2] = 0x11000000;
        ((s32 *)b)[3] = 0x5000000C;
        c.head = b;
        ((s32 *)b)[0x14] = va4;
        ((s32 *)b)[0x15] = 0;
        c.q[0] |= ((c.end - c.q) - 2) >> 1;
        b[0] = tag;
        if (((tag >> 28) & 7) == 1) {
            b[0] = (tag & 0x8FFFFFFF) | 0x60000000;
        } else {
            b[0x1A] = 0x60000000;
            b[0x1B] = 0;
            c.end = b + 0x1C;
            c.head = 0;
        }
        D_004844C8 = c.end;
        func_0015EB80(b, va3, (Pt *)vpt, 0, 1, c.q, 0x11000000, tag);
    }
}
