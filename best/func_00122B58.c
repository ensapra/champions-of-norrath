typedef struct { s32 type; s32 f4; u8 *p; } Tok;
extern char func_001C5078[], func_001C5DE0[], func_01000000[];
void func_0010A5E8(void *, void *, s32);
void func_001228C0(void);
void func_00122A90(void);
void func_001A42B8(void *, void *);

void func_00122B58(void *a0, s64 sel, Tok *t) {
    switch (t->type) {
    case 19: {
        u32 c = *t->p;
        if ((u8)(c - 0x30) >= 10) {
            if ((u8)c != 0x2D && (u8)c != 0x23 && (u8)c != 0x2A && (u8)c != 0x2C) {
                if ((u8)c == 9)
                    func_00122A90();
                t->f4 = 0;
            }
        }
        break;
    }
    case 18: {
        char *base = func_01000000 + 0xC6F18;
        func_0010A5E8(a0, base + (s32)sel * 0x258, 0x258);
        switch (sel) {
        case 0:
            func_001A42B8(func_001C5078 + 0xB88, base);
            break;
        case 1:
            func_001A42B8(func_001C5078 + 0xC88, base + 0x258);
            break;
        case 2:
            func_001A42B8(func_001C5DE0 + 0x20, base + 0x4B0);
            break;
        }
        func_001228C0();
        return;
    }
    }
}
