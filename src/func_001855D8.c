extern u8 func_001D26E8[];
extern u8 func_001D7EB0[];
typedef struct { u8 pad[0x54]; void *ptr; u8 pad2[0xE90 - 0x58]; } Ent1855;
void func_001855D8(void) {
    s32 i;
    for (i = 5; i >= 0; i--) {
        ((Ent1855 *)(func_001D26E8 + 0xC8))[i].ptr = func_001D7EB0 + 0x410;
    }
}
