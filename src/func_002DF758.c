extern void *D_004459C8;
extern u32 D_004459CC;
extern u8 D_008E4548[];
s32 func_002DF758(s32 idx) {
    void *base;
    u32 limit;
    if (idx < 0) {
        base = D_008E4548;
        idx &= 0x7FFFFFFF;
        limit = 0x20;
    } else {
        base = D_004459C8;
        limit = D_004459CC;
    }
    if ((u32)idx >= limit) {
        return -0x69;
    } else {
        *(u32 *)((u8 *)base + idx * 16) = 0;
        return 0;
    }
}
