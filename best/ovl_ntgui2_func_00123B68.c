extern s32 func_0013B6F0(void*,s32); extern void func_0013B5F8(void*,void*); extern void func_0013DE28(void*);
extern void func_0011DA20(s32,s32); extern s32 func_001A4174(void*,void*); extern s32 func_0011BA18(s32);
extern void func_00114948(s32,s32,s32,s32,s32,s32);
extern char D_004C9C80[], D_004C9C40[], D_010C7660[], D_001C5500[];
extern s32 D_001C6838[], D_001C682C[], D_001BB6C4[];
void ovl_ntgui2_func_00123B68(void) {
    if (func_0013B6F0(D_004C9C80, -1) == 0) {
        s32 i = 0, off = 0;
        if (D_001C6838[0] > 0) {
            do {
                if (func_001A4174(D_010C7660, (char*)D_001C682C[0] + off + 0x10C) == 0) {
                    func_00114948(2, 500, 250, func_0011BA18(60), 0, D_001BB6C4[0]);
                    return;
                }
                off += 0x20C; i++;
            } while (i < D_001C6838[0]);
        }
    }
    func_0013B5F8(D_004C9C40, D_010C7660);
    func_0013DE28(D_001C5500);
    func_0011DA20(1, 0x13);
}
