extern u8 func_001D1C80[];
extern u8 func_001E23F8[];
extern u8 jtbl_004C006C[];
void func_001A2850(void *);
void func_0019738C(void *);
void func_00182918(u8);
void func_0019B704(void);
typedef struct { u8 b[0xE90]; } SE90;

void func_00184980(void) {
    u8 *p = func_001D1C80 + 0x6C0;
    SE90 *items;
    s32 idx;
    func_001A2850(jtbl_004C006C + 0xD9B4);
    idx = *(s32 *)(p + 0x5BD0);
    items = (SE90 *)(p + 0x470);
    func_0019738C(&items[idx]);
    *(s32 *)(p + 0x404) = 1;
    *(s32 *)(p + 0x5C58) = func_001E23F8[0x48];
    *(s32 *)(p + 0x5C5C) = 0;
    *(s32 *)(p + 0x5C60) = 0;
    func_00182918(func_001E23F8[0x48]);
    func_0019B704();
}
