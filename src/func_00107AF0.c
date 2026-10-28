typedef struct { u8 pad[0x18]; s32 f18; } Item;
typedef struct { Item *items; s32 a, b; s32 count; s32 c; } Rec;
extern Rec D_010C1E80[];

void func_00107AF0(void)
{
    s32 r, i;
    for (r = 0; r < 2; r++) {
        for (i = 0; i < (D_010C1E80 + r)->count; i++) {
            Item *e = (D_010C1E80 + r)->items + i;
            e->f18 = 0;
        }
    }
}
