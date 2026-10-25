s8 D_00486AFC;
s8 D_00486AFD;
s8 D_00483829;
s32 D_0048440C;
extern s8 D_0034B660[];
s32 func_001C7DB8(s32);
void func_001D1108(void *);
void func_0025BFE8(void);
s32 func_0025C008(void);
s32 func_003044FC(void *, s32);
void func_00191648(void (*)(void));
void func_001CD7C0(void) {
    char sp[0x40];
    s8 st = D_00486AFC;
    switch (st) {
    case 0:
        if (func_001C7DB8(4) == 0x80) {
            D_00486AFC = (u8)D_00486AFC + 1;
        }
        break;
    case 1:
        D_0048440C = st;
        if (D_00486AFD != 0) {
            D_00483829 = st;
        }
        func_0025BFE8();
        D_00486AFC = (u8)D_00486AFC + 1;
        break;
    case 2:
        if (D_0034B660[0] == 0) {
            func_001D1108(sp);
            if (func_003044FC(sp, func_0025C008()) == 0) {
                func_00191648(func_001CD7C0);
            }
        }
        break;
    }
}
