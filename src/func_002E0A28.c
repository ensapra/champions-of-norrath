extern s32 func_002D7908(s32);
extern s32 GetThreadId_2(void);
extern s32 func_002D84A8(void *, s32);
extern s32 func_002D8540(void *, s32, void *, void *, s32, s32, void *);
extern s32 func_002D8958(void *);
extern void func_002E0A98(void);
extern s32 D_008E6A80[], D_008E6AC0[], D_008E6AD8[];
void func_002E0A28(void) {
    func_002D7908(0);
    func_002D84A8(D_008E6AC0, GetThreadId_2());
    func_002D8540(D_008E6AD8,0x80000704,func_002E0A98,D_008E6A80,0,0,D_008E6AC0);
    func_002D8958(D_008E6AC0);
}
