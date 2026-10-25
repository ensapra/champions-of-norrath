extern s32 D_010E4590[];
extern s32 D_010E45B0[];
extern s32 D_010E45D0[];
extern s32 D_010E45F0[];
extern u8 *D_010E4610[];
extern u8 *D_010E4630[];
extern char D_001CD0E8[];
extern s32 D_001CD180[];
extern s32 D_001CD184[];
extern char D_004CC028[];
extern char D_004CC030[];
extern char D_004CC038[];
void func_00178670(void);
void func_00178750(s32, void *, s32 *);
s32 func_001787F8(s32, s32);
s32 func_00178A30(s32, u8 **, void *);

void func_00171AF8(s32 a0, s32 idx) {
    u8 *sp0;
    s32 t;

    func_00178670();
    func_00178750(a0, D_004CC028, &D_010E4590[idx]);
    func_00178750(a0, D_004CC030, &D_010E45B0[idx]);
    func_00178750(a0, D_004CC038, &D_010E45D0[idx]);
    D_001CD184[0] = func_001787F8(D_010E4590[idx], 1);
    func_00178A30(D_010E45B0[idx], &sp0, D_001CD0E8);
    D_010E4610[idx] = sp0 + 0x10;
    func_00178A30(D_010E45D0[idx], &sp0, D_001CD0E8 + 0x48);
    D_010E4630[idx] = sp0 + 0x20;
    t = *(s32 *)(sp0 + 0x1C);
    D_001CD180[0] += 1;
    D_010E45F0[idx] = t;
}
