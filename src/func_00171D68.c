extern s32 D_001CD180[];
extern s32 D_001CD184[];
extern u8 D_001CD190[];
extern u8 D_001CD1A0[];
extern u8 D_001CD1B0[];
extern u8 D_001CD1C0[];
extern u8 D_001CD1D0[];
extern u8 D_001CD1E0[];
extern u8 D_001CD1F0[];
extern u8 *D_010E4590[];
extern u8 *D_010E4610[];
void func_00192C40(void *, void *, void *, void *);
void func_00192D00(void *, void *, void *, void *, void *);
s32 func_001787F8(void *, s32);

void func_00171D68(void) {
    s32 i;
    for (i = 0; i < D_001CD180[0]; i++) {
        func_00192C40(D_010E4610[i] + 0x100, D_001CD190, D_001CD1A0, D_001CD1B0);
        func_00192D00(D_010E4610[i] + 0x180, D_001CD1C0, D_001CD1D0, D_001CD1E0, D_001CD1F0);
    }
    for (i = 0; i < D_001CD180[0]; i++) {
        D_001CD184[0] = func_001787F8(D_010E4590[i], 3);
    }
}
