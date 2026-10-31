void DrawPrimBuffer__8VIRasteriiUi(void *, int, int, unsigned int);
void Raster__13VIFloraSpriteR8VICameraR7VISceneR8VIRasterUi(void *a, void *cam, void *scene, void *raster, unsigned int ui) {
    DrawPrimBuffer__8VIRasteriiUi(raster, *(int *)((char *)a + 0x40), *(int *)((char *)a + 0x44), ui);
}
