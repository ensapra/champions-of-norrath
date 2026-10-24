typedef struct {
    u8 pad0[0x30];
    s32 tid;
    s32 pad34[2];
    s32 f3C;
} S_008EBDD8;
extern S_008EBDD8 D_008EBDD8;
s32 SuspendThread_2(s32);

s32 func_002E7188(void) {
    S_008EBDD8 *s = &D_008EBDD8;
    if (s->tid == 0) {
        return 0x80000000;
    }
    if (SuspendThread_2(s->tid) == s->tid) {
        s->f3C = 1;
        return 0;
    }
    return 0x80000000;
}
