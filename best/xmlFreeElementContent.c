extern void (*D_0118EDD0)(s32, void *, u32);
extern s32 D_0118EDD4;
extern void (*D_011B1E18)(void *);
extern u8 D_011CBC60[];
void xmlFreeElementContent(void *arg0) {
    u32 temp_6;
    void *temp_4;
    void *temp_4_2;
    void *temp_4_3;
    if (arg0 != NULL) {
        temp_6 = *(u32 *)arg0;
        if (temp_6 < 5U) {
            if (temp_6 != 0) {
                temp_4 = *(void **)((char *)arg0 + 0xC);
                if (temp_4 != NULL) {
                    xmlFreeElementContent(temp_4);
                }
                temp_4_2 = *(void **)((char *)arg0 + 0x10);
                if (temp_4_2 != NULL) {
                    xmlFreeElementContent(temp_4_2);
                }
                temp_4_3 = *(void **)((char *)arg0 + 0x8);
                if (temp_4_3 != NULL) {
                    D_011B1E18(temp_4_3);
                }
                D_011B1E18(arg0);
            }
        } else {
            D_0118EDD0(D_0118EDD4, D_011CBC60, temp_6);
        }
    }
}
