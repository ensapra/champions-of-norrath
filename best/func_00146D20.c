extern u8 D_001C6100[];
extern u8 D_001C5500[];
extern u8 D_001C5600[];
extern u8 D_004CB168[];
extern u8 D_004CB190[];
extern u8 D_004CB1B0[];
extern u8 *D_001C6828[];
extern u8 *D_001C682C[];
extern u8 *D_001C6830[];
extern s32 D_001C6834[];
extern s32 D_001C6838[];
extern s32 D_001C683C[];
extern s32 D_001C6890[];
extern s32 D_001C68A0[];

void func_0013DEB0(void);
void func_0013DEE8(void);
void func_0013E128(void);
void ovl_ntgui2_func_0013E160(void);
void func_00146F70(void);
void func_00147018(void);
void func_0013DE70(s32);
void func_0013DE90(void *);
void func_00118140(void *, s32, void *, void *, void *);
void func_00118160(void *, void *);
void func_001A3D78(void *, void *, ...);
void func_001A3E10(void *, void *, void *);
s32 func_001A4174(void *, void *);
void func_001A42B8(void *, void *);

void func_00146D20(s32 a0) {
    void *w[8];
    u8 b1[0x260];
    u8 b2[0x100];
    s32 res;
    s32 off, n, found, i;
    void *h;

    if (a0 >= 0) {
        func_001A3D78(b1, D_004CB190, D_001C6100, D_001C6100 + 0x100);
        for (i = 0, off = 0; i < D_001C683C[0]; i++, off += 0x20C) {
            if (func_001A4174(D_001C6830[0] + off + 0x10C, b1) == 0)
                func_001A42B8(D_001C5600, D_001C6830[0] + off + 0xC);
        }
        for (i = 0, off = 0; i < D_001C6838[0]; i++, off += 0x20C) {
            if (func_001A4174(D_001C682C[0] + off + 0x10C, D_004CB168) == 0)
                func_001A42B8(D_001C5500, D_001C682C[0] + off + 0xC);
        }
        if (D_001C6890[0] == 1) {
            func_0013DE70(D_001C68A0[0]);
            h = ovl_ntgui2_func_0013E160;
        } else {
            found = 0;
            n = 1;
            do {
                i = 0;
                off = 0;
                while (i < D_001C6834[0]) {
                    i++;
                    func_001A3E10(D_001C6828[0] + off + 0x10C, D_004CB1B0, &res);
                    off += 0x20C;
                    if (res == n) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    func_001A3D78(b2, D_004CB1B0, n);
                    func_0013DE90(b2);
                    break;
                }
                n++;
                found = 0;
            } while (n < 11);
            h = func_0013DEB0;
        }
        func_00118140(w, 1, h, func_0013DEE8, func_0013E128);
        w[2] = func_00146F70;
        func_00118160(w, func_00146F70);
    } else {
        func_00147018();
    }
}
