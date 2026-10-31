extern u8 shopItemSetAttributes__FiiPcPQ24item11description[];

s32 D_010C21D8[4];
s32 D_010C21F0[4];
s32 D_010C21F8[4];
s32 D_001BD8C0[4];

void func_00107C00(void *a, void *b);
void ovl_ntgui2_func_00108E58(void *a, void *b, void *c, s32 d, s32 e);
void func_0014CBF4(s32 a, void *b, s32 c);

typedef struct { s32 type; s32 pad; s64 p; } Msg;

void func_0010DA38(void *a0, void *arg1) {
    char frame[0xC0];
    char *spB0 = frame + 0xB0;
    void *s = shopItemSetAttributes__FiiPcPQ24item11description + 0x1768;
    Msg *msg = (Msg *)frame;
    func_00107C00(spB0, s);
    ovl_ntgui2_func_00108E58(frame + 0xA0, spB0, s, *(s32 *)((u8 *)arg1 + 0x1C), *(s32 *)((u8 *)arg1 + 0xC));
    msg->type = 0xC8;
    func_0014CBF4(D_010C21F8[0], (msg->p = (s64)(frame + 0xA0), msg), 1);
    if (D_001BD8C0[0] != 0) {
        func_0014CBF4(D_010C21F8[1], msg, 1);
    }
}
