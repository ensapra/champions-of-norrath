void func_001AE0B0(u32 a, u32 b);
void func_001AE1D8(u32 a, u32 b) {
    func_001AE0B0(a & ~63, b & ~63);
}
