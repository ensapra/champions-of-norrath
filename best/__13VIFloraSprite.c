void __8VISprite(void *);
extern int D_011F3D98;

void __13VIFloraSprite(void *a) {
    __8VISprite(a);
    *(int *)((char *)a + 0x34) = 0xD;
    *(int *)((char *)a + 0x44) = -1;
    *(int *)((char *)a + 0x3C) = (int)&D_011F3D98;
    *(int *)((char *)a + 0x40) = -1;
}
