extern void Deci2Call_2(s32, void*);

void func_002DF9B0(s32 a0, s32 a1, u32 a2) {
    struct { s32 a; s32 b; s32 c; } args;
    args.b = a1;
    args.c = a2 & 0xFFFF;
    args.a = a0;
    Deci2Call_2(-6, &args);
}
