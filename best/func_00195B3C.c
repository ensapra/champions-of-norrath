extern char jtbl_004C006C[];
void func_001A1568(char *file, s32 line, char *msg);
s32 func_001A4174(char *a, char *b);

typedef struct {
    char pad0[8];
    char name[8][0x30];
    char pad188[4];
    u8 flags;
    char pad18D[0x198 - 0x18D];
} Item198;

typedef struct {
    char pad0[0x52];
    u8 lang;
    char pad53[0x68 - 0x53];
    u32 count;
    char pad6C[0x78 - 0x6C];
    Item198 *items;
} ItemList;

s32 func_00195B3C(ItemList *o, char *name, u8 flag) {
    s32 lang = o->lang & 0x7F;
    u32 i;
    if (o == NULL) {
        func_001A1568(jtbl_004C006C + 0xEC4C, 0x531, jtbl_004C006C + 0xED04);
    }
    for (i = 0; i < o->count; i++) {
        if (func_001A4174(name, o->items[i].name[lang]) == 0) {
            Item198 *it = &o->items[i];
            if (!(it->flags & 0x34)) {
                it->flags |= flag;
                return 0;
            }
        }
    }
    return 1;
}
