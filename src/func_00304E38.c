extern u8 D_0047E1F1[263];

char *func_00304E38(char *a) {
    char *p = a;
    char s = *a;
    unsigned char c = (unsigned char)*a;
    if (s) {
        loop:
        {
            s32 sc = (s8)c;
            u32 flags = *(D_0047E1F1 + sc);
            if (flags & 1)
                *p = sc + 32;
            p++;
            s32 next = (u8)*p;
            c = next;
            if (next != 0)
                goto loop;
        }
    }
    return a;
}
