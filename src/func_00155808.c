typedef struct { s64 q[9]; } B72;
typedef struct { s32 a, b, c; } V12 __attribute__((aligned(16)));
void func_00108408(void*); s32 func_0014B808(void*,void*); void func_00157668(void*,void*,s16);
s32 func_00155808(u8 *p, u8 *src) {
 u8 *start = src;
 B72 *d = (B72*)(p+0x148);
 V12 pad, tmp;
 *(u32*)(p+0xC) = (*(u32*)(p+0xC) | 0x100000) & ~0x800;
 *d = *(B72*)src;
 func_00108408(d);
 src += sizeof(B72);
 src += func_0014B808(p, src);
 if (*(u64*)(p+0x150) & (1ULL<<39)) *(u32*)(p+0xC) &= ~0x3000;
 tmp = *(V12*)(p+0x10);
 func_00157668(p+0x110, &tmp, (s16)(*(u16*)(p+0x38) + 0x4000));
 return src - start;
}
