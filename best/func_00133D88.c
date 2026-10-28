extern s32 D_001BB6C0[];
extern s32 D_001C5334[];
extern u8 D_004CAD30[];
s32 D_010CDB70[];
s32 func_001169E8(void);
void func_0010B378(s32, void*);
void func_0014D49C(s32, s32);

void func_00133D88(s32 arg0, s64 arg1) {
    s32 n = (s32)arg1;
    if (func_001169E8() == 2) {
        func_0010B378(D_010CDB70[n], D_004CAD30);
        if (D_001BB6C0[0] != 0) {
            if (D_001C5334[0] == 0) {
                func_0014D49C(arg0, 0);
                D_001BB6C0[0] = 0;
            }
        }
        D_001C5334[0] = 0;
    }
}
