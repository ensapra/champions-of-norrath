typedef struct W W;
typedef struct { char pad[0xE0]; void (*fE0)(W *); } V;
typedef void (*CB)(W *, s32, s32, s32, s32, s32);
struct W {
    char pad00[0x4C];
    V *f4C;
    char pad50[0x48];
    s32 f98;
    s32 f9C;
    s32 fA0;
    char padA4[0x448];
    s32 f4EC;
    char pad4F0[0x80];
    s32 f570;
    s32 f574;
    s32 f578;
    s32 f57C;
    s32 f580;
    char pad584[0x1C];
    s32 f5A0;
    s32 f5A4;
    char pad5A8[0xC];
    s32 f5B4;
    char pad5B8[0x28];
    s32 f5E0;
    s32 f5E4;
    CB f5E8;
};

void func_001517DC(s32, W *, s32 *);
void func_00171AE0(void *);

void func_0014DA04(W *w) {
    s32 msg[4];
    msg[0] = 0x10;
    func_001517DC(w->f580, w, msg);
}

void func_0014D930(W *w) {
    s32 msg[4];
    if (w->f98 && w->f4C->fE0) w->f4C->fE0(w);
    if (w->f574) {
        msg[0] = 3;
        func_001517DC(w->f574, w, msg);
    }
    w->fA0 = w->f9C;
    w->f4EC = w->f4EC ^ 1;
}

void func_0014D874(W *w) {
    s32 msg[4];
    if (w->f98 && w->f4C->fE0) w->f4C->fE0(w);
    if (w->f570) {
        msg[0] = 2;
        func_001517DC(w->f570, w, msg);
    }
    if (w->f5B4)
        func_00171AE0((char *)w + (w->f4EC << 9) + 0xD0);
    if (w->f5E8)
        w->f5E8(w, w->f5A0, w->f5A4, w->f5E4, w->f5E0, 0);
    w->fA0 = w->f9C;
    w->f4EC = w->f4EC ^ 1;
}
