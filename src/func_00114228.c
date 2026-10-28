extern s32 D_010C2B0C[], D_010C2B00[];
extern s32 D_001BD934[], D_001BD938[];
extern u8 func_001B9FD8[];
typedef struct { s32 cmd; long ptr; } Msg_114;
void *func_00113DD0(s32);
void func_0014CBF4(void *, void *, s32);

void func_00114228(s32 a)
{
    Msg_114 m;
    u8 pad[32];
    void *h;
    D_001BD934[0] = a;
    if (a >= 0 && a < D_010C2B0C[0]) {
        h = func_00113DD0(a);
        if (h) {
            if (D_001BD934[0] != D_001BD938[0] || D_010C2B00[0] != 1) {
                m.cmd = 0x61;
                m.ptr = (long)(func_001B9FD8 + 0x1738);
                func_0014CBF4(h, &m, 1);
            }
        }
    }
}
