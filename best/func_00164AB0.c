typedef struct { u8 p0[0x98]; s32 s98; u8 p1[0x930 - 0x9C]; s64 a930, a938, a940, a948, a950, a958; } A;
extern u8 func_001C7AF8[];
void func_00164AB0(A *a) {
    s64 x, y;
    ((void (**)(void))func_001C7AF8)[1]();
    x = a->a940;
    y = a->a948;
    a->a950 = x;
    a->a958 = y;
    a->a930 = x;
    a->a938 = y;
    a->s98 = 2;
}
