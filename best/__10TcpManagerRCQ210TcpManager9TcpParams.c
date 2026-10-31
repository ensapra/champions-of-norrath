/* machine draft (m2c) for ee-gcc-2.96 -Os -G8 -mno-check-zero-division, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK __14BlockAllocatorUiUi(void *, s32, s32, M2C_UNK, M2C_UNK); /* extern */
s32 __wrap_memalign(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK sceLibnetInitialize(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_0118E54C;

void __10TcpManagerRCQ210TcpManager9TcpParams(void *arg0, void *arg1) {
    void *temp_6;

    temp_6 = arg0 + 4;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(temp_6, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(temp_6, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(temp_6, s32 *, 0x4C) = (s32) M2C_FIELD(arg1, s32 *, 0x4C);
    M2C_FIELD(temp_6, s32 *, 0x50) = (s32) M2C_FIELD(arg1, s32 *, 0x50);
    M2C_FIELD(temp_6, s32 *, 0x54) = (s32) M2C_FIELD(arg1, s32 *, 0x54);
    M2C_FIELD(temp_6, s32 *, 0x58) = (s32) M2C_FIELD(arg1, s32 *, 0x58);
    M2C_FIELD(arg0, s32 *, 0x74) = -1;
    M2C_FIELD(arg0, s32 *, 0x68) = 1;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    __14BlockAllocatorUiUi(arg0 + 0x7C, M2C_FIELD(arg1, s32 *, 0x50), M2C_FIELD(arg1, s32 *, 0x54), 1, -1);
    M2C_FIELD(arg0, s32 *, 0x8C) = __wrap_memalign(0x40, 0x800);
    sceLibnetInitialize(arg0 + 0x90, 0x800, 0x2000, 0x20);
    D_0118E54C = 0;
}
