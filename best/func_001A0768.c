/* identical to func_002FC4C0 (matched), with its names changed by decompdecomp */
extern u8 D_00444A34[16];
extern u8 D_008EAB18[16];
s32 func_001AD740(s32);
s32 func_001AD760(s32);
void func_00144AC0(s32);
void *func_002FF8C0(void);
void *func_002FD0F0(s32, s32, s32);
s64 *func_002FAB30(u16, s32 *, s32);

void *func_002FAC28(s32 a0, s32 *a1, s32 a2) {
    s32 *obj = func_002FD0F0(a0, a2, a2);
    s32 idx;
    if (obj) {
        idx = *(u16 *)((char *)obj + 0x3f8);
        if (*(s8 *)((char *)obj + 0x3fc + idx + (s32)a1)) {
            s64 *p = func_002FAB30(idx, a1, 0);
            s64 v = *p;
            obj[0] = (s32)v;
        } else
            obj[0] = *a1;
        if (*((s8 *)obj + 0x477))
            obj[0] = *(s32 *)(obj[0] + obj[4]);
        obj[0] = obj[0] + obj[2];
    }
    return obj;
}

s64 func_001A0768(s32 arg0, void *arg1) {
    *(s32 *)((char *)arg1 + 0x8) = arg0;
    *(s32 *)((char *)arg1 + 0xC) = arg0;
    *(s32 *)((char *)arg1 + 0x4) = 0;
    *(s32 *)((char *)arg1 + 0x0) = 0;
    *(s32 *)((char *)arg1 + 0x10) = 0;
    func_001AD760(*(s32 *)D_00444A34);
    *(void **)((char *)arg1 + 0x14) = *(void **)D_008EAB18;
    *(void **)D_008EAB18 = arg1;
    return func_001AD740(*(s32 *)D_00444A34);
}

void *func_002FC558(s32 arg0) {
    void **pp;
    void *cur;
    func_001AD760(*(s32 *)D_00444A34);
    pp = (void **)D_008EAB18;
    cur = *pp;
    while (cur) {
        if (*(s32 *)((char *)cur + 0x8) == arg0) {
            s32 vc;
            *pp = *(void **)((char *)cur + 0x14);
            vc = *(s32 *)((char *)cur + 0xC);
            if (vc != 0 && vc != arg0)
                func_00144AC0(vc);
            func_001AD740(*(s32 *)D_00444A34);
            return cur;
        }
        pp = (void **)((char *)cur + 0x14);
        cur = *pp;
    }
    func_001AD740(*(s32 *)D_00444A34);
    return func_002FF8C0();
}
