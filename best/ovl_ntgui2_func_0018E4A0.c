typedef volatile u64 vu64;
typedef struct Info { s16 h0; s16 h2; s16 h4; s16 h6; s32 w8; } Info;
Info *func_0018D7A8(void);
void func_001ADBB0(void);
s64 func_001ADC40(void);
s32 ovl_ntgui2_func_001B1938(void *, s32);
s32 func_001B1F78(s32, void *, s32);
void func_001B1BC0(s32);
s32 func_001A1640(char *);
extern u8 jtbl_004C006C[];

s32 ovl_ntgui2_func_0018E4A0(void) {
    Info *p = func_0018D7A8();
    if (p->w8 == 0) {
        func_001ADBB0();
        if (p->h0 == 1) {
            return (s32)((*(vu64 *)0x12001000 >> 13) & 1);
        }
        return 1;
    } else {
        s64 v = func_001ADC40() >> 13;
        s32 r = v & 1;
        if (p->h0 == 1) return r;
        return 1;
    }
}

void func_0018DC48(u64 *a) {
    Info *p = func_0018D7A8();
    u64 v = a[0];
    if (p->h6 == 1) {
        *(vu64 *)0x12000000 = v;
        *(vu64 *)0x12000070 = a[2];
        *(vu64 *)0x12000080 = a[3];
        *(vu64 *)0x120000C0 = a[4];
    } else {
        *(vu64 *)0x12000000 = v;
        *(vu64 *)0x12000020 = a[1];
        *(vu64 *)0x12000090 = a[2];
        *(vu64 *)0x120000A0 = a[3];
        *(vu64 *)0x120000E0 = a[4];
    }
}

s32 func_0018D820(void) {
    char buf[256];
    char *p;
    s32 fd;
    s32 i;
    fd = ovl_ntgui2_func_001B1938(jtbl_004C006C + 0xE4F4, 1);
    if (fd < 0) return -1;
    p = buf;
    for (i = 0; i < 0x100; i++) {
        func_001B1F78(fd, p, 1);
        if (*p++ == 0) break;
    }
    func_001B1BC0(fd);
    return func_001A1640(buf + i - 9) > 0x1315670;
}
