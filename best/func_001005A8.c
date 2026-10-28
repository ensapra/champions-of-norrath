void *func_00100258(void *);
s32 func_001004A8();
void func_00166BF8(void *, void *, s8 *, s32, s32);
s32 func_00166D20(s32, void *, s32);
void func_00301FFC(void *, void *, s32);
extern char D_00454320[];
extern s8 D_00483200;
extern s32 D_00483204;
extern s8 D_00483208;
extern s32 D_004844A8;
extern s8 D_00487080[];
extern u8 D_004D7080[];
extern u8 D_004D70FC[];
extern u8 D_004D7100[];
extern u8 D_004DA080[];

void func_001005A8(s32 arg0, void *arg1) {
    s32 cur, i;
    if (D_00483200 == 0) return;
    cur = D_00483204;
    if (cur >= 0) {
        *(s32 *)(D_004D70FC + cur * 0xC0) = D_004844A8;
    }
    if (D_00483208 != 0) {
        u8 *e = D_004D7100 + cur * 0xC0;
        typedef struct __attribute__((packed)) { u64 q[8]; } C64;
        s32 n = 0;
        u16 left;
        u8 *src;
        s16 *ids;
        *(C64 *)e = *(C64 *)D_004DA080;
        left = *(u16 *)(e + 6);
        *(s32 *)(e - 4) = D_004844A8;
        src = D_004DA080 + *(s32 *)(e + 0x10);
        ids = (s16 *)(D_004D7100 - 0x80 + cur * 0xC0 + 0x40);
        while (left != 0) {
            s32 cnt = left < 0x50 ? left : 0x4F;
            s32 k;
            u8 *slot;
            left -= cnt;
            for (;;) {
                for (k = 0; k < 0x100; k++) {
                    if (D_00487080[k * 0x500] == 0) break;
                }
                if (k != 0x100) break;
                if (func_001004A8() == 0) {
                    s16 *p = (s16 *)(D_004D7080 + cur * 0xC0 + 0x40);
                    for (i = 0; i < n; i++) D_00487080[p[i] * 0x500] = 0;
                    *(s16 *)(D_004D7080 + cur * 0xC0 + 0x40 + n * 2) = -1;
                    goto next;
                }
            }
            ids[n++] = k;
            slot = (u8 *)D_00487080 + k * 0x500;
            *(s32 *)slot = cnt | (left ? 0x20000000 : 0x60000000);
            func_00301FFC(slot + 0x10, src, cnt * 16);
            src += cnt * 16;
        }
        *(s16 *)(D_004D7080 + cur * 0xC0 + 0x40 + n * 2) = -1;
        *(s16 *)(e + 0xA) = -0x5805;
        D_00483204 = -1000000;
        *(s32 *)(e + 0x10) = 0;
        D_00483208 = 0;
    }
next:
    if (func_00166D20(arg0, arg1, cur) == 0) {
        D_00483200 = 0;
        for (i = 0; i < 0x40; i++) {
            u8 *p = D_004D7080 + i * 0xC0;
            if (*p != 0 && *(s16 *)(p + 0x40) == -1) {
                void *r = func_00100258(p);
                if (r == 0) { *(s16 *)(p + 0x40) = -2; continue; }
                func_00166BF8(D_00454320, D_004DA080, &D_00483208, *(u16 *)((u8 *)r + 4) << 11, *(u16 *)((u8 *)r + 2) << 11);
                D_00483200 = 1;
                D_00483204 = i;
                *(s32 *)(p + 0x3C) = D_004844A8;
                break;
            }
        }
    }
}
