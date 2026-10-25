typedef struct { s32 state; s32 pad[7]; s16 x; s16 pad2; s16 y; s16 pad3; s32 f28; } S_001D0228;
extern s32 D_001D0220[];
extern s32 D_001D0224[];
extern S_001D0228 D_001D0228;
extern u8 D_010E46F0[];
s32 ovl_ntgui2_func_0018E4A0(s32);
void func_00172C70(s32);
void func_0018E440(void *, s32);
void func_0018F4F8(void *, s16, s16, s16, S_001D0228 *);

void func_00172E78(void) {
    s32 *cnt = D_001D0220;
    u8 *base = D_010E46F0;
    s32 *flag = D_001D0224;
    S_001D0228 *s;
    (*cnt)++;
    *flag = ovl_ntgui2_func_0018E4A0(0) == 0;
    func_00172C70(*flag);
    func_0018E440(base, *cnt);
    s = &D_001D0228;
    if (s->state == 1) {
        s->f28 = *flag;
        func_0018F4F8((*cnt & 1) ? base + 0x150 : base + 0x60, s->x, s->y, *flag, s);
    } else {
        s->f28 = 0;
    }
}
