typedef struct { u8 pad[0x10]; u32 flags; void *self; s32 gen; } Item;
void func_001B01B8(Item *it) { it->gen = 0; it->flags &= 0xFFFFFFFE; }
s32 func_001B29F0(s32, s32);
s64 func_001B2B94(s32 a) { return func_001B29F0(a, 6); }
s64 func_001B2D68(s32 a) { return func_001B29F0(a, 8); }
s64 func_001B3118(s32 a) { return func_001B29F0(a, 0x10); }
