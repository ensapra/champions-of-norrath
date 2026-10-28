typedef struct { s32 a; s32 state; s32 c; s32 d; } Slot;
extern s32 D_00444A00[];
extern Slot D_008E19C0[];
extern void SignalSema_2(s32);
extern s32 WaitSema_2(s32);
extern void func_002D8998(void);

Slot *func_002D89F8(void) {
    Slot *p;
    func_002D8998();
    WaitSema_2(D_00444A00[0]);
    p = D_008E19C0;
    while (p < &D_008E19C0[0] + 32) {
        if (p->state == 0) {
            p->state = 0x10000000;
            SignalSema_2(D_00444A00[0]);
            return p;
        }
        p++;
    }
    SignalSema_2(D_00444A00[0]);
    return 0;
}
