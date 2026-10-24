extern u8 D_004747B0[], D_00474668[], D_004859B8[];
extern s32 func_002D70D0(void *, void *);
extern s32 func_00172890(void *, s32, void *, void *);

typedef struct {
    u8 pad[0x44];
    f32 x, y;
    u8 pad2[0x4C - 0x4C];
} E76;
extern E76 D_007D8110[];

s32 func_002DDD80(s32 *d,s32 *s,u32 n){u32 i=0;n>>=2;if(n)do{ s32 v=*s; i++; s++; *d=v; d++;}while(i<n);return 0;}

void func_0024FA20(s32 i, f32 x, f32 y) {
    if (i != -1) {
        E76 *e = &D_007D8110[(u8)i];
        e->x = x;
        e->y = y;
    }
}

s64 func_0024F9A0(void *a) {
    func_002D70D0(D_004747B0, a);
    return func_00172890(D_00474668, 0x770, D_004859B8, __builtin_return_address(0));
}

u32 func_0024F978(u32 a) {
    return (a << 24) | ((a & 0xFF00) << 8) | ((a >> 8) & 0xFF00) | (a >> 24);
}
