extern s32 func_001A444C(void*);extern u8 D_00367374[];
void func_0019BA4C(s8 *dst){s32 n=func_001A444C(D_00367374);if(n>=0x100)*dst=0;__builtin_memcpy(dst,D_00367374,0x100);dst[n]=0;}
