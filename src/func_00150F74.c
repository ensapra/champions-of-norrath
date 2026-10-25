#include "context.h"

s32 func_00152944(s32 arg0, s32 arg1);

s32 func_00150F74(void *arg0, s32 arg1) {
    s32 v0 = 0;
    if (arg1 == 0) {
        return v0;
    }
    v0 = func_00152944(arg1, *(s32 *)((u8 *)arg0 + 0x848));
    if (v0 != 0) {
        v0 = 1;
        *(s32 *)((u8 *)arg0 + 0x854) = *(s32 *)((u8 *)arg0 + 0x854) + 1;
        return v0;
    }
    return v0;
}
