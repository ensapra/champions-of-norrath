typedef struct { u8 pad[5]; u8 f; u8 pad2[0x22]; } E7D0440;
extern E7D0440 D_007D0440[4];
void func_00164050(E7D0440 *, s32);
void func_001C18D8(s32 init, s32 prio) {
    if (prio == 0xFFFF && init == 1) {
        E7D0440 *p = D_007D0440;
        s32 i = 3;
        while (i != -1) {
            p->f = 1;
            i--;
            p++;
        }
    }
    if (prio == 0xFFFF && init == 0) {
        E7D0440 *base = D_007D0440;
        if (base != 0) {
            E7D0440 *p = base + 4;
            if (p != base) {
                do {
                    p--;
                    func_00164050(p, 2);
                } while (p != D_007D0440);
            }
        }
    }
}
