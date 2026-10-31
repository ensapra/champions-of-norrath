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

M2C_UNK Release__13TcpConnection(M2C_UNK *);        /* extern */
M2C_UNK ___14BlockAllocator(void *, M2C_UNK);       /* extern */
M2C_UNK __builtin_delete(void *);                   /* extern */
M2C_UNK __wrap_free(s32);                           /* extern */
M2C_UNK close(s32);                                 /* extern */
M2C_UNK sceLibnetTerminate(void *);                 /* extern */

void Release__10TcpManager(void *arg0) {
    s32 temp_2;
    s32 temp_4;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x68) - 1;
    M2C_FIELD(arg0, s32 *, 0x68) = temp_2;
    if ((temp_2 == 0) && (arg0 != NULL)) {
        if (M2C_FIELD(arg0, s32 *, 0x78) != 0) {
            close(M2C_FIELD(arg0, s32 *, 0x74));
        }
        if (M2C_FIELD(arg0, M2C_UNK **, 0x6C) != NULL) {
            do {
                M2C_FIELD(arg0, M2C_UNK **, 0x6C) = (M2C_UNK *) *M2C_FIELD(arg0, M2C_UNK **, 0x6C);
                Release__13TcpConnection(M2C_FIELD(arg0, M2C_UNK **, 0x6C));
                M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) - 1);
            } while (M2C_FIELD(arg0, M2C_UNK **, 0x6C) != NULL);
        }
        temp_4 = M2C_FIELD(arg0, s32 *, 0x8C);
        if (temp_4 != 0) {
            __wrap_free(temp_4);
            M2C_FIELD(arg0, s32 *, 0x8C) = 0;
            sceLibnetTerminate(arg0 + 0x90);
        }
        ___14BlockAllocator(arg0 + 0x7C, 2);
        __builtin_delete(arg0);
    }
}
