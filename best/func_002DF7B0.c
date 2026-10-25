typedef s32 (*Callback)(s32, s32, s32);
typedef struct { Callback fn; s32 arg; s32 gp; s32 pad; } CallbackEntry;
extern CallbackEntry D_008E4548[32];
extern s32 D_004459C8[];
extern s32 D_004459CC[];
s32 func_002DF7B0(s32 enabled, s32 arg1) {
    s32 old_gp = 0;
    CallbackEntry *p;
    s32 count;
    if (enabled) { p = D_008E4548; count = 32; }
    else { p = (CallbackEntry *)D_004459C8[0]; count = D_004459CC[0]; }
    while (count > 0) {
        if (p->fn) {
            old_gp = p->gp;
            p->fn(arg1, p->arg, 0);
        }
        --count;
        ++p;
    }
    return old_gp;
}
