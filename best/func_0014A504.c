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
        i = start;
        if (i < cnt) {
            do {
                u32 *q;
                func_0011B9E0((void *)o->p870[i]);
                q = &o->p870[i];
                i++;
                if (i - 1 + cnt < o->f878)
                    *q = o->p870[i - 1 + cnt];
                else
                    *q = 0;
            } while (i < cnt);
        }
    }
}
