typedef struct {
    char pad0[0x5BD0];
    s32 state;
    char pad5BD4[0x5BEC - 0x5BD4];
    s32 slots[6];
    char pad5C04[0x5C38 - 0x5C04];
    s32 avail[6];
} Sys181A88;

extern Sys181A88 D_001D2340;
extern s32 D_001E24FC[];
extern char D_004CD718[];
extern char D_004CD730[];
void func_001A2850(const char *);

s32 func_00181A88(u32 mode)
{
    s32 i;
    s32 st;
    s32 *p;

    func_001A2850(D_004CD718);
    if (D_001E24FC[0] != 0) return 0;
    for (i = 0; i < 6; i++) {
        if ((u32)(D_001D2340.slots[i] - 2) < 2) break;
    }
    if (i == 6) return 0;
    if (D_001D2340.avail[3] < 0) return 0;
    if (D_001D2340.avail[2] < 0) return 0;
    st = D_001D2340.state;
    if (st == 2) {
        D_001D2340.state = 3;
    } else if (st == 3) {
        D_001D2340.state = 2;
    } else if (mode < 6) {
        if (D_001D2340.avail[mode] < 0) return 0;
        D_001D2340.state = mode;
        if (mode - 2 >= 2) return -1;
    }
    func_001A2850(D_004CD730);
    for (i = 0; i < 6; i++) {
        st = D_001D2340.slots[i];
        if (st == 3) {
            D_001D2340.slots[i] = 2;
        } else if (st == 2) {
            D_001D2340.slots[i] = 3;
        }
    }
    return 1;
}
