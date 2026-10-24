extern s32 D_001BB6C4;
extern volatile s32 D_001BD868;
extern s32 D_001BD86C;
extern s32 D_001BD8AC;
extern volatile s32 D_001BD8B8;
extern u8 D_004C9C40[];
extern s32 D_010C7628[];
extern s32 D_010C7630[];
extern s32 D_010C7638[];
extern s32 D_010C7640[];
extern s32 D_010C7648[];
extern s32 D_010C7650[];
extern u8 D_010C7660[];
void func_0013B5F8(void *, void *);
void func_0010CC90(s32);
s32 func_0010A5B8(s32);
void func_0010A4D0(s32, s32, s32);
s32 func_001523D0(s32);
void func_00152520(void);
void func_0014B6F4(s32);
void func_00104F30(s32);
void func_00106E30(s32, s32);
void func_001389A0(s32);

static inline void func_00122CC8_free(s32 *slot)
{
    if (*slot != 0) {
        if (func_001523D0(D_001BD8AC) == *slot) {
            func_00152520();
        }
        func_0014B6F4(*slot);
        func_00104F30(*slot);
        func_00106E30(0, *slot);
        func_00106E30(1, *slot);
        if (D_001BB6C4 == *slot) {
            D_001BB6C4 = 0;
        }
        func_001389A0(*slot);
        *slot = 0;
    }
}

s32 func_00122CC8(u8 *arg0)
{
    s32 i;

    switch (*(s32 *)(arg0 + 0x10)) {
    case 1:
        func_0013B5F8(D_004C9C40, D_010C7660);
        D_001BD86C = D_001BD868;
        D_001BD868 = 0;
        func_0010CC90(0);
        return 0;
    case 2:
        if (func_0010A5B8(D_001BD8B8)) {
            if (D_001BD8B8 != 0) {
                func_0010A4D0(D_001BD8B8, 0, 0);
            }
        }
        for (i = 0; i < 2; i++) {
            func_00122CC8_free(&D_010C7630[i]);
        }
        return 0;
    case 3:
        for (i = 0; i < 1; i++) {
            func_00122CC8_free(&D_010C7640[i]);
            func_00122CC8_free(&D_010C7638[i]);
            func_00122CC8_free(&D_010C7648[i]);
            func_00122CC8_free(&D_010C7650[i]);
        }
        return 0;
    case 4:
        return 0;
    case 5:
        func_00122CC8_free(&D_010C7628[0]);
        return 1;
    }
    return 0;
}
