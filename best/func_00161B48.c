void func_00161C8C(void*, s32, s32, s32, s32, s32, s32, void*, void*, void*);
typedef struct { char pad0[0x4EC]; s32 f4EC; char pad1[0x5A0-0x4F0]; s32 f5A0; s32 f5A4; char pad2[4]; s32 f5AC; s32 f5B0; char pad3[0x5D4-0x5B4]; s32 f5D4; } S;
void func_00161B48(S *a) {
    u8 *c = (u8*)a + 0x910;
    s32 h = a->f5B0 >> 1;
    s32 m = a->f5AC;
    s32 x = a->f5A4 + a->f5D4 + h;
    s32 y = a->f5A0 + a->f5D4;
    s32 n = h;
    s32 id = *(s32*)(c + 0x33BC);
    u8 *t;
    s32 r;
    s32 v3 = h;
    if (m < h) { n = m; v3 = m; }
    func_00161C8C(a, 0, y + v3, x, n, h, id, c + a->f4EC * 0x19C0 + 0x710, c + a->f4EC * 0x19C0 + 0xA30, c + a->f4EC * 0x19C0 + 0xD50);
    t = c + a->f4EC * 0x19C0;
    r = y + m - n;
    if (a->f5AC < n * 2) { r = y + n; n = a->f5AC - n; }
    func_00161C8C(a, 1, r, x, n, h, id, t + 0x1070, t + 0x1390, t + 0x16B0);
}
