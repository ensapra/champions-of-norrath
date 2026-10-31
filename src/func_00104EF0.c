extern u8 Update__17VIParticleEmitter[];

void func_00104EF0(void) {
    u8 *base = Update__17VIParticleEmitter + 0x110;
    s32 *p;
    s32 i;

    i = 0xFF;
    p = (s32 *)(base + 0xB34C);
    do {
        i -= 1;
        *p = 0;
        p -= 0xB4 / 4;
    } while (i >= 0);
}
