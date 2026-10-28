s32 func_00313A08(u8 *p){ f32 *f=(f32*)(p+0x24); s16 *o=(s16*)(p+0x18); s16 *z=(s16*)(p+0xE); s32 i = 0; s32 c; do { i++; *z=0; *f=2.0f; *o=1; c = i < 5; o++; f++; z++; } while (c); return c; }
