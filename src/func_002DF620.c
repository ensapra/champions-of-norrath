extern void func_003021B0(void *, s32, s32);
extern s32 func_002DD640(void);
extern void func_002DD698(void);
extern s32 D_004459C8[];
extern s32 D_004459CC[];
s32 func_002DF620(s32 a, s32 b) {
    s32 old;
    s32 r = func_002DD640();
    old = D_004459C8[0];
    D_004459C8[0] = a;
    D_004459CC[0] = b;
    func_003021B0((void *)a, 0, b * 16);
    if (r != 0) func_002DD698();
    return old;
}
