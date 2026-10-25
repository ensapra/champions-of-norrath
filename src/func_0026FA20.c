void func_0026FA88(void*,s32); void func_0026FAF8(void*,s16); void func_0026FB00(void*,s16); void func_0026C190(void*,s32,f32,f32,f32); void func_0026FB08(void*,f32);
void func_0026FA20(void *p) {
 func_0026FA88(p,1);
 func_0026FAF8(p, *(s16*)((u8*)p+0x162));
 func_0026FB00(p, *(s16*)((u8*)p+0x164));
 f32 a=*(f32*)((u8*)p+0x170), b=*(f32*)((u8*)p+0x174), c=*(f32*)((u8*)p+0x178);
 func_0026C190(p,0,a,b,c);
 void (*fp)(void*,f32)=func_0026FB08; fp(p,*(f32*)((u8*)p+0x168));
}
