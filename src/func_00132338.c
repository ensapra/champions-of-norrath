extern s32 D_010CD830[];
extern s32 D_010CD848[];
extern u8 func_001C4B18[];
extern s32 D_001BB6C4[];
extern u8 D_001BB710[];
void func_0010B378(s32, void *);
void func_0013BBD0(void);

void func_00132338(s32 a, s64 c) {
    s32 b = c;
    D_001BB6C4[0] = D_010CD848[b];
    func_0013BBD0();
    if (b != *(s32 *)(func_001C4B18 + 0x3BC)) {
        func_0010B378(D_010CD830[b], D_001BB710);
    }
}
