s32 D_010C1EB8[4];
s32 D_010C1EBC[4];
s32 D_010C1EC0[4];
s32 D_010C1EC4[4];

void func_0010C7C0(s32 a, s32 b, s32 c, s32 d) {
    D_010C1EC4[0] = a;
    D_010C1EB8[0] = b;
    D_010C1EBC[0] = c;
    D_010C1EC0[0] = d;
}

s32 D_010C2218[4];

void func_0010EBD8(s32);

void func_0010EF98(void) {
    s32 i;
    s32 *p = D_010C2218;
    for (i = 0; i < 2; i++) {
        if (*p != 0) {
            func_0010EBD8(i);
        }
        p++;
    }
}

s32 D_010C21D8[4];
s32 D_001BD8C4[4];
s32 func_0010D600(s32, void *);

s64 func_0010D330(s32 a0, void *a1) {
    if ((u32)(D_010C21D8[0] - 2) >= 2U) {
        if (*(s32 *)((u8 *)a1 + 0x1C) == D_001BD8C4[0] + 1) {
            return func_0010D600(*(s32 *)((u8 *)a1 + 0x1C), a1);
        }
    }
    return 0;
}
