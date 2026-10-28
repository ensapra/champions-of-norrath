extern u8 func_01000000[];
s32 func_00178D20(u32);
#define ROOT (*(u32 *)(func_01000000 + 0xEB5F8))
#define CUR (((u32 *)ROOT)[1])
#define PK ((u32 *)CUR)
void func_00178D78(u32 value) {
    if (func_00178D20(ROOT) <= 0) return;
    if (value == 0) return;
    PK[3] = 0;
    PK[2] = 0;
    PK[1] = value & 0x0FFFFFFF;
    PK[0] = 0x50000000;
    ((u32 *)(CUR += 0x10))[3] = 0;
    PK[2] = 0;
    PK[1] = 0;
    PK[0] = 0x70000000;
}
