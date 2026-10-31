extern void Destroy__16VISpellEventList(void*);
extern void* __builtin_vec_new(s32);

s32 Create__16VISpellEventListiP7VIScene(void *arg0, s32 arg1, void *arg2) {
    *(void**)((char*)arg0 + 0) = arg2;
    if (*(void**)((char*)arg0 + 8) != 0) {
        Destroy__16VISpellEventList(arg0);
    }
    *(s32*)((char*)arg0 + 4) = arg1;
    *(void**)((char*)arg0 + 8) = __builtin_vec_new(arg1 * 0x2C);
    return 0;
}
