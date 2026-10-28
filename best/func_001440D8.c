typedef struct{s32 size,count;u8*start,*head;}FreeList;
extern FreeList D_00333D58[4];
extern u8 D_00519440[];
void func_003021B0(void*,s32,s32);
void func_001440D8(void){
    u8 *p, *q, *next;
    s32 i, j, k;
    FreeList *e;
    func_003021B0(D_00519440, 0, 0xE7700);
    p = D_00519440;
    e = D_00333D58;
    i = 0;
    for (k = 2; k >= 0; k--) {
        q = p;
        e->start = p;
        e->head = q;
        p += e->size * e->count;
        if (e->count - 1 > 0) {
            j = D_00333D58[i].count - 1;
            do {
                next = q + D_00333D58[i].size;
                *(u8 **)q = next;
                q = next;
            } while (--j);
        }
        *(u8 **)q = 0;
        i++;
        e++;
    }
    D_00333D58[3].start = p;
    D_00333D58[3].head = D_00519440;
}
