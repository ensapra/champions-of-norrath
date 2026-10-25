typedef struct { u16 unk0; u16 unk2; u8 pad[0x5DB0 - 4]; } S_0040E3A0;
extern S_0040E3A0 D_0040E3A0[];
extern s8 D_00483829;
extern char D_00483A18[];
extern s32 D_0048453C;
extern s8 D_00485097;
s32 func_001353A8(s32);
s32 func_00135438(s32);
void func_00138758(s32, s32, s32 *);
void func_00138900(void *, s32);
void func_0013A478(void *);
s32 func_001671F8(char *);
void func_001C7600(s32, s32, s32, s32);
void func_001D0900(s32);

static inline s32 helper(void)
{
    S_0040E3A0 *p;
    s32 id;
    if (D_00483829 != 0) {
        id = D_0048453C;
        if (id != -1) {
            p = &D_0040E3A0[id];
            if (p->unk2 != 0) {
                if (func_001353A8(id) != 0) {
                    s32 t = func_001671F8(D_00483A18);
                    func_001C7600(t, 0xB4, func_00135438(0), 0);
                }
                return 1;
            }
            p->unk2 = 900;
        }
    }
    return 0;
}

s32 func_00139350(s32 arg0, s32 *arg1)
{
    u8 buf[0xA0];
    s32 v;
    s32 r;
    func_00138758(arg0, arg1[1], &v);
    func_00138900(buf, v);
    r = D_00485097;
    if (r == 0) {
        r = helper();
        if (r != 0) {
            return 0;
        }
    }
    func_001D0900(0);
    func_0013A478(buf);
    return 0;
}
