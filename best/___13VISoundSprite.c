/* identical to ___13VIFloraSprite (matched), with its names changed by decompdecomp */
void ___8VISprite(void *, int);
void __builtin_delete(void *);
extern int D_011F3D98;

void ___13VISoundSprite(void *a, int flag) {
    *(int *)((char *)a + 0x3C) = (int)&D_011F3D98;
    ___8VISprite(a, 0);
    if (flag & 1) {
        __builtin_delete(a);
    }
}
