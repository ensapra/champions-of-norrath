/* identical to __Q24Base14AutoByteStream (matched), with its names changed by decompdecomp */
typedef struct {
    void *f0;
    s32 f4;
    s32 f8;
    s32 *fC;
} Base_AB;

extern u8 D_011F2B48[16];

void __Q212RealmService12GameStatsImp(Base_AB *self) {
    volatile s32 pad[4];
    (void)pad;
    self->f0 = 0;
    self->fC = (s32 *)D_011F2B48;
    self->f4 = 0;
    self->f8 = 0;
}
