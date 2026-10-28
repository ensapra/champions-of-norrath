s32 func_00151788(s32, s32);
s32 func_0014B7F0(s32, s32);
void func_0011B9E0(s32);

void func_00155B98(u8 *o, s32 x) {
    s32 off;
    s32 i;
    s32 *q;
    func_00151788((s32)(o + 0x910), 1);
    if (*(s32 *)(o + 0x918) != 0) {
        func_0011B9E0(*(s32 *)(o + 0x918));
    }
    off = 0x990;
    if (*(s32 *)(o + 0x91C) != 0) {
        func_0011B9E0(*(s32 *)(o + 0x91C));
    }
    i = 0x27;
top:
    q = (s32 *)((u8 *)o + off);
    off += 4;
    i -= 1;
    func_0014B7F0(q[3], x);
    if (i >= 0)
        goto top;
}
