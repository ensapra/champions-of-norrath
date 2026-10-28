struct V { f32 x, y, z; V() {} };
typedef struct S7 { char c[7]; } S7;
extern "C" {
void func_00113618(void);
void func_00168A38(s32, V, s16, void *, s32, V *, V *, f32);
void func_001D5630(s32, V *);
s64 func_0016C970(s32, s32);
extern S7 D_0034B988[];
extern S7 D_00485320[];
extern f32 D_00483F48;

void func_0020CD60(char *o) {
    s32 i;
    if (*(s8 *)(o + 0x23A) == 0) {
        func_00113618();
        for (i = 2; i < 8; i++) {
            if (*(f32 *)(o + 0x230) <= (f32)(0xB4 - (i * 4 + i) * 4) && *(s32 *)(o + i * 4 + 0x404) == 0) {
                V a, b;
                s32 w = *(s32 *)(o + 0x328) + 0x14;
                s32 own = *(s32 *)(o + 0x24);
                *(s32 *)(o + i * 4 + 0x404) = w;
                func_00168A38(*(s32 *)(own + 0xC), *(V *)(o + 0x10), *(s16 *)(o + 0x38), o + 0x120, i, &a, &b, *(f32 *)(o + 0xE0));
                func_001D5630(3, &a);
                switch (i) {
                case 2: *(s32 *)(o + 0xF4) |= 0x08021041; break;
                case 3: *(s32 *)(o + 0xF4) |= 0x42082; break;
                case 4: *(s32 *)(o + 0xF4) |= 0x184104; break;
                case 5: *(s32 *)(o + 0xF4) |= 0x10208208; break;
                case 6: *(s32 *)(o + 0xF4) |= 0x03810410; break;
                case 7: *(s32 *)(o + 0xF4) |= 0x01400820; break;
                }
            }
        }
        *(s64 *)(o + 0x228) = func_0016C970(*(s32 *)(*(s32 *)(o + 0x24) + 0xC), *(s32 *)(o + 0xF4));
        *D_0034B988 = *D_00485320;
        *(s32 *)&D_00483F48 = (s32)*(f32 *)(o + 0x230);
    }
}
}
