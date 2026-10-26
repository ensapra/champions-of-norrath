typedef struct { u64 a, b; s16 x, y; s16 r[6]; } El;
f32 func_0014CA18(s32, s32);
f32 func_0014C97C(s32, s32);
void func_00161C8C(u8 *o, s32 sel, s32 ox, s32 oy, s32 px, s32 py, s32 r, El *A, El *B, El *C) {
    s32 t[8];
    if (sel == 0 || (t[0] = -0x4000, sel != 1)) t[0] = 0x4000;
    t[2] = px - r / 4;
    t[3] = px + r / 2;
    t[4] = px + (r - r / 4);
    t[5] = py - r / 4;
    t[6] = py + r / 2;
    t[7] = py + (r - r / 4);
    t[1] = 0;
    do {
        s32 ang = t[0] + (t[1] << 15) / 11;
        t[1]++;
        A[0].x = *(u16 *)(o + 0x4DC) + (ox + (s32)((f32)t[2] * func_0014CA18(ang, 11)));
        A[0].y = *(u16 *)(o + 0x4E0) + (oy + (s32)((f32)t[5] * func_0014C97C(ang, 11)));
        A[1].x = *(u16 *)(o + 0x4DC) + (ox + (s32)((f32)px * func_0014CA18(ang, 11)));
        A[1].y = *(u16 *)(o + 0x4E0) + (oy + (s32)((f32)py * func_0014C97C(ang, 11)));
        B[0] = A[1];
        B[1].x = *(u16 *)(o + 0x4DC) + (ox + (s32)((f32)t[3] * func_0014CA18(ang, 11)));
        B[1].y = *(u16 *)(o + 0x4E0) + (oy + (s32)((f32)t[6] * func_0014C97C(ang, 11)));
        C[0] = B[1];
        C[1].x = *(u16 *)(o + 0x4DC) + (ox + (s32)((f32)t[4] * func_0014CA18(ang, 11)));
        C[1].y = *(u16 *)(o + 0x4E0) + (oy + (s32)((f32)t[7] * func_0014C97C(ang, 11)));
        A += 2; B += 2; C += 2;
    } while (t[1] < 12);
}
