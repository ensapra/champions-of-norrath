s16 func_0026FC40(void); s16 func_0026FC48(void*); f32 func_0026FC50(void*); void func_0026FA88(void*,s32);
extern f32 D_0037EE80[];
void func_0026F9B0(void *p) {
 *(s16*)((u8*)p+0x162)=func_0026FC40();
 *(s16*)((u8*)p+0x164)=func_0026FC48(p);
 *(f32*)((u8*)p+0x170)=D_0037EE80[0];
 *(f32*)((u8*)p+0x174)=D_0037EE80[1];
 *(f32*)((u8*)p+0x178)=D_0037EE80[2];
 *(f32*)((u8*)p+0x168)=func_0026FC50(p);
 func_0026FA88(p,0);
}
void func_0026FAF8(void*, s16); void func_0026FB00(void*, s16); void func_0026C190(void*, s32, f32, f32, f32); void func_0026FB08(void*, f32);
void func_0026FA20(void *p) {
 func_0026FA88(p,1);
 func_0026FAF8(p, *(s16*)((u8*)p+0x162));
 func_0026FB00(p, *(s16*)((u8*)p+0x164));
 func_0026C190(p, 0, *(f32*)((u8*)p+0x170), *(f32*)((u8*)p+0x174), *(f32*)((u8*)p+0x178));
 func_0026FB08(p, *(f32*)((u8*)p+0x168));
}
extern double D_0047F4F0[];
double func_002FB680(double, double) __attribute__((const));
double func_0030C3A0(s32 n) {
    double r = 1.0;
    if (n < 24)
        return D_0047F4F0[n];
    while (n > 0) {
        n--;
        r = func_002FB680(r, 10.0);
    }
    return r;
}
