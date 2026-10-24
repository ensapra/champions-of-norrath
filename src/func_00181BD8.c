extern u8 func_001D1C80[];
extern u8 D_004CD758[];
s32 func_00197958(void *);
void func_0019BC38(s32);
void func_001A2850(void *, s32);

typedef struct {
    u8 data[0xE90];
} S_E90;

typedef struct {
    u8 pad0[0x470];
    S_E90 items[6];
    u8 pad1[0x5BD0 - 0x470 - 0xE90 * 6];
    s32 x5BD0;
    s32 x5BD4[4];
} S_001D2340;

void func_00181BD8(void) {
    S_001D2340 *g = (S_001D2340 *)(func_001D1C80 + 0x6C0);
    S_E90 *items = g->items;
    s32 r;
    s32 s;

    r = func_00197958(&items[g->x5BD0]);
    s = g->x5BD4[g->x5BD0];
    switch (r) {
    case 0x80:
        r = (s == 5) ? 6 : 0;
        break;
    case 1:
        r = (s == 5) ? 7 : 1;
        break;
    case 0x81:
        r = (s == 5) ? 8 : 2;
        break;
    case 2:
        r = (s == 5) ? 5 : 3;
        break;
    case 0x82:
        r = (s == 5) ? 5 : 4;
        break;
    }
    func_0019BC38(r);
    func_001A2850(D_004CD758, r);
}
