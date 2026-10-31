/* Begin */
void End__Ct6VIList1ZP10VIFlatFile(void);
void Begin__Ct6VIList1ZP10VIFlatFile(void *arg0) {
    if (*(int *)((char *)arg0 + 4) == 0) {
        End__Ct6VIList1ZP10VIFlatFile();
    }
}

/* Erase */
void __builtin_delete(void *p);
void *Erase__t6VIList1ZP10VIFlatFilei(void *arg0, void *arg1) {
    void *temp16 = *(void **)((char *)arg1 + 4);
    if (temp16 != 0) {
        *(void **)((char *)temp16 + 8) = *(void **)((char *)arg1 + 8);
    } else {
        *(void **)((char *)arg0 + 8) = *(void **)((char *)arg1 + 8);
    }
    void *temp3 = *(void **)((char *)arg1 + 8);
    void *temp2 = *(void **)((char *)arg1 + 4);
    if (temp3 != 0) {
        *(void **)((char *)temp3 + 4) = temp2;
    } else {
        *(void **)((char *)arg0 + 4) = temp2;
    }
    __builtin_delete(arg1);
    *(int *)arg0 = *(int *)arg0 - 1;
    return temp16 != 0 ? temp16 : (void *)0x7FFFFFFF;
}

/* Add */
void *__builtin_new(int size);
void *Add__t6VIList1ZP10VIFlatFileRCP10VIFlatFile(void *arg0, int *arg1) {
    int *var4 = (int *)__builtin_new(0xC);
    if (var4 != 0) {
        *var4 = *arg1;
    } else {
        var4 = 0;
    }
    int *var2 = (int *)-1;
    if (var4 != 0) {
        var4[1] = 0;
        var4[2] = *(int *)((char *)arg0 + 8);
        int *t2 = *(int **)((char *)arg0 + 8);
        if (t2 != 0) {
            t2[1] = (int)var4;
        }
        *(int **)((char *)arg0 + 8) = var4;
        if (*(int **)((char *)arg0 + 4) == 0) {
            *(int **)((char *)arg0 + 4) = var4;
        }
        var2 = *(int **)((char *)arg0 + 8);
        *(int *)arg0 = *(int *)arg0 + 1;
    }
    return var2;
}

/* __tf */
extern char D_011C2608[];
extern char D_011C2618[];
int D_012278B0[4];
int D_01228968[4];
void __rtti_user(int *a, char *b);
void __rtti_si(int *a, char *b, int *c);
void *__tf19VIFlatFileDirectory(void) {
    if (D_012278B0[0] == 0) {
        if (D_01228968[0] == 0) {
            __rtti_user(D_01228968, D_011C2608);
        }
        __rtti_si(D_012278B0, D_011C2618, D_01228968);
    }
    return D_012278B0;
}
