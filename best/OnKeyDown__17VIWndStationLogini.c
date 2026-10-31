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

M2C_UNK SetFocus__5VIWndP5VIWndb(void *, M2C_UNK);  /* extern */
M2C_UNK SetText__9VIWndEditPCc(void *, void *);     /* extern */

void OnKeyDown__17VIWndStationLogini(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_3;
    s32 var_3;
    void *temp_5;

    switch (arg1) {                                 /* switch 1; irregular */
    case 0x86:                                      /* switch 1 */
        temp_3 = M2C_FIELD(arg0, s32 *, 0x398);
        if (temp_3 >= 0) {
            if (temp_3 < 2) {
                temp_5 = M2C_FIELD(arg0, void **, 0x224);
                M2C_FIELD(temp_5, s32 *, 0x1C) = 1;
                SetFocus__5VIWndP5VIWndb(temp_5, 1);
                temp_2 = M2C_FIELD(arg0, s32 *, 0x398);
                switch (temp_2) {                   /* switch 2; irregular */
                case 0:                             /* switch 2 */
                    SetText__9VIWndEditPCc(M2C_FIELD(arg0, void **, 0x224), arg0 + 0x24);
                    return;
                case 1:                             /* switch 2 */
                    SetText__9VIWndEditPCc(M2C_FIELD(arg0, void **, 0x224), arg0 + 0x124);
                    return;
                }
            } else {
                if (temp_3 != 2) {
                    return;
                }
                SetFocus__5VIWndP5VIWndb(NULL, 1);
            }
        } else {
            return;
        }
        break;
    case 0x8B:                                      /* switch 1 */
        var_3 = M2C_FIELD(arg0, s32 *, 0x398) + 1;
block_13:
        M2C_FIELD(arg0, s32 *, 0x398) = (s32) (var_3 % 3);
        break;
    case 0x8A:                                      /* switch 1 */
        var_3 = M2C_FIELD(arg0, s32 *, 0x398) + 2;
        goto block_13;
    }
}
