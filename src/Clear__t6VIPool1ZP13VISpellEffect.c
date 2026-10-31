typedef struct {
    s32 unk0;
    s32 unk4;
    void *unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Pool;

extern s32 DestroyPool__t6VIPool1ZP13VISpellEffect();
extern void __builtin_vec_delete(void *);

s32 Clear__t6VIPool1ZP13VISpellEffect(Pool *arg0) {
    if (arg0->unk8) {
        DestroyPool__t6VIPool1ZP13VISpellEffect();
        if (arg0->unk8) {
            __builtin_vec_delete(arg0->unk8);
        }
    }
    arg0->unk0 = 0;
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unkC = -1;
    arg0->unk10 = -1;
    arg0->unk14 = -1;
    return 0;
}
