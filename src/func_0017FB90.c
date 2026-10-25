typedef struct { f32 x, y, z; } V3;
extern s32 D_0034BF18[];
extern u8 D_0040DB70[];
extern char D_00463DE8[], D_00463E08[], D_00463E18[], D_00463E28[], D_00463E38[], D_00463E48[];
extern u8 *D_004844A0;
extern s32 D_00484538, D_00484CA4, D_00484F40, D_00485C64, D_00485C68;
void func_00172BC8(s32, s32, s32, s32);
void func_00172F88(void);
void func_00174420(s32, s32, char *, s32);
void func_00265AC8(V3 *, V3 *);
s32 func_00303EB8(char *, char *, ...);

#define RND(v) ((s32)((v) >= 0.0f ? (v) + 0.5f : (v) - 0.5f))

void func_0017FB90(void)
{
    char buf[256];
    V3 a;
    V3 b;
    u8 *p;
    s32 w, x, y, z;

    if (D_00484F40 < 0) return;
    if (D_00484F40 >= D_00484538) return;
    p = *(u8 **)(D_0040DB70 + D_00484F40 * 0x5DB0);
    if (p == 0) return;
    a = *(V3 *)(p + 0x10);
    if (D_0034BF18[0] & 2) return;
    func_00172BC8(D_00484CA4, 7, 0x80404040, -1);
    if (*(s32 *)(D_004844A0 + 0x70)) {
        func_00265AC8(&b, &a);
        w = RND(a.x);
        x = RND(a.y);
        y = RND(b.x);
        z = RND(b.y);
        func_00303EB8(buf, D_00463DE8, w, x, y, z);
    } else {
        w = RND(a.x);
        x = RND(a.y);
        func_00303EB8(buf, D_00463E08, w, x);
    }
    func_00174420(0x140, 10, buf, 0x2710);
    func_00303EB8(buf, D_00463E18, D_00463E28, D_00463E38);
    func_00174420(0x140, 0x1A, buf, 0x2710);
    if (*(s32 *)(D_004844A0 + 0x70)) {
        func_00303EB8(buf, D_00463E48, D_00485C64, D_00485C68);
        func_00174420(0x140, 0x28, buf, 0x2710);
    }
    func_00172F88();
}
