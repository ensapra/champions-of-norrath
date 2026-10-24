extern u8 func_001D1C80[];
extern u8 jtbl_004C006C[];
void func_0019BC38(s32);
void func_001A2850(void *, s32);
typedef struct {
    u8 pad[0x5C50];
    s32 snd;
} Work;
#define W ((Work *)(func_001D1C80 + 0x6C0))

void func_001824D0(void) {
    Work *p = W;
    Work *q;
    if (p->snd != -1) {
        func_0019BC38(p->snd);
        p->snd = -1;
    } else {
        func_0019BC38(5);
    }
    q = W;
    func_001A2850(jtbl_004C006C + 0xD7E4, q->snd);
}
