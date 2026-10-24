typedef struct {
    s32 state;
    u8 pad4[0x14];
    s32 x;
    s32 y;
    u8 pad20[0xC];
    s32 flag;
} Ctx171;

extern s32 D_001D0224[];
extern Ctx171 D_001D0228;
s32 func_00171A70(void);

s32 func_00171F38(void) {
    Ctx171 *c = &D_001D0228;
    c->flag = 1;
    if (c->state != 1) {
        return 0;
    }
    if (func_00171A70()) {
        return D_001D0224[0] == 0;
    }
    return D_001D0224[0];
}
