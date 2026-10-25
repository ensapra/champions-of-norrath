extern u8 D_004CAD80[], D_004CAD90[], D_001C6600[], D_001BD768[];
s32 func_0013B6F0(void *, s32);
void func_001A42B8(void *, void *);
void func_0011DA20(s32, s32);
void func_00135898(void) {
    if (func_0013B6F0(D_004CAD80, -1) == 0) {
        D_001BD768[0] = D_004CAD90[0];
    }
    func_001A42B8(D_001C6600, D_001BD768);
    func_0011DA20(6, -1);
}
