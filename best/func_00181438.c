typedef struct N { struct N *next; } N;
typedef struct E { N *head; N *tail; s32 start; s32 end; } E;
extern char D_00700080[];
extern char D_00780080[];

void func_00181438(E *t) {
    s32 i, i4, j;
    for (i = 0, i4 = 0; i < 4; i++, i4 += 4) {
        E *e = &t[i4];
        for (j = 3; j >= 0; j--, e++) {
            N *first = e->head;
            if (first) {
                N *node = first;
                N *tail = e->tail;
                s32 k = e->start;
                s32 end = e->end;
                char *base = D_00700080 + (((char *)node - D_00780080) << 10);
                while (!(node == tail && k == end)) {
                    u16 *p = (u16 *)(base + k * 16);
                    s32 v = p[3] - 0x8000;
                    k++;
                    p[3] = v;
                    if ((k & 0x1F) == 0x1F) {
                        if (k == 0xFF) {
                            if (node == tail) break;
                            node = node->next;
                            k = 1;
                            base = D_00700080 + (((char *)node - D_00780080) << 10);
                        } else {
                            k += 2;
                        }
                    }
                }
            }
        }
    }
}
