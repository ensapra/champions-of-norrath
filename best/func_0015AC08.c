extern s32 func_0015AF4C(void *, s32, s32);
extern s32 func_0015BDB4(void *, s32, void *, void *, void *);
void func_0015AC08(u8 *g, s32 i, s8 c, s32 f, s32 x) {
    s32 t = *(s32 *)(g + 0xD04) ? x : 0;
    u8 *e = *(u8 **)(g + 0xB80) + i * 0x24;
    s32 v;
    func_0015AF4C(g, i, t);
    v = *(s32 *)(e + 4);
    *(s32 *)e = c;
    v &= 0xAF;
    if (t) v |= 0x50;
    *(s32 *)(e + 4) = (v & 0xF8) | f;
    func_0015BDB4(g, c & 0xFF, e + 0x10, e + 0x14, e + 0x18);
}
