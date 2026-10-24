typedef struct {
    u8 pad[0x80];
    s32 x;
    s32 y;
} S_10F44A8;
extern S_10F44A8 D_010F44A8;
void func_00186AC0(s32 a, s32 b) {
    S_10F44A8 *p = &D_010F44A8;
    p->x = a << 4;
    p->y = b << 4;
}
