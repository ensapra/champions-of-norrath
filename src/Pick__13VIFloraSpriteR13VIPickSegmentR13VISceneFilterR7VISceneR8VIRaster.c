void PickPrimBuffer__8VIRasterR13VIPickSegmentii(void *, void *, int, int);
void Pick__13VIFloraSpriteR13VIPickSegmentR13VISceneFilterR7VISceneR8VIRaster(void *a, void *pickseg, void *filter, void *scene, void *raster) {
    PickPrimBuffer__8VIRasterR13VIPickSegmentii(raster, pickseg, *(int *)((char *)a + 0x40), *(int *)((char *)a + 0x44));
}
