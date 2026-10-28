typedef struct E {
    s32 x, y, n, p0[3];
    s32 sel;
    s32 p1[4];
    s32 v24;
    s32 p2[3];
    s32 id;
    f32 f;
    s32 p3[4];
    s32 flag;
    s32 p4[14];
    s32 v70;
    s32 p5[2];
} E;
extern E D_00427288[];
extern u8 D_004272BC[];
extern u8 D_00332FDC[];
extern u8 D_00332FD0[];
s32 D_004844B0;
s32 D_0048404C;
s32 D_00484920;
s32 D_00484048;
s32 D_004844A8;
s32 D_004848E4;
s32 D_004848E8;
f32 D_00480594;
extern s8 D_00481000[];
extern s32 func_00172BC8();
extern s32 func_00172DC0();
extern s32 func_00174420();
extern s32 func_00172F88();
extern s32 func_001BBF28();
extern s32 func_002FBA98(s32);
extern s32 func_002FB680(s32, s64);
extern s32 func_002FB320(f32);
extern s32 func_002FB5C0(s32, s32);
extern s32 func_002F0DF0(s32);
extern s32 func_002FBB50(s32);
extern s32 func_00172708();
extern s32 func_00172728();
extern s32 func_001B1C20();
extern s32 func_001B26F0();

void func_001AF968(s32 *list, s32 *arr, s32 idx, s32 sub)
{
    E *e = &D_00427288[idx];
    s32 cnt = 0;
    s32 last = -1;
    s32 i;
    s32 base = e->x + e->n / 2;
    s32 *p = list;
    s32 a, b, c, d;
    f32 sc;

    while (*p++) cnt++;
    func_001B26F0(idx, 0, cnt, 0, 30, e, 1);
    for (i = 0; i < cnt; i++) {
        if (e->sel == i) {
            func_00172BC8(D_004844B0, 5, 0x80323C3C, -1);
            func_00172DC0(0x8049616A, -1, 0);
            func_00174420(base, 0x14D + i * 30, list[i], 10000);
            func_00172F88();
            if ((*(s32 *)(D_00332FDC + *(s32 *)(D_004272BC + sub * 116) * 36) & D_0048404C) && e->f == 0.0f) {
                last = i;
                func_001BBF28(e);
                e->id = arr[i];
            }
        } else {
            func_00172BC8(D_004844B0, 5, 0x80323C3C, -1);
            func_00172DC0(0x80323C3C, -1, 0);
            func_00174420(base, 0x14D + i * 30, list[i], 10000);
            func_00172F88();
        }
    }
    if (last != -1 && arr[last] == 0) {
        e->sel = e->v70;
        e->v24 = e->v70 * D_00484920;
    }
    if (e->id != 0) {
        sc = D_00480594;
        a = func_002FB680(func_002FBA98(idx), 0xFFE0000000000000LL);
        b = D_004848E8;
        c = base - *(s16 *)b;
        d = func_002FBB50(func_002FB680(func_002F0DF0(func_002FB5C0(a, func_002FB320((f32)D_004844A8 * sc))), 0x8048000000000000LL));
        func_00172708(b, c - d - 0x50, e->v24 + 0x150, 1, 0x80808080);
        b = D_004848E4;
        d = func_002FBB50(func_002FB680(func_002F0DF0(func_002FB5C0(a, func_002FB320((f32)D_004844A8 * sc))), 0x8048000000000000LL));
        func_00172708(b, base + d + 0x50, e->v24 + 0x150, 1, 0x80808080);
    }
    func_00172728(e->x + 0x14, e->y + 0x118, 0x118, 0xA0, 1, 0x80808080, 0, 0, 0);
    if ((*(s32 *)(D_00332FD0 + *(s32 *)&((s32 *)(D_00427288))[(idx - sub) * 0 + 0] * 0 + e->p1[0] * 36 + 12) & D_00484048) && !D_00481000[idx]) {
        func_001BBF28(e);
        e->id = 0;
        e->sel = e->v70;
        e->v24 = e->v70 * D_00484920;
    }
    func_001B1C20();
}
