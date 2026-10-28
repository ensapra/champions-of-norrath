typedef struct { s32 a,b,c; } P12;
typedef struct { f32 x,y,z; } F3;
void func_001577D0(void *, void *, s16, f32);
void func_00156CB0(void *, s32, s16);
void func_0016AE78(s32,s32,s32,void*,void*,s32,u64,s32,s32);
void func_00216878(void *arg0) {
    u8 sp10[0x40]; P12 sp50; F3 sp60;
    void *p = *(void **)((u8*)arg0 + 0x24);
    sp50 = *(P12*)((u8*)arg0 + 0x10);
    func_001577D0(sp10, &sp50, *(s16*)((u8*)arg0 + 0x38), *(f32*)((u8*)arg0 + 0xE0));
    func_00156CB0(sp10, 1, *(s16*)((u8*)arg0 + 0x3C0));
    sp60.x = *(f32*)((u8*)arg0 + 0x10);
    sp60.y = *(f32*)((u8*)arg0 + 0x14);
    sp60.z = *(f32*)((u8*)arg0 + 0x18) + *(f32*)((u8*)arg0 + 0x20) * 0.5f;
    func_0016AE78(*(s32*)((u8*)*(void **)((u8*)arg0 + 0x24) + 0x1C), *(s32*)((u8*)*(void **)((u8*)arg0 + 0x24) + 0x24), 1, &sp60, sp10, 0, *(u64*)((u8*)arg0 + 0x228), 0, 0);
    p = *(void **)((u8*)arg0 + 0x24);
    func_0016AE78(*(s32*)((u8*)p + 0xC), *(s32*)((u8*)p + 0x14), 1, &sp60, sp10, 0, *(u64*)((u8*)arg0 + 0x228), 0, 0);
}
