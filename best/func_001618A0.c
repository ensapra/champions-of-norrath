typedef struct {char pad[0x4dc];u16 x;u16 pad2;u16 y;} Obj;
typedef struct {char pad[16];s16 x,y;char tail[12];} Vertex;
void func_001618A0(Obj *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, Vertex *arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    Vertex *spC;
    Vertex *temp_10;
    Vertex *temp_10_2;
    Vertex *temp_10_3;
    Vertex *temp_10_4;
    Vertex *temp_10_5;
    Vertex *temp_10_6;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;
    s32 temp_30;
    s32 temp_3;
    s32 var_11;
    s32 var_12;
    s32 var_13;
    s32 var_14;
    s32 var_15;
    s32 var_16;
    s32 var_17;
    s32 var_18;
    s32 var_22;
    s32 var_23;
    s32 var_25;
    s32 var_3;
    s32 var_4;
    s32 var_5;
    s32 var_6;
    s32 var_8;
    u16 temp_19;
    u16 temp_21;

    sp8 = arg5 < 0;
    temp_2 = arg5 + 3;
    temp_30 = arg5 >> 0x1F;
    var_11 = arg2;
    var_17 = var_11;
    temp_3 = arg5 / 4;
    var_16 = arg3 - temp_3;
    sp4 = temp_2;
    sp0 = arg4;
    var_14 = arg3;
    var_15 = var_14 + (arg5 - temp_3);
    temp_21 = arg0->y;
    var_23 = var_14 + (arg5 / 2);
    spC = arg6 + 1;
    var_3 = var_11;
    var_6 = arg2 + arg4;
    var_8 = var_14;
    temp_19 = arg0->x;
    var_22 = var_6;
    var_13 = var_6;
    var_5 = var_6;
    var_25 = var_11;
    var_4 = var_16;
    var_18 = var_23;
    var_12 = var_15;
    if (arg1 != 1) {
        if (arg1 < 2) {
            temp_2_2 = arg5 / 4;
            var_6 = arg2 - sp0;
            var_23 = var_14 - (arg5 / 2);
            var_15 = var_14 - (arg5 - temp_2_2);
            var_11 = arg2;
            var_16 = arg3 + temp_2_2;
            var_22 = var_6;
            var_13 = var_6;
            var_5 = var_6;
            var_3 = var_11;
            var_4 = var_16;
            var_18 = var_23;
            var_12 = var_15;
            if (arg1 != 0) {
                goto block_6;
            }
        } else {
            if (arg1 == 2) {
                var_13 = arg2;
                temp_2_3 = arg5 / 4;
                var_15 = arg3 + sp0;
                var_12 = arg3;
                var_22 = var_13 - (arg5 / 2);
                var_6 = var_13 - (arg5 - temp_2_3);
                var_4 = var_12;
                var_5 = arg2 + temp_2_3;
            } else {
block_6:
                var_13 = arg2;
                temp_2_4 = arg5 / 4;
                var_15 = arg3 - sp0;
                var_12 = arg3;
                var_22 = var_13 + (arg5 / 2);
                var_6 = var_13 + (arg5 - temp_2_4);
                var_4 = var_12;
                var_5 = arg2 - temp_2_4;
            }
            var_23 = var_15;
            var_14 = var_15;
            var_16 = var_15;
            var_18 = var_12;
            var_8 = var_12;
            var_3 = var_5;
            var_25 = var_13;
            var_17 = var_22;
            var_11 = var_6;
        }
    }
    arg6->y = temp_21 + var_4;
    arg6->x = temp_19 + var_3;
    spC->x = temp_19 + var_5;
    spC->y = temp_21 + var_16;
    temp_10 = spC + 1;
    temp_10->y = temp_21 + var_8;
    temp_10->x = temp_19 + var_25;
    temp_10_2 = temp_10 + 1;
    temp_10_2->x = temp_19 + var_13;
    temp_10_2->y = temp_21 + var_14;
    temp_10_3 = temp_10_2 + 1;
    temp_10_3->x = temp_19 + var_17;
    temp_10_3->y = temp_21 + var_18;
    temp_10_4 = temp_10_3 + 1;
    temp_10_4->x = temp_19 + var_22;
    temp_10_4->y = temp_21 + var_23;
    temp_10_5 = temp_10_4 + 1;
    temp_10_5->x = temp_19 + var_11;
    temp_10_5->y = temp_21 + var_12;
    temp_10_6 = temp_10_5 + 1;
    temp_10_6->x = temp_19 + var_6;
    temp_10_6->y = temp_21 + var_15;
}
