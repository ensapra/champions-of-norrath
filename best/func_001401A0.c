extern char func_001C6788[];
struct S { char pad[0x24]; s32 f; };
extern S D_010D12C0, D_010D12E8, D_010D1310;
extern char D_010D4340[];
s32 func_001403B8(void);
void func_001403C8(void);
void *func_001A2660(void *, s32, s32);
s32 func_001B06E0(void *, u32, s32);
s32 func_001B0AA8(void *);
void func_001401A0(void) {
  s32 i;
  *(s32 *)(func_001C6788 + 0xE4) = -1;
  func_001A2660(D_010D4340, 0, 0x100);
  while (1) {
    if (func_001B06E0(&D_010D12C0, 0x80001001, 1) < 0) for (;;);
    while (func_001B0AA8(&D_010D12C0) != 0);
    if (D_010D12C0.f != 0) break;
    for (i = 0xFFFF; i != -1; i -= 4);
  }
  while (1) {
    if (func_001B06E0(&D_010D12E8, 0x80001002, 1) < 0) for (;;);
    while (func_001B0AA8(&D_010D12E8) != 0);
    if (D_010D12E8.f != 0) break;
    for (i = 0xFFFF; i != -1; i -= 4);
  }
  while (1) {
    if (func_001B06E0(&D_010D1310, 0x80001003, 1) < 0) for (;;);
    while (func_001B0AA8(&D_010D1310) != 0);
    if (D_010D1310.f != 0) break;
    for (i = 0xFFFF; i != -1; i -= 4);
  }
  func_001403B8();
  func_001403C8();
}
