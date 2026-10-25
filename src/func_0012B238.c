extern void func_0010A4D0(s32, s32, s32);
extern void func_0010B378(s32, void *);
extern void func_0013BBD0(void);
extern s32 D_001BB6C4[], D_001BB710[], D_001BD888[], D_001C4DC0[], D_001C4DBC[];
extern s32 D_010CD110[], D_010CD118[];

void func_0012B238(s32 a, s64 b)
{
    s32 idx = b;
    D_001C4DC0[0] = idx;
    if (idx == 0) {
        if (D_001BD888[0] != 0)
            func_0010A4D0(D_001BD888[0], 1, 0x40);
    } else {
        if (D_001BD888[0] != 0)
            func_0010A4D0(D_001BD888[0], 0, 0x40);
    }
    D_001BB6C4[0] = D_010CD118[idx];
    func_0013BBD0();
    if (idx != D_001C4DBC[0])
        func_0010B378(D_010CD110[idx], D_001BB710);
}
