extern u8 D_00444A34[16];
extern u8 D_008EAB18[16];
s32 SignalSema_2(s32);
s32 WaitSema_2(s32);
void func_00144AC0(s32);
void *func_002FF8C0(void);

void *func_002FC558(s32 arg0) {
    void **pp;
    void *cur;
    void *t;
    WaitSema_2(*(s32 *)D_00444A34);
    pp = (void **)D_008EAB18;
    cur = *pp;
    if (cur) {
        do {
            if (*(s32 *)((char *)cur + 0x8) == arg0) {
                s32 vc;
                *pp = *(void **)((char *)cur + 0x14);
                vc = *(s32 *)((char *)cur + 0xC);
                if (vc != 0 && vc != arg0)
                    func_00144AC0(vc);
                SignalSema_2(*(s32 *)D_00444A34);
                return cur;
            }
            pp = (void **)((char *)cur + 0x14);
            t = *pp;
            cur = t;
        } while (t);
    }
    SignalSema_2(*(s32 *)D_00444A34);
    return func_002FF8C0();
}
