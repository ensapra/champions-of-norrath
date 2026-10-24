f32 D_00482B00;
f32 D_00482B04;

void func_002A72F0(void *arg0) {
    f32 a = D_00482B00;
    f32 b = D_00482B04;
    *(s16 *)((char *)arg0 + 0xE) = 1;
    *(s16 *)((char *)arg0 + 0x18) = 0xF;
    *(f32 *)((char *)arg0 + 0x24) = a;
    *(s16 *)((char *)arg0 + 0x16) = 1;
    *(s16 *)((char *)arg0 + 0x20) = 0xAD;
    *(f32 *)((char *)arg0 + 0x34) = b;
}
