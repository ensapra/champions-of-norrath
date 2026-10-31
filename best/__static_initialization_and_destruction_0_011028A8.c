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

extern M2C_UNK D_011B0110;
extern M2C_UNK D_011B0118;
extern M2C_UNK D_011B0120;
extern M2C_UNK D_011B0128;
extern M2C_UNK D_011B0130;
extern M2C_UNK D_011B0140;
extern M2C_UNK D_011B0148;
extern M2C_UNK D_011B0150;
extern M2C_UNK D_011B0160;
extern M2C_UNK D_011B0170;

void __static_initialization_and_destruction_0_011028A8(s32 arg0, s32 arg1) {
    if ((arg1 == 0xFFFF) && (arg0 == 1)) {
        M2C_FIELD(&D_011B0110, f32 *, 4) = 0.0f;
        M2C_FIELD(&D_011B0110, f32 *, 0) = 0.0f;
        if (arg0 == 1) {
            M2C_FIELD(&D_011B0118, s16 *, 2) = 0;
            M2C_FIELD(&D_011B0118, s16 *, 0) = 0;
            if (arg0 == 1) {
                M2C_FIELD(&D_011B0120, f32 *, 4) = 0.0f;
                M2C_FIELD(&D_011B0120, f32 *, 0) = 0.0f;
                if (arg0 == 1) {
                    M2C_FIELD(&D_011B0128, s16 *, 2) = 0;
                    M2C_FIELD(&D_011B0128, s16 *, 0) = 0;
                    if (arg0 == 1) {
                        M2C_FIELD(&D_011B0130, f32 *, 8) = 0.0f;
                        M2C_FIELD(&D_011B0130, f32 *, 0) = 0.0f;
                        M2C_FIELD(&D_011B0130, f32 *, 4) = 0.0f;
                        if (arg0 == 1) {
                            M2C_FIELD(&D_011B0140, s8 *, 2) = 0;
                            M2C_FIELD(&D_011B0140, s8 *, 0) = 0;
                            M2C_FIELD(&D_011B0140, s8 *, 1) = 0;
                            if (arg0 == 1) {
                                M2C_FIELD(&D_011B0148, s8 *, 3) = -1;
                                M2C_FIELD(&D_011B0148, s8 *, 0) = 0;
                                M2C_FIELD(&D_011B0148, s8 *, 1) = 0;
                                M2C_FIELD(&D_011B0148, s8 *, 2) = 0;
                                if (arg0 == 1) {
                                    M2C_FIELD(&D_011B0150, s8 *, 3) = 0;
                                    M2C_FIELD(&D_011B0150, s8 *, 0) = 0;
                                    M2C_FIELD(&D_011B0150, s8 *, 1) = 0;
                                    M2C_FIELD(&D_011B0150, s8 *, 2) = 0;
                                    if (arg0 == 1) {
                                        M2C_FIELD(&D_011B0160, f32 *, 0xC) = 0.0f;
                                        M2C_FIELD(&D_011B0160, f32 *, 0) = 0.0f;
                                        M2C_FIELD(&D_011B0160, f32 *, 4) = 0.0f;
                                        M2C_FIELD(&D_011B0160, f32 *, 8) = 0.0f;
                                        if (arg0 == 1) {
                                            M2C_FIELD(&D_011B0170, s8 *, 3) = 0;
                                            M2C_FIELD(&D_011B0170, s8 *, 0) = 0;
                                            M2C_FIELD(&D_011B0170, s8 *, 1) = 0;
                                            M2C_FIELD(&D_011B0170, s8 *, 2) = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
