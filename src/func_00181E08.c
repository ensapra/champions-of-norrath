s32 func_0018B078(s32, void *);
s32 func_00192708(void *);
void *D_00480430;
void func_00181794(void) {
    func_00192708(D_00480430 + 0xD0);
    *(f32 *)(D_00480430 + 0x100) = 1728.0f;
    *(f32 *)(D_00480430 + 0x104) = 1824.0f;
    func_0018B078(*(s32 *)(D_00480430 + 4), D_00480430 + 0xD0);
}
extern char D_004CD778[];
extern char D_004CD780[];
extern char D_004CD790[];
void func_001A1568(void *, s32, void *);
void func_0018ACA0(void *, void *);
void func_00181CE0(char **list, char *buf) {
    char *out = buf;
    char **pp = &out;
    if (list == 0) func_001A1568(D_004CD778, 0x1C2, D_004CD780);
    if (out == 0) func_001A1568(D_004CD778, 0x1C3, D_004CD790);
    while (*list) {
        func_0018ACA0(pp, *list);
        list++;
    }
    **pp = 0;
}
extern u8 func_001D7EB0[];
void func_00181DD8(s32 a) {
    void (*fp)(s32, s32) = *(void (**)(s32, s32))(func_001D7EB0 + 0xF8);
    if (fp != 0) {
        fp(7, a);
    }
}
s32 func_00181E08(s32 a) {
    return (s32)(f32)a;
}
