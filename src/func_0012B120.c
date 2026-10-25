extern u8 D_001C5500[];
extern s32 D_001C4DBC[];
extern s32 D_010CD110[];
extern u8 D_004CA300[];
extern u8 D_001BB720[];
void func_0010B378(s32, void *);
void func_0012B4A8(void);
void func_0013BBA8(void);
void func_0013DE28(void *);

void func_0012B120(s32 a0, s64 a1) {
    s32 m = a1;
    switch (m) {
    case 0:
        D_001C5500[0x1310] = 1;
        break;
    case 1:
        D_001C5500[0x1310] = 0;
        break;
    }
    func_0013DE28(D_001C5500);
    func_0010B378(D_010CD110[D_001C4DBC[0]], D_004CA300);
    func_0010B378(D_010CD110[m], D_001BB720);
    func_0013BBA8();
    D_001C4DBC[0] = m;
    func_0012B4A8();
}
