typedef struct { char pad0[0xC2]; u16 flag; char pad1[0x40]; void *(*alloc)(s32, s32); void (*done)(void *); } G;
extern char func_001E23F8[];
extern char D_004CDB80[], D_004CDB98[], D_004CDBB0[], D_004CDBC8[], D_004CDBE8[];
void func_00185780(void *, s32);
s32 func_001A2850();
void func_001A3EB8(void *, void *);
void func_001A42B8(void *);
s32 ovl_ntgui2_func_001B1938(void *, s32);
void func_001B1BC0(s32);
s32 func_001B1D40(s32, s32, s32);
void func_001B1F78(s32, void *, s32);

s32 func_00185630(s32 arg0) {
    char sp[0x400];
    s32 sz;
    void *buf;
    s32 fd;
    G *g;
    func_001A42B8(sp);
    func_001A3EB8(sp, D_004CDB80);
    func_001A2850(D_004CDB98, sp);
    fd = ovl_ntgui2_func_001B1938(sp, 1);
    if (fd < 0) {
        func_001A2850(D_004CDBB0, 0, 2);
        return -1;
    }
    sz = func_001B1D40(fd, 0, 2);
    func_001B1D40(fd, 0, 0);
    g = (G *)(func_001E23F8 + 0x48);
    buf = g->alloc(0x10, sz);
    if (buf == 0) {
        func_001A2850(D_004CDBC8);
        return 1;
    }
    func_001B1F78(fd, buf, sz);
    func_001B1BC0(fd);
    func_00185780(buf, arg0);
    func_001A2850(D_004CDBE8);
    if (g->flag < 2) g->flag ^= 1;
    g->done(buf);
    return 0;
}
