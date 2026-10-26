extern f32 D_00480F14;
extern char D_0046EAF0[];

s32 func_0010A428(void *, s32);
void func_0010D428(void *, s32);
s32 func_0010EBF8(void *, s32);
void func_0010FC20(void *, void *);
s32 func_00111830(void *, s32);
void func_00111490(void *, f32);
void func_00112A98(void *);
s32 func_00112C68(void *, s32, f32);
s32 func_00112E08(void *, s32);
void func_00112E18(void *, s32, s32, s32, s32, s32, f32);
void func_001130B8(void *);
void func_00113128(void *, s32);
void func_00143878(void *);
s32 func_00153FA8(void *);
void func_0024AF80(s32);
void func_0024EED0(void *, s32);
void func_00303EB8(void *, void *, s32, ...);

void func_001F82A0(void *a) {
    /* minimal */
    if (*(s32 *)((u8*)a + 0xEC) != 0) {
        if (*(s32 *)((u8*)a + 0x3C0) == 0) {
            if (*(u64 *)((u8*)a + 0xA0) & 1) {
                func_0024AF80(0);
                func_00303EB8((void*)0, D_0046EAF0, (func_00153FA8(a) & 3) + 1);
                func_0024EED0((void*)0, 0x103);
                *(s32 *)((u8*)a + 0x3C0) = 1;
            }
        }
    }
    func_0010D428(a, *(s32 *)(*(char**)((u8*)a+0x24) + 0xC));
    if (func_0010EBF8(a, *(s32 *)(*(char**)((u8*)a+0x24) + 0xC)) == 0 && func_0010A428(a, 0x258) != 0) {
        /* skip */
    }
}
