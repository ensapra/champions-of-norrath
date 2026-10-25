typedef struct {
    char pad[0x3C];
    s32 key[4];
    s32 val[4];
} T;

s32 func_001384F0(T *t, s32 key, s32 val)
{
    s32 i;
    for (i = 0; i < 4 && t->key[i] != key; i++)
        ;
    if (i >= 4) {
        for (i = 0; i < 4 && t->key[i] != 0; i++)
            ;
        if (i >= 4)
            return 0x14;
    }
    t->val[i] = val;
    t->key[i] = key;
    return 0;
}
