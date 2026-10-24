typedef struct {
    s32 id;
    u8 b;
    s16 c;
} Msg8;

extern u8 D_00366B34[];
void func_0019BB70(void);
void func_0019C240(void *, void *, s32);

void func_0019BB84(s32 *p)
{
    Msg8 m;
    if (p == 0)
        return;
    func_0019BB70();
    for (; *p != 0; p++) {
        m.id = *p;
        m.b = 0;
        m.c = 0;
        func_0019C240(D_00366B34, &m, 8);
    }
}
