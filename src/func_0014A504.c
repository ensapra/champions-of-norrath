typedef struct {
    u8 pad[0x870];
    u32 *p870;
    u32 f874;
    u32 f878;
} O;
void func_0011B9E0(void *);

void func_0014A504(O *o, u32 cnt, u32 start) {
    u32 i;
    if (start < o->f878) {
        if (o->f878 < start + cnt) cnt = o->f878 - start;
        for (i = start; i < cnt; i++) {
            func_0011B9E0((void *)o->p870[i]);
            if (i + cnt < o->f878) {
                o->p870[i] = o->p870[i + cnt];
                o->p870[i + cnt] = 0;
            } else
                o->p870[i] = 0;
        }
    }
}
