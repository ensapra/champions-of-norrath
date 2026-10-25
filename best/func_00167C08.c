extern s32 D_006E1C60[];
s8 D_00483829;
s8 D_00484060[2];
s32 D_00484074;
s8 D_00484078[4];
u8 D_00486930;
u8 D_00486931;
s32 func_001353A8(s32);
void func_002D4198(s32, s32);

void func_00167C08(void)
{
    s32 i;
    s32 t;
    s8 *p1, *p2, *p3;
    s32 *pa = D_006E1C60;
    s32 *pb = D_006E1C60 + 1;
    f32 *pc = (f32 *)(D_006E1C60 + 2);
    u8 *cur = &D_00486930;
    t = D_00484074 - 1;
    D_00484074 = t < 0 ? 0 : t;
    p1 = p2 = p3 = D_00484078;
    for (i = 0; i < 4; i++, p1++, p2++, p3++) {
        if (D_00483829 == 0 || func_001353A8(i) != 0) {
            s32 k = D_00484078[i] * 6;
            s32 n, m;
            s8 id;
            u8 *src;
            if (pa[k] != 0) {
                *cur = 1;
                pa[k]--;
            } else {
                *cur = 0;
            }
            k = *p2 * 6;
            if (pc[k] > 0.0f) {
                f32 f = pc[k] - pc[k + 1];
                pc[k] = f;
                if (f < 0.0f)
                    pc[k] = 0.0f;
            }
            k = *p1 * 6;
            if (pb[k] != 0) {
                pb[k]--;
                D_00486931 = (s32)(pc[k] * 255.0f);
            } else {
                D_00486931 = 0;
            }
            id = *p3;
            k = id * 6;
            if (*cur == pa[k + 4]) {
                if (D_00486931 == pb[k + 4])
                    continue;
                pa[k + 4] = *cur;
                src = &D_00486931;
            } else {
                src = cur + 1;
                pa[k + 4] = *cur;
            }
            pb[k + 4] = *src;
            if (i >= D_00484060[0]) {
                n = 1;
                m = id - D_00484060[0];
            } else {
                n = 0;
                m = id;
            }
            if (D_00483829 != 0) {
                n = 0;
                m = 0;
            }
            if (m < D_00484060[n])
                func_002D4198(n, m);
        }
    }
}
