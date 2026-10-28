typedef struct {
    s32 n0; s32 pad4; s32 pad8; s32 nC;
    u64 nloop:15; u64 rest:49;
    u8 pad18[0x80 - 0x18];
    u64 f80;
    u8 pad88[0xA0 - 0x88];
    u64 fA0;
    u64 fA8;
} Pkt;
typedef struct { s32 p; u8 pad[0x24]; } E;
extern E D_010EA1E0[];
#define P(e) ((Pkt *)(e)->p)
void func_00175430(s32 i, u64 *src) {
    E *e = &D_010EA1E0[i];
    P(e)->nC++;
    P(e)->n0++;
    P(e)->fA8 = 0x44;
    P(e)->nloop = (s32)P(e)->nloop + 1;
    P(e)->fA0 = *src;
    P(e)->f80 |= 1;
}
