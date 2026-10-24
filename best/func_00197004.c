typedef struct {
    u8 pad[0x114];
    void (*fn)(void *);
} UiObj;

typedef struct { u8 b[0x40]; } Ent40;

extern void *D_00480488;
extern u8 D_00364290[];
extern Ent40 D_010F64A8[];
void func_0019449C(void);

u8 func_0019706C(void)
{
    u8 *p = D_00480488;
    return *p;
}

void func_00197054(u8 a)
{
    if (a) {
        a = 1;
    }
    D_00364290[0] = a;
}

void func_00197004(void)
{
    s32 i;

    i = 0;
    func_0019449C();
    do {
        ((UiObj *)D_00480488)->fn(&D_010F64A8[i++]);
    } while (i < 6);
}
