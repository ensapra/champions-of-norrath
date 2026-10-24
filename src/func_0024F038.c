typedef struct { u8 b[16]; } Blk16;
extern u8 D_007DD7E0[]; extern u8 D_007DD840[]; extern Blk16 D_007DD880;
extern void func_002D8270(void*,s32,s32,void*,s32,void*,s32,s32,s32);
void func_0024F138(void) { Blk16 s; D_007DD880 = s; func_002D8270(D_007DD7E0,0xB0,0,&D_007DD880,0x10,D_007DD840,0x40,0,0); }
void func_0024F1A8(void) { Blk16 s; D_007DD880 = s; func_002D8270(D_007DD7E0,0xC0,0,&D_007DD880,0x10,D_007DD840,0x40,0,0); }
extern void func_0024A430(void*,char*,s32,s32,s32);
extern void *func_00166F48(void *);
extern char D_00474630[];
extern u8 D_007D8A90[];
void func_0024F038(s32 a,s32 b,s32 c) { void *p=func_00166F48(D_007D8A90); if(p) { char *q=D_00474630; if(q) func_0024A430(p,q,a,b,c); } }
void func_0026FB08(u8 *arg0, f32 x) {
    f32 lo = *(f32 *)(arg0 + 0xB0);
    f32 *tab = (f32 *)(arg0 + 0xC);
    f32 one = 1.0f;
    f32 t;
    f32 a;
    *(f32 *)(arg0 + 0x8C) = x;
    *(f32 *)(arg0 + 0xD8) = one - (x - lo) / (*(f32 *)(arg0 + 0xB8) - lo);
    t = one <? *(f32 *)(arg0 + 0x90);
    a = tab[*(s32 *)(arg0 + 0x58) + 0x2C];
    *(f32 *)(arg0 + 0xFC) = a + (tab[*(s32 *)(arg0 + 0x54) + 0x2C] - a) * t;
}
