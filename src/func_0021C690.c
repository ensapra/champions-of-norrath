typedef struct { s32 a,b,c; } P12;
void func_00157668(void *, void *, s16);
void func_00156CB0(void *, s32, s16);
void func_0016AE78(s32,s32,s32,void*,void*,s32,s32,s32,s32);
void func_0021C690(void *arg0) {
    u8 sp10[0x40]; P12 sp50, sp60;
    void *p = *(void **)((u8*)arg0 + 0x24);
    s32 x = *(s32*)((u8*)p + 0xC), y = *(s32*)((u8*)p + 0x14);
    s32 ang = *(u16*)((u8*)arg0 + 0x38) + -0x8000;
    sp50 = *(P12*)((u8*)arg0 + 0x10);
    func_00157668(sp10, &sp50, (s16)ang);
    func_00156CB0(sp10, 0, *(s16*)((u8*)arg0 + 0x58));
    sp60 = *(P12*)((u8*)arg0 + 0x10);
    func_0016AE78(x, y, 3, &sp60, sp10, 0, -1, 0, 0);
}
