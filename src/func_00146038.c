extern void func_00114948(s32, s32, s32, void *, void *, s32);
extern s32 func_0011BA18(s32);
extern void func_00147290(void);
extern void func_00147250(void);
extern void func_00147018(void);
extern void func_001A3D78(void *, s32, void *);
extern s32 func_001C6788[];
extern s32 func_001B9FD8[];
extern u8 jtbl_004C006C[];
extern s32 func_0018F678(s32);
extern void func_0018F580(void *);
extern void func_00145DF0(s32);
extern void func_00145CA8(void);
extern void func_00145DE8(void);
extern s32 D_010D44A0;
extern s32 D_001C6878[];

void func_00146F70(s32 a) {
    char buf[0x260];
    if (a >= 0) {
        func_001A3D78(buf, func_0011BA18(0x77), jtbl_004C006C + 0xB0FC);
        if (*(s32 *)((u8 *)func_001C6788 + 0x104) != 0) {
            func_00114948(0, 0x1F4, 0xFA, buf, (void *)func_00147250, *(s32 *)((u8 *)func_001B9FD8 + 0x16EC));
        } else {
            func_00114948(0, 0x1F4, 0xFA, buf, (void *)func_00147290, *(s32 *)((u8 *)func_001B9FD8 + 0x16EC));
        }
    } else {
        func_00147018();
    }
}

void func_0018FAE8(s32 *p, s32 a, s32 b) {
    s32 t = func_0018F678(a);
    func_0018F580(p);
    if (p[4] != -1) p[4] = t;
    p[8] = b;
    p[0] = (p[0] & ~0xC) | 0x109;
}

void func_00146038(s32 *src) {
    s32 i;
    for (i = 0; i < 4; i++) {
        D_001C6878[i] = src[i];
        func_00145DF0(i);
    }
}

void func_00145E68(void) {
    if (D_010D44A0 >= 0 && D_010D44A0 < 2) func_00145CA8();
    else func_00145DE8();
}
