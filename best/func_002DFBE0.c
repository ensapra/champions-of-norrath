#include "context.h"

extern s32 Copy_10(s32, s32 *, s32);
extern s32 FlushCache_2(s32);
extern s32 GetEntryAddress_8(s32);
extern s32 SetSyscall_12(s32, s32);

extern s32 D_004459D0;
extern s32 D_00445D48;
extern s32 D_00445D50[16];

void func_002DFBE0(void) {
    s32 dummy[8]; /* force larger frame 0x40 */
    s32 *var_17;
    s32 temp_4;
    s32 var_4;
    u32 var_18;

    var_18 = 3;
    var_17 = &D_00445D50[6];
    SetSyscall_12(D_00445D50[0], D_00445D50[2]);
    Copy_10(0x80075000, &D_004459D0, 0x330);
    FlushCache_2(0);
    FlushCache_2(2);
    SetSyscall_12(D_00445D50[4], D_00445D50[6]);
    SetSyscall_12(D_00445D50[5], D_00445D50[7]);
    var_4 = D_00445D50[8];
loop_1:
    var_18 += 1;
    temp_4 = *var_17;
    var_17 += 8;
    SetSyscall_12(temp_4, GetEntryAddress_8(var_4));
    if (var_18 < 8U) {
        var_4 = *var_17;
        goto loop_1;
    }
    D_00445D48 = GetEntryAddress_8(3);
}
