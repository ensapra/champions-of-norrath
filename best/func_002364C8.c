typedef struct { u8 _[0x24]; void *p24; u8 __[0x20]; void *p48; u8 ___[0xB4]; s32 f100; u8 ____[0x14]; s32 f118; u8 _____[0x120]; s16 f23C; u8 ______[0xEA]; s32 f328; u8 _______[0x94]; s32 f3C0; s32 f3C4; s32 f3C8; s32 f3CC; } S;

extern f32 D_00481AE4;
extern f32 D_00481AE8;
extern f32 D_00481AEC;
extern f32 D_00481AF0;
extern f32 D_00481AF4;
extern f32 D_00481AF8;

s32 func_001129F0(void *);
void func_00113460(void *);
void func_0010D250(void *, void *, s32);
u32 func_00153FA8(void *);
void func_00160010(void *, s32, s32, f32, f32);
void func_00160128(void *, s32, s32, s32, f32);
void func_001639E8(void *);

void func_002364C8(void *arg0_, u32 arg1) {
    S *a = (S *)arg0_;
    u32 sp0 = arg1;
    u8 sp10[16];
    u8 sp20[16];

    if (func_001129F0(&sp0) != 0) goto done;

    switch (sp0) {
    case 0: {
        u32 hi = func_00153FA8(a) % 120U;
        a->f100 = a->f328 + (s32)hi;
        func_00160128((u8 *)a + 0x120, *(s32 *)((u8 *)a->p24 + 0x8C), 3, (s32)hi, D_00481AE4);
        break;
    }
    case 1: {
        void *t17 = (u8 *)a + 0x120;
        func_00113460(a);
        func_0010D250(sp10, a, 0xC8);
        *(u64 *)sp20 = *(u64 *)sp10;
        *(u32 *)(sp20 + 8) = *(u32 *)(sp10 + 8);
        *(u64 *)((u8 *)a + 0x110) = *(u64 *)sp20;
        *(u32 *)((u8 *)a + 0x118) = *(u32 *)(sp20 + 8);
        {
            u32 hi = func_00153FA8(a) % 120U;
            a->f100 = a->f328 + (s32)hi + 0x12C;
            func_00160128(t17, *(s32 *)((u8 *)a->p24 + 0xA4), 0x803, (s32)hi, D_00481AE8);
        }
        func_001639E8(t17);
        break;
    }
    case 3: {
        void *var16 = (u8 *)a + 0x120;
        func_00113460(a);
        {
            s16 t = a->f23C;
            switch (t) {
            case 3: case 6: case 18: case 14:
                break;
            default:
                func_00160128(var16, *(s32 *)((u8 *)a->p24 + 0xA4), 0x803, 0, D_00481AE8);
                break;
            case 15:
                var16 = (u8 *)a + 0x120;
                break;
            }
        }
        func_001639E8(var16);
        break;
    }
    case 6: case 14: case 15: case 18: {
        void *var4 = NULL;
        s32 var5 = 0;
        void *p24 = a->p24;
        if (sp0 == 0xF) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x2C); goto b23; }
        if (sp0 == 0xE) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x44); goto b23; }
        if (sp0 == 0x12) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x34); goto b23; }
        func_00160010((u8 *)a + 0x120, *(s32 *)((u8 *)p24 + 0x3C), 8, 0.5f, 0.5f);
        goto skip23;
b23:
        func_00160010(var4, var5, 8, 0.5f, 0.5f);
skip23:
        {
            u32 hi = func_00153FA8(a) % 20U;
            a->f3C0 = sp0;
            a->f100 = (s32)hi;
        }
        break;
    }
    case 13: case 16: case 17: {
        void *var4 = NULL;
        s32 var5 = 0;
        void *p24 = a->p24;
        if (sp0 == 0x10) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x64); goto b31; }
        if (sp0 == 0x11) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x54); goto b31; }
        func_00160010((u8 *)a + 0x120, *(s32 *)((u8 *)p24 + 0x5C), 8, 0.5f, 0.5f);
        goto skip31;
b31:
        func_00160010(var4, var5, 8, 0.5f, 0.5f);
skip31:
        {
            u32 hi = func_00153FA8(a) % 20U;
            a->f3C0 = sp0;
            a->f100 = (s32)hi;
        }
        break;
    }
    case 21: case 22: case 23: {
        void *var4 = NULL;
        s32 var5 = 0;
        void *p24 = a->p24;
        if (sp0 == 0x16) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x1C); goto b39; }
        if (sp0 == 0x17) { var4 = (u8 *)a + 0x120; var5 = *(s32 *)((u8 *)p24 + 0x24); goto b39; }
        func_00160010((u8 *)a + 0x120, *(s32 *)((u8 *)p24 + 0x4C), 0x808, 0.5f, 0.5f);
        goto skip39;
b39:
        func_00160010(var4, var5, 0x808, 0.5f, 0.5f);
skip39:
        {
            u32 hi = func_00153FA8(a) % 20U;
            a->f3C8 = 0;
            a->f3C0 = sp0;
            a->f3CC = 0;
            a->f100 = (s32)hi;
        }
        break;
    }
    case 8: {
        sp0 = (u32)a->f23C;
        break;
    }
    case 5: case 9: {
        func_00160128((u8 *)a + 0x120, *(s32 *)((u8 *)a->p24 + 0x8C), 3, 0, D_00481AEC);
        break;
    }
    case 20: {
        func_00160010((u8 *)a + 0x120, *(s32 *)((u8 *)a->p24 + 0x9C), 0x10, D_00481AF0, D_00481AF0);
        a->f3C4 = (s32)((func_00153FA8(a) % 300U) + (u32)a->f328 + 0x12C);
        break;
    }
    case 19: {
        func_00160010((u8 *)a + 0x120, *(s32 *)((u8 *)a->p24 + 0x94), 0x10, D_00481AF4, D_00481AF4);
        break;
    }
    case 10: {
        func_00160128((u8 *)a + 0x120, *(s32 *)((u8 *)a->p24 + 0x6C), 6, 0, D_00481AF8);
        {
            void *t = a->p48;
            /* call function pointer at t+0xC0+4 with arg a + *(t+0xC0+0xC0?) */
            /* approximate: skip */
        }
        break;
    }
    default:
        break;
    }

    a->f23C = (s16)sp0;

done:
    ;
}
