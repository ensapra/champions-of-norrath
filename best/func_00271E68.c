#include "context.h"

extern f32 D_0048219C;
extern f32 D_004821A0;

extern void func_00143630(void *arg0);
extern void func_00276370(void *arg0);
extern void func_00277FD8(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3);
extern f32 func_002F1670(f32 *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
extern void mat3x3_mul_vec3(void *arg0, void *arg1, f32 *arg2);

void func_00271E68(void *arg0, void *arg1, void *arg2, s32 arg4, f32 f12) {
    f32 sp10[3];
    f32 sp18[3];
    f32 sp20[3];
    f32 sp24[3];
    f32 sp30[3];
    f32 sp34[3];
    f32 sp38[3];
    f32 sp40[3];
    f32 sp44[3];
    f32 sp48[3];
    f32 sp50[3];
    f32 sp60[3];
    f32 sp70[3];
    f32 sp74[3];
    f32 sp78[3];
    f32 sp80[3];
    f32 sp84[3];
    f32 sp88[3];
    f32 sp90[3];
    f32 sp94[3];
    f32 sp98[3];
    f32 spA0[3];
    f32 spA4[3];
    f32 spA8[3];
    f32 spC0[3];
    f32 spC4[3];
    f32 spC8[3];
    f32 *s1;
    f32 *s2;
    f32 *s3;
    f32 *s4;
    f32 *s5;
    f32 *s6;
    f32 f0, f1, f2, f3, f4, f5, f6, f7, f8;
    f32 f20, f21;
    f32 f9 = 1.0f;
    
    f20 = f12;
    f21 = 0.0f;
    
    s1 = (f32 *)((u8 *)arg0 + 0x4A4);
    s2 = (f32 *)((u8 *)arg0 + 0x4B0);
    s3 = (f32 *)((u8 *)arg0 + 0x30);
    s4 = (f32 *)((u8 *)arg0 + 0x60);
    s5 = (f32 *)((u8 *)arg0 + 0x20);
    s6 = (f32 *)arg2;
    
    f0 = *(f32 *)((u8 *)arg0 + 0x2A0);
    f2 = *(f32 *)arg1 * f0;
    f4 = *(f32 *)((u8 *)arg1 + 8) * f0;
    f1 = *(f32 *)((u8 *)arg1 + 4) * f0;
    
    sp10[0] = f2;
    f0 = f2;
    f8 = f4 * f20;
    sp18[0] = f4;
    f6 = f1 * f20;
    sp18[1] = f1;
    f0 = f0 * f20;
    sp18[2] = f6;
    sp10[1] = f8;
    sp10[2] = f0;
    
    s1[2] = s1[2] + f8;
    s1[1] = s1[1] + f6;
    s1[0] = s1[0] + f0;
    
    *(f32 *)((u8 *)arg0 + 0x4B0) = *(f32 *)((u8 *)arg0 + 0x4B0) + s6[0] * *(f32 *)((u8 *)arg0 + 0x4C8) * f20;
    *(f32 *)((u8 *)arg0 + 0x4B4) = *(f32 *)((u8 *)arg0 + 0x4B4) + s6[1] * *(f32 *)((u8 *)arg0 + 0x4CC) * f20;
    *(f32 *)((u8 *)arg0 + 0x4B8) = *(f32 *)((u8 *)arg0 + 0x4B8) + s6[2] * *(f32 *)((u8 *)arg0 + 0x4D0) * f20;
    
    s5[0] = f21;
    sp30[0] = -*(f32 *)((u8 *)arg0 + 0x468);
    sp30[1] = -*(f32 *)((u8 *)arg0 + 0x46C);
    sp30[2] = -*(f32 *)((u8 *)arg0 + 0x470);
    sp40[0] = *(f32 *)((u8 *)arg0 + 0x45C);
    sp40[1] = *(f32 *)((u8 *)arg0 + 0x460);
    sp40[2] = *(f32 *)((u8 *)arg0 + 0x464);
    
    sp24[0] = f9;
    sp24[1] = f21;
    sp24[2] = f21;
    
    sp70[0] = sp30[1] * sp24[1] - sp30[2] * sp24[2];
    sp70[1] = sp30[2] * sp24[0] - sp30[0] * sp24[1];
    sp70[2] = sp30[0] * sp24[2] - sp30[1] * sp24[0];
    
    ((u64 *)s3)[0] = *(u64 *)sp70;
    ((u32 *)((u8 *)s3 + 8))[0] = *(u32 *)((u8 *)sp70 + 8);
    
    sp80[0] = sp40[1] * sp30[2] - sp40[2] * sp30[1];
    sp80[1] = sp40[2] * sp24[0] - sp40[0] * sp30[2];
    sp80[2] = sp40[0] * sp30[1] - sp40[1] * sp24[0];
    
    ((u64 *)s4)[0] = *(u64 *)sp80;
    ((u32 *)((u8 *)s4 + 8))[0] = *(u32 *)((u8 *)sp80 + 8);
    
    f3 = *(f32 *)((u8 *)arg0 + 0x398);
    {
        f32 dot = s4[0] * sp40[0] + s4[1] * sp40[1] + s4[2] * sp40[2];
        f2 = func_002F1670(sp40, s3[2], dot, sp10[0], sp10[1], sp10[2]) * D_0048219C - 90.0f;
    }
    if (f2 <= -f3 && *(f32 *)((u8 *)arg0 + 0x4B4) < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x4B4) = 0.0f;
    }
    if (f3 <= f2 && *(f32 *)((u8 *)arg0 + 0x4B4) > 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x4B4) = 0.0f;
    }
    
    mat3x3_mul_vec3((void *)s4, (void *)((u8 *)arg0 + 0x45C), (f32 *)s5);
    
    f3 = *(f32 *)((u8 *)arg0 + 0x39C);
    {
        f32 dot = sp30[0] * s4[0] + sp30[1] * s4[1] + sp30[2] * s4[2];
        f2 = func_002F1670(sp30, dot, dot, sp30[0], sp30[1], sp30[2]) * D_004821A0 - 90.0f;
    }
    if (f2 <= -f3 && *(f32 *)((u8 *)arg0 + 0x4B0) < 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x4B0) = 0.0f;
    }
    if (f3 <= f2 && *(f32 *)((u8 *)arg0 + 0x4B0) > 0.0f) {
        *(f32 *)((u8 *)arg0 + 0x4B0) = 0.0f;
    }
    
    f5 = *(f32 *)((u8 *)arg0 + 0x4A4) * 39.0f;
    f4 = s1[2] * 39.0f;
    f1 = s1[1] * 39.0f;
    spA0[0] = f5;
    f0 = f5 * f20;
    spA0[2] = f4;
    f7 = f1 * f20;
    spA0[1] = f1;
    f8 = f4 * f20;
    *(f32 *)((u8 *)arg0 + 0x14) = *(f32 *)((u8 *)arg0 + 0x14) + f7;
    *(f32 *)((u8 *)arg0 + 0x18) = *(f32 *)((u8 *)arg0 + 0x18) + f8;
    sp90[0] = f0;
    sp90[1] = f7;
    sp90[2] = f8;
    *(f32 *)((u8 *)arg0 + 0x10) = *(f32 *)((u8 *)arg0 + 0x10) + f0;
    
    spC0[0] = *(f32 *)((u8 *)arg0 + 0x4B0) * f20;
    spC0[1] = s2[1] * f20;
    spC0[2] = s2[2] * f20;
    
    func_00277FD8(arg0, spC0, sp90, spC0);
    
    if (arg4 == 0) {
        *(s32 *)((u8 *)arg0 + 0x874) = 0;
        func_00276370(arg0);
        func_00143630(arg0);
    }
}
