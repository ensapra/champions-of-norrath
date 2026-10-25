void func_00186E80(u16, u16, u16, u16);
typedef struct { char pad[0x34]; u16 a, b, c, d; } S10F44A8;
extern S10F44A8 D_010F44A8;

void func_00186AE0(u64 v) {
    u16 a = v >> 48;
    u16 b = (v >> 32) & 0xFFFF;
    u16 c = (v >> 16) & 0xFFFF;
    u16 d = v & 0xFFFF;
    if (D_010F44A8.a != a || D_010F44A8.b != b || D_010F44A8.c != c || D_010F44A8.d != d) {
        func_00186E80(a, b, c, d);
        D_010F44A8.a = a;
        D_010F44A8.b = b;
        D_010F44A8.c = c;
        D_010F44A8.d = d;
    }
}
