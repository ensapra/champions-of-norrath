struct Copy12
{
  u32 a[3];
} __attribute__((packed, aligned(4)));
extern void func_001411F0();
extern void func_001438A0();
extern u8 D_00448B00[];
void func_0021CFB8(void *o, struct Copy12 *src, s32 a2, s32 a3, s32 a4, s32 a5, f32 f)
{
  struct Copy12 t = *src;
  func_001411F0(o, &t, 0, 0);
  *((void **) (((u8 *) o) + 0x48)) = D_00448B00;
  *((s32 *) (((u8 *) o) + 0x4c)) = a2;
  *((s32 *) (((u8 *) o) + 0xc)) |= 0x4003;
  *((s32 *) (((u8 *) o) + 0x50)) = a3;
  *((s32 *) (((u8 *) o) + 0x54)) = a4;
  *((s32 *) (((u8 *) o) + 0x58)) = a5;
  *((f32 *) (((u8 *) o) + 0x5c)) = f;
  *((s32 *) (((u8 *) o) + 0x50)) = a3;
  *((s32 *) (((u8 *) o) + 0x60)) = -1;
  func_001438A0(o, -1);
}
