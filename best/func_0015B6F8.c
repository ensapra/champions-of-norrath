void func_0015B6F8(s32 n, f32 *a, f32 *b, f32 *out) {
    s32 i, j;
    for (i=0;i<n;i++) {
        out[i]=a[i]+b[i];
        for (j=0;j<i;j++) out[i] += a[j]*b[j];
    }
}
