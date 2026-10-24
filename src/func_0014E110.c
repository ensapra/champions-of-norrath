typedef struct { u64 lo : 6; u64 fl : 1; u64 hi : 57; } Bits14E;
typedef struct { u8 pad[0x50]; Bits14E a; u8 pad2[0xF8]; Bits14E b; u8 pad3[0x200 - 0x158]; } Sub14E;
void func_0014E110(u8 *o) {
    Sub14E *s = (Sub14E *)(o + 0xE0) + *(s32 *)(o + 0x4EC);
    s->b.fl = s->a.fl = *(s32 *)(o + 0x5DC);
}
