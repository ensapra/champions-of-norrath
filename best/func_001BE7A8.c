extern s32 func_001671F8(const char *);
extern void func_00190E20(void *, s32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_00191868(void *, const char *);
extern void func_001918D8(void *, s32);
extern void func_00191938(void *, const char *);
extern f32 func_001AC358(s32);
extern f32 func_002F16D0(f32, f32);
extern void func_00303EB8(char *, const char *, ...);
extern char D_00468F10[], D_00468F28[], D_00468F38[], D_00468F48[], D_00468F58[], D_00468F68[], D_00468F80[], D_00484A60[], D_00484A90[], D_00484A98[], D_00484AA0[], D_00484AA8[], D_00484AB0[], D_00484AB8[], D_00484AC0[], D_00484AC8[], D_00484AD0[];
extern volatile f32 D_004805FC;
typedef struct { char pad[0x28]; u64 flags; } Q;
void func_001BE7A8(void *a0, Q *a1, s32 lvl) {
    char buf[512];
    u64 f;
    func_00191868(a0, D_00468F10);
    f = a1->flags;
    if (f & 0x20) {
        func_00303EB8(buf, D_00484A90);
        func_00191868(a0, buf);
        func_00191938(a0, D_00484A60);
        func_001918D8(a0, func_001671F8(D_00468F28));
    } else if (f & 0x40) {
        func_00303EB8(buf, D_00484A98, lvl * 15);
        func_00191868(a0, buf);
        func_00191938(a0, D_00484A60);
        func_001918D8(a0, func_001671F8(D_00484AA0));
    } else if (f & 0x80) {
        func_00303EB8(buf, D_00484AA8);
        func_00191868(a0, buf);
        func_00191938(a0, D_00484A60);
        func_001918D8(a0, func_001671F8(D_00468F38));
    } else if (f & 0x100) {
        func_00303EB8(buf, D_00484AB0);
        func_00191868(a0, buf);
        func_00191938(a0, D_00484A60);
        func_001918D8(a0, func_001671F8(D_00484AB8));
    } else if (f & 0x200) {
        func_00303EB8(buf, D_00484AC0, lvl * 15 + 0x78);
        func_00191868(a0, buf);
        func_00191938(a0, D_00484A60);
        func_001918D8(a0, func_001671F8(D_00468F48));
    } else if (f & 0x10) {
        func_00303EB8(buf, D_00484AC0, lvl * 10 + 0x6E);
        func_00191868(a0, buf);
        func_001918D8(a0, func_001671F8(D_00468F58));
    } else if (f & 0x40000) {
        func_00190E20(a0, func_001671F8(D_00468F68), (f32)(lvl * 2 + 0x3C), 0, 0, 0, 0, 0, 0, 0);
    } else if (f & 0x8000) {
        func_00303EB8(buf, D_00484AC8, (s32)func_002F16D0((f32)(lvl * 5), D_004805FC) + 5);
        func_00191868(a0, buf);
        func_00191938(a0, D_00484A60);
        func_001918D8(a0, func_001671F8(D_00484AD0));
    } else if (f & 0x20000) {
        s32 s = func_001671F8(D_00468F80);
        s32 i;
        f32 x = func_001AC358(lvl) * 100.0f;
        if (x >= 0)
            i = (s32)(func_001AC358(lvl) * 100.0f + 0.5f);
        else
            i = (s32)(func_001AC358(lvl) * 100.0f - 0.5f);
        func_00190E20(a0, s, (f32)i, 0, 0, 0, 0, 0, 0, 0);
    }
}
