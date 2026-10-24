extern u8 func_001D26E8[];
extern u8 func_001D7EB0[];
extern s32 D_001D2328[];
typedef struct { u8 pad[0xE90]; } Ent1855;
void TerminateThread(s32);
void DeleteThread(s32);
void func_0019738C(void *);
void func_00197244(void *);
void func_00197004(void);
void func_001874C8(void *);
void func_00187410(void);
void func_0019B038(void);
void func_00186A50(void);

void func_00185538(void) {
    s32 i;
    if (D_001D2328[0] != -1) {
        TerminateThread(D_001D2328[0]);
        DeleteThread(D_001D2328[0]);
        D_001D2328[0] = -1;
    }
    for (i = 0; i < 6; i++) {
        func_0019738C(&((Ent1855 *)(func_001D26E8 + 0xC8))[i]);
        func_00197244(&((Ent1855 *)(func_001D26E8 + 0xC8))[i]);
    }
    func_00197004();
    func_001874C8(func_001D7EB0 + 0x100);
    func_00187410();
    func_0019B038();
    func_00186A50();
}
