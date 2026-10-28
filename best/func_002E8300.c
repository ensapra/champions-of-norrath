extern u8 D_00447F60[];

void func_002E8300(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 8; i++) {
        u32 mask = (1 << i) & 0xFF;
        if ((a[0x21] ^ b[0xB]) & mask) {
            u32 code = D_00447F60[i];
            s32 op = (b[0xB] & mask) ? 1 : 2;
            u8 *ent = a + 0x24;
            u16 count = *(u16 *)(ent + 2);
            u8 bit = 1 << (code & 7);
            u8 t = a[(code >> 3) + 0xE0];
            switch (op) {
            case 1:
            case 3:
                t |= bit;
                break;
            case 2:
                t &= ~bit;
                break;
            }
            a[(code >> 3) + 0xE0] = t;
            if (*(u16 *)(ent + 2) < 10) {
                u8 *rec = ent + count * 16;
                *(s32 *)(rec + 4) = *(s32 *)b;
                *(u16 *)(rec + 8) = code;
                *(u16 *)(rec + 12) = b[0xA];
                *(u16 *)(rec + 16) = op;
                *(u16 *)(rec + 14) = b[0xB];
                *(u16 *)(ent + 2) = *(u16 *)(ent + 2) + 1;
            }
            {
                u8 bit2 = 1 << (code & 7);
                u8 t2 = a[(code >> 3) + 0xE0];
                switch (op) {
                case 1:
                case 3:
                    t2 |= bit2;
                    break;
                case 2:
                    t2 &= ~bit2;
                    break;
                }
                a[(code >> 3) + 0xE0] = t2;
            }
        }
    }
}
