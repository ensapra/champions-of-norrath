extern u8 func_001D1C80[];
extern u8 D_004CD7A0[];
extern u8 D_004CD7D0[];
s32 func_0019BC38(s32);
void func_001A2850();

typedef struct {
    u8 pad0[0x5BD0];
    s32 x5BD0;
    s32 x5BD4[0x25];
    void (*x5C68)(s32, s32);
} S_001D2340;

#define G (*(S_001D2340 *)(func_001D1C80 + 0x6C0))

void func_00181E68(u8 k) {
    s32 s;

    s = G.x5BD4[G.x5BD0];
    if (s != 5) {
        switch (k) {
        case 0x80:
            s = 0;
            break;
        case 1:
            s = 1;
            break;
        case 0x81:
            s = 2;
            break;
        case 2:
        case 0x82:
            s = 5;
            break;
        }
    }
    if (G.x5C68 != 0) {
        if (s != 5) {
            G.x5C68(5, 0);
        } else {
            G.x5C68(6, 0);
        }
    }
    if (func_0019BC38(s)) {
        func_001A2850(D_004CD7A0);
    }
    func_001A2850(D_004CD7D0, k, s);
}
