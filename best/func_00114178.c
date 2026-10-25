extern s32 D_001BD934[], D_001BD938[], D_010C2B0C[], D_010C2B00[];
typedef struct { s32 cmd; long ptr; } Msg_114;
void *func_00113DD0(void);
void func_001A2660(void *, s32, s32);
void func_0014CBF4(void *, void *, s32);

void func_00114178(void)
{
    u8 buf[16];
    Msg_114 m;
    u8 pad[32];
    void *h;
    Msg_114 *p;
    if (D_001BD934[0] < 0) return;
    if (D_001BD934[0] >= D_010C2B0C[0]) return;
    h = func_00113DD0();
    if (h == 0) return;
    if (D_001BD934[0] == D_001BD938[0] && D_010C2B00[0] == 1) return;
    func_001A2660(buf, 0, 16);
    p = &m;
    p->cmd = 0x61;
    m.ptr = (s32)buf;
    func_0014CBF4(h, p, 1);
}
