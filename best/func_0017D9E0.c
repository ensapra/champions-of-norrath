extern char func_001D1C80[];
extern char func_01000000[];
void func_0017D568(s32, s32, ...);
s32 func_001B0C50(void *, void *);
s32 func_001B0CE8(void *);
s32 TerminateThread(s32);
s32 DeleteThread(s32);
#define G(off) (*(s32 *)(func_001D1C80 + (off)))

s32 func_0017D9E0(void) {
    s32 ret;
    if (G(0x434) < 0) return -1;
    func_0017D568(1, 0x8170, 0, 0);
    ret = 0;
    func_0017D568(1, 0x8160, 0, 0, 0);
    func_0017D568(1, 0x8160, 1, 0, 0);
    func_0017D568(1, 0xE630);
    G(0x410) = 0;
    G(0x414) = 0;
    G(0x418) = 0;
    G(0x41C) = 0;
    G(0x420) = 0;
    G(0x424) = 0;
    G(0x428) = 0;
    G(0x42C) = 0;
    G(0x430) = 0;
    if (!func_001B0C50(func_01000000 + 0xEE018, func_01000000 + 0xEE000)) ret = -1;
    if (!func_001B0CE8(func_01000000 + 0xEE000)) ret = -1;
    if (TerminateThread(G(0x434)) < 0) ret = -1;
    if (DeleteThread(G(0x434)) < 0) ret = -1;
    G(0x434) = -1;
    return ret;
}
