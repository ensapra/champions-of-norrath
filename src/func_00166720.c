extern u8 D_0047E1F1[];
extern char D_00484000[];
typedef struct { u8 pad[0x6000]; s32 count; } Tbl;
extern Tbl *D_00483FF0;
s32 func_00303EB8(char *, const char *, ...);
s32 func_003044FC(char *, u8 *);
s32 func_00166720(char *name) {
    char buf[80];
    u8 *p;
    s32 i;
    func_00303EB8(buf, D_00484000, name);
    p = (u8 *)buf;
    if (buf[0] != 0) {
        do {
            s8 sc = *p;
            s32 d = sc;
            if (*(u8 *)((u8 *)D_0047E1F1 + sc) & 2) d = sc - 0x20;
            *p = d;
            p++;
        } while (*p != 0);
    }
    for (i = 0; i < D_00483FF0->count; i++) {
        if (func_003044FC(buf, (u8 *)D_00483FF0 + i * 32) == 0) break;
    }
    return i != D_00483FF0->count;
}
