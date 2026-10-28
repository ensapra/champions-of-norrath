s32 func_002DD640(void);
void func_002DD698(void);
extern s32 *D_004459C8;
extern u32 D_004459CC;
extern s32 D_008E4548[];
extern s32 _gp[];

s32 func_002DF6A0(s32 index, s32 a, s32 b) {
    s32 *base;
    u32 limit;
    s32 *e;
    if (index < 0) {
        base = D_008E4548;
        index &= 0x7fffffff;
        limit = 32;
    } else {
        base = D_004459C8;
        limit = D_004459CC;
    }
    if ((u32)index >= limit) return 0x80000069;
    {
        s32 r = func_002DD640();
        e = base + index * 4;
        e[0] = a;
        e[1] = b;
        e[2] = (s32)_gp;
        if (r) func_002DD698();
    }
    return 0;
}
