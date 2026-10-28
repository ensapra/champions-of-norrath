typedef struct { s32 v; char pad[0x3F8]; s8 flags[1]; } S2FAC28;
void *func_002FD0F0(s32, s32, s32);
s64 *func_002FAB30(u16, void *, s32);
s32 *func_002FAC28(s32 a0, S2FAC28 *a1, s32 a2) {
    s32 *obj = (s32 *)func_002FD0F0(a0, a2, a2);
    u16 idx;
    if (obj == 0) {
        return 0;
    }
    idx = *(u16 *)((char *)obj + 0x3F8);
    if (a1->flags[idx] != 0) {
        s64 *p = func_002FAB30(idx, a1, 0);
        s64 v = *p;
        obj[0] = (s32)v;
    } else {
        obj[0] = a1->v;
    }
    if (*((s8 *)obj + 0x477) != 0) {
        obj[0] = *(s32 *)(obj[0] + obj[4]);
    }
    obj[0] = obj[0] + obj[2];
    return obj;
}
