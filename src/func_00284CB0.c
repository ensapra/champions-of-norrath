s32 func_0024CF80(s32);

s64 func_00284CB0(void *arg0) {
    func_0024CF80(*(s32 *)((u8 *)arg0 + 0x938));
    return func_0024CF80(*(s32 *)((u8 *)arg0 + 0x93C));
}

extern f32 D_00482410;
extern u8 D_00476DD0[];
extern u8 D_00476D50[];
u32 func_00153FA8(void);
s32 func_00303EB8(void *, void *, s32);
s32 func_00165DC0(void *, void *);
void func_0024D308(s32, s32, f32);

void func_00284E10(s32 arg0, f32 *arg1, f32 *arg2) {
    char buf[0x80];
    f32 v = arg2[0] * arg1[0] + arg2[1] * arg1[1] + arg2[2] * arg1[2];
    if (v < D_00482410) {
        func_00303EB8(buf, D_00476DD0, func_00153FA8() % 3u + 1);
        func_0024D308(func_00165DC0(D_00476D50, buf), arg0, 1.0f);
    }
}
