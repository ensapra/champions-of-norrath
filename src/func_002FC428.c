extern u8 D_00444A34[16];
extern u8 D_008EAB18[16];
s32 SignalSema_2(s32);
s32 WaitSema_2(s32);
void func_00144AC0(s32);
void *func_002FF8C0(void);
void *func_002FD0F0(s32, s32, s32);
s64 *func_002FAB30(u16, s32 *, s32);

void *func_002FAC28(s32 a0, s32 *a1, s32 a2) {
    s32 *obj = func_002FD0F0(a0, a2, a2);
    s32 idx;
    if (obj) {
        idx = *(u16 *)((char *)obj + 0x3f8);
        if (*(s8 *)((char *)obj + 0x3fc + idx + (s32)a1))
            obj[0] = (s32)*func_002FAB30(idx, a1, 0);
        else
            obj[0] = *a1;
        if (*((s8 *)obj + 0x477))
            obj[0] = *(s32 *)(obj[0] + obj[4]);
        obj[0] += obj[2];
    }
    return obj;
}

s64 func_002FC428(s32 arg0, void *arg1) {
    *(s32 *)((char *)arg1 + 0x8) = arg0;
    *(s32 *)((char *)arg1 + 0x4) = 0;
    *(s32 *)((char *)arg1 + 0x0) = 0;
    *(s32 *)((char *)arg1 + 0xC) = 0;
    *(s32 *)((char *)arg1 + 0x10) = 0;
    WaitSema_2(*(s32 *)D_00444A34);
    *(void **)((char *)arg1 + 0x14) = *(void **)D_008EAB18;
    *(void **)D_008EAB18 = arg1;
    return SignalSema_2(*(s32 *)D_00444A34);
}

s64 func_002FC4C0(s32 arg0, void *arg1) {
    *(s32 *)((char *)arg1 + 0xC) = arg0;
    *(s32 *)((char *)arg1 + 0x8) = arg0;
    *(s32 *)((char *)arg1 + 0x4) = 0;
    *(s32 *)((char *)arg1 + 0x0) = 0;
    *(s32 *)((char *)arg1 + 0x10) = 0;
    WaitSema_2(*(s32 *)D_00444A34);
    *(void **)((char *)arg1 + 0x14) = *(void **)D_008EAB18;
    *(void **)D_008EAB18 = arg1;
    return SignalSema_2(*(s32 *)D_00444A34);
}

void *func_002FC558(s32 arg0) {
    void **pp;
    void *cur;
    WaitSema_2(*(s32 *)D_00444A34);
    pp = (void **)D_008EAB18;
    for (cur = *pp; cur; cur = *pp) {
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
    }
    SignalSema_2(*(s32 *)D_00444A34);
    return func_002FF8C0();
}
