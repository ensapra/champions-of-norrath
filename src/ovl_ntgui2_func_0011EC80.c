#include "context.h"

extern s32 D_010C5134[];
void func_00118140(void *, s32, s32, void *, s32);
s32 func_00118160(void *);
extern void func_0011EE00(void);

void ovl_ntgui2_func_0011EC80(void) {
    u8 stack[0x20];
    func_00118140(stack, 0, 0, func_0011EE00, 0);
    D_010C5134[0] = func_00118160(stack);
}
