typedef struct { s32 unk0; s32 unk4; s32 unk8; void *unkC; void *unk10; } EC;
extern void (*D_0118EDD0)(s32, void *);
extern s32 D_0118EDD4;
extern u8 D_011CBC38[];
void *xmlNewElementContent(s32, s32);
void *xmlCopyElementContent(void *arg0) {
    EC *p = (EC *)arg0;
    EC *temp_2;
    void *temp_2_2;
    void *temp_4;
    EC *var_2 = NULL;
    if (p != NULL) {
        temp_2 = (EC *)xmlNewElementContent(p->unk8, p->unk0);
        if (temp_2 == NULL) {
            D_0118EDD0(D_0118EDD4, D_011CBC38);
            return NULL;
        }
        temp_2_2 = p->unkC;
        temp_2->unk4 = p->unk4;
        if (temp_2_2 != NULL) {
            temp_2->unkC = xmlCopyElementContent(temp_2_2);
        }
        temp_4 = p->unk10;
        var_2 = temp_2;
        if (temp_4 != NULL) {
            temp_2->unk10 = xmlCopyElementContent(temp_4);
            var_2 = temp_2;
        }
        return (void *)var_2;
    }
    return (void *)var_2;
}
