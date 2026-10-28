/* func_002D3C78: 25-insn table check function */
#include "context.h"

extern u8 D_008DD8D0;
void *func_002D39B0(s32, s32);

s32 func_002D3C78(s32 arg0, s32 arg1, s32 arg2) {
    s32 idx = (arg1 * 0x1C);
    if (*(s32 *)((s8 *)&D_008DD8D0 + idx + 0x10) == 0) {
        return 0;
    }
    *(u8 *)((u8 *)func_002D39B0(arg0, arg0) + 0x71) = (u8)arg2;
    return 1;
}
