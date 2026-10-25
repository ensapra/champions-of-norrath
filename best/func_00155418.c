void func_0014BA50(s32, s32, s32, s32, s32 *, s32 *, s32 *, s32 *);

#define F(o, off) (*(s32 *)((u8 *)(o) + (off)))

void func_00155418(void *arg0) {
    s32 t4, t5, t6, t7, t11, t12;

    t7 = F(arg0, 0x5D4);
    t5 = F(arg0, 0x810);
    t4 = F(arg0, 0x814);
    t6 = t7 + F(arg0, 0x5A0);
    t7 = t7 + F(arg0, 0x5A4);
    t12 = F(arg0, 0x878);
    t11 = F(arg0, 0x87C);
    F(arg0, 0x830) = t5 + F(arg0, 0x880) + t6 + t12;
    F(arg0, 0x834) = t4 + F(arg0, 0x888) + t7 + t11;
    F(arg0, 0x838) = t5 + F(arg0, 0x5AC) + t6 - t12 - F(arg0, 0x884);
    F(arg0, 0x83C) = t4 + F(arg0, 0x5B0) + t7 - t11 - F(arg0, 0x88C);
    func_0014BA50(F(arg0, 0x818), F(arg0, 0x81C), F(arg0, 0x820), F(arg0, 0x824), (s32 *)((u8 *)arg0 + 0x830), (s32 *)((u8 *)arg0 + 0x834), (s32 *)((u8 *)arg0 + 0x838), (s32 *)((u8 *)arg0 + 0x83C));
    if (F(arg0, 0x838) <= F(arg0, 0x830)) {
        F(arg0, 0x858) = 0;
        return;
    }
    if (F(arg0, 0x83C) <= F(arg0, 0x834)) {
        F(arg0, 0x858) = 0;
        return;
    }
    F(arg0, 0x858) = 1;
}
