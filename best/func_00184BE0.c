extern s32 D_004844A4;
extern u8 D_006F6E50[];
typedef struct { s32 a,b,c; } Vec3;
void func_00184BE0(s32 id, Vec3 *a, Vec3 *b, u8 flag, s32 scale) {
 Vec3 x=*a, y=*b;
 if (id == 0) return;
 u8 *p = D_006F6E50 + (id & 255) * 0x734;
 if (*(s32 *)(p+0x730) != id) return;
 if (*(s8 *)(p+0x72c) == 0) return;
 if (*(void **)(p+0x720) == 0) return;
 if (*(void **)(p+0x724) == 0) return;
 *(s32 *)(p+0x728) = D_004844A4 + 2;
 __builtin_memcpy(p+0x700, &x, 12);
 __builtin_memcpy(p+0x70c, &y, 12);
 *(u8 *)(*(u32 *)(p+0x720)+0x40d) = flag;
 *(u8 *)(*(u32 *)(p+0x724)+0x40d) = flag;
 if (scale < 0) return;
 *(u8 *)(*(u32 *)(p+0x720)+0x40f) = scale >> 2;
 *(u8 *)(*(u32 *)(p+0x724)+0x40f) = scale >> 2;
}
