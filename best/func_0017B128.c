typedef struct { char b[0x40]; } Blob;
typedef struct {
    s32 a, b, c;
    s32 pad;
    Blob *p;
    char name[0x3FF];
    char z;
} Req;
typedef struct { char pad[0x24]; s32 f24; } Dev;
extern Dev D_010EB640;
extern Blob D_010EB680;
extern Req D_010EB6F0;
extern char D_010ECC00[];
extern s32 D_001D0480;
extern s32 D_001D0484;
extern char func_0017A088[];
s32 PollSema(s32);
void SignalSema(s32);
void FlushCache(s32);
void func_001A4738(char *, char *, s32);
s32 func_001B08B0(void *, s32, s32, void *, s32, void *, s32, void *, s32);

s32 func_0017B128(s32 a0, s32 a1, char *name, Blob *src, s32 a4) {
    s32 r;
    if (D_010EB640.f24 == 0) return -100;
    if (PollSema(D_001D0484) < 0) return -200;
    if (name == 0 || name[0] == 0) {
        SignalSema(D_001D0484);
        return -210;
    }
    a4 &= 7;
    D_010EB6F0.a = a0;
    D_010EB6F0.b = a1;
    D_010EB6F0.c = a4;
    D_010EB680 = *src;
    D_010EB6F0.p = &D_010EB680;
    func_001A4738(D_010EB6F0.name, name, 0x3FF);
    D_010EB6F0.z = 0;
    FlushCache(0);
    r = func_001B08B0(&D_010EB640, 0xE, 1, &D_010EB6F0, 0x414, D_010ECC00, 4, func_0017A088, 0);
    if (r == 0) D_001D0480 = 0xE;
    else SignalSema(D_001D0484);
    return r;
}
