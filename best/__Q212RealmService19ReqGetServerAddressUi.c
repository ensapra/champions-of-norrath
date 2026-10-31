extern void put__Q24Base10ByteStreamPCvUi(void *, void *, s32);
extern void put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(void *, void *);
extern void __Q210GenericAPI14GenericRequests(s32);
extern void *clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(void *, s32, void *);

extern char D_01215EB0[];
extern char D_01215E50[];
extern char D_01215F70[];

void pack__Q212RealmService13ReqCancelGameRQ24Base10ByteStream(void *arg0, void *arg1) {
    s16 v0;
    s32 v4;
    s32 v4b;
    v0 = *(s16 *)arg0;
    put__Q24Base10ByteStreamPCvUi(arg1, &v0, 2);
    v4 = *(s32 *)((char *)arg0 + 8);
    put__Q24Base10ByteStreamPCvUi(arg1, &v4, 4);
    v4b = *(s32 *)((char *)arg0 + 0x18);
    put__Q24Base10ByteStreamPCvUi(arg1, &v4b, 4);
    put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg1, (char *)arg0 + 0x1C);
}

void __Q212RealmService13ReqCancelGameUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(void *arg0, s32 arg1, s32 *arg2) {
    s32 v5;
    void *temp6;
    __Q210GenericAPI14GenericRequests(5);
    v5 = *arg2;
    *(s32 *)((char *)arg0 + 0x18) = arg1;
    temp6 = (char *)v5 - 0x10;
    *(void **)((char *)arg0 + 4) = (void *)D_01215EB0;
    if (*(s32 *)((char *)temp6 + 0xC) != 0) {
        v5 = (s32)clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp6, v5, temp6);
    } else {
        *(s32 *)((char *)temp6 + 8) = *(s32 *)((char *)temp6 + 8) + 1;
    }
    *(s32 *)((char *)arg0 + 0x1C) = v5;
}

void __Q212RealmService15ReqCreateAvatarUiRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(void *arg0, s32 arg1, s32 *arg2) {
    s32 v5;
    void *temp6;
    __Q210GenericAPI14GenericRequests(7);
    v5 = *arg2;
    *(s32 *)((char *)arg0 + 0x18) = arg1;
    temp6 = (char *)v5 - 0x10;
    *(void **)((char *)arg0 + 4) = (void *)D_01215E50;
    if (*(s32 *)((char *)temp6 + 0xC) != 0) {
        v5 = (s32)clone__Q2t12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0_3Rep(temp6, v5, temp6);
    } else {
        *(s32 *)((char *)temp6 + 8) = *(s32 *)((char *)temp6 + 8) + 1;
    }
    *(s32 *)((char *)arg0 + 0x1C) = v5;
}

void __Q212RealmService19ReqGetServerAddressUi(void *arg0, s32 arg1) {
    __Q210GenericAPI14GenericRequests(0x43);
    *(s32 *)((char *)arg0 + 0x18) = arg1;
    *(void **)((char *)arg0 + 4) = (void *)D_01215F70;
}
