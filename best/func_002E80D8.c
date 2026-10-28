typedef struct { s32 pad; s32 value; u16 code; u16 p0; u16 x; u16 y; u16 f; } Ent;
typedef struct { u8 pad[0xe0]; u8 bits[0x20]; s32 count; u8 codes[256]; } A;
typedef struct { s32 value; u8 p0[6]; u8 x; u8 y; u8 p1[4]; s16 len; u8 p2[2]; u8 keys[256]; } B;
s32 func_002E80D8(A *a, B *b) {
  s32 ret = 0;
  s32 i, j, found;
  s32 len = b->len;
  u8 *keys = b->keys;
  for (i = 0; i < a->count; i++) {
    u8 code = a->codes[i];
    found = 0;
    if (len > 0) {
      j = 0;
      do {
        if (code == keys[j++]) { found = 1; break; }
      } while (j < len);
    }
    if (!found) {
      u8 *h = (u8 *)a + 0x24;
      u8 mask = 1 << (code & 7);
      a->bits[code >> 3] &= ~mask;
      ret = *(u16 *)(h + 2);
      if (*(u16 *)(h + 2) >= 10) {
        ret = 0x8000000D;
      } else {
        Ent *e = (Ent *)(h + ret * 16);
        *(s32 *)((u8 *)a + 0x28 + ret * 16) = b->value;
        e->code = code;
        e->x = b->x;
        e->y = b->y;
        e->f = 2;
        (*(u16 *)(h + 2))++;
        ret = 0;
      }
    }
  }
  return ret;
}
