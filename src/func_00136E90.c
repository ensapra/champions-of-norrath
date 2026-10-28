typedef struct {
    char pad0[0x80];
    s32 id;
    char pad84[0x24];
    void *cb;
    s32 padAC;
    void *cb2;
    char padB4[0xC];
} Widget;

extern void func_001050A8(Widget *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_00105190(Widget *);
extern void func_0010B378(s32, void *);
extern void func_0014CF30(s32, s32 *, s32 *);
extern void func_0014D048(s32, s32 *, s32 *);
extern void func_001A2660(void *, s32, s32);
extern void func_00105078(void);
extern void func_00105090(void);
extern void func_00136E30(void);
extern s32 D_010CE390[];
extern s32 D_010CE3B0[];
extern s32 D_010CE3D0[];

void func_00136E90(s32 idx)
{
    char buf[0x10];
    Widget w1;
    Widget w2;
    s32 x, y, wd, ht;
    char *pb = buf;

    func_001A2660(pb, 0, 0x10);
    func_0014D048(D_010CE3B0[idx], &x, &y);
    func_0014CF30(D_010CE3B0[idx], &wd, &ht);
    func_001050A8(&w1, D_010CE3D0[0], 0xB, 0, 1, 0, x, y, x + wd, y + ht);
    w1.cb = func_00105078;
    func_00105190(&w1);
    func_001050A8(&w2, D_010CE3D0[0], 0xB, 2, 0x14, 0, 0, 0x55, 0, 0x6F);
    w2.id = idx;
    w2.cb = func_00105090;
    w2.cb2 = func_00136E30;
    func_00105190(&w2);
    func_0010B378(D_010CE390[idx], pb);
}
