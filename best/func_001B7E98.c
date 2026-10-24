s32 Deci2Call(s32, u32 *);
extern u8 D_0110DA88[];

s32 func_001B7E98(u16 protocol, void *opt, void *handler) {
    u32 args[4];
    args[0] = protocol;
    args[1] = (u32)opt;
    args[2] = (u32)handler;
    args[3] = (u32)D_0110DA88 | 0x20000000;
    return Deci2Call(1, args);
}

s32 func_001B7EE0(s32 s) {
    u32 args[1];
    args[0] = s;
    return Deci2Call(2, args);
}

s32 func_001B7F08(s32 s, s8 dest) {
    u32 args[2];
    args[0] = s;
    args[1] = dest;
    return Deci2Call(3, args);
}

s32 func_001B7F38(s32 s) {
    u32 args[1];
    args[0] = s;
    return Deci2Call(4, args);
}
