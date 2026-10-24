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
    if (p->snd != -1) {
        func_0019BC38(p->snd);
        p->snd = -1;
    } else {
        func_0019BC38(5);
    }
    p = W;
    func_001A2850(jtbl_004C006C + 0xD7E4, p->snd);
}

typedef struct {
    u8 pad[0x41C];
    u8 r, g, b, a;
} Col;
extern s32 D_001D2180[];
void func_0017FDE4(s32, s32, s32, s32);
void func_0017FCEC(s32, s32);
void func_0017FF74(s32, s32, s32);
void func_00182418(s32 a, s32 b, s32 c, s32 d) {
    Col *p = (Col *)(func_001D1C80 + 0x6C0);
    func_0017FDE4(p->r, p->g, p->b, p->a);
    func_0017FCEC(c, d - D_001D2180[0]);
    func_0017FF74(b, a, 0xC0000);
}
