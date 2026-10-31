s32 put__Q24Base10ByteStreamPCvUi(s32, void *, u32);
void put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(s32, void *);

void pack__Q212RealmService12ReqAddFriendRQ24Base10ByteStream(void *arg0, s32 arg1) {
    s16 sp0;
    s32 sp4;

    sp0 = *(s16 *)arg0;
    put__Q24Base10ByteStreamPCvUi(arg1, &sp0, 2);
    sp4 = *(s32 *)((u8 *)arg0 + 8);
    put__Q24Base10ByteStreamPCvUi(arg1, &sp4, 4);
    sp4 = *(s32 *)((u8 *)arg0 + 0x18);
    put__Q24Base10ByteStreamPCvUi(arg1, &sp4, 4);
    put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg1, (u8 *)arg0 + 0x1C);
    put__4BaseRQ24Base10ByteStreamRCt12basic_string3ZUsZt18string_char_traits1ZUsZt24__default_alloc_template2b0i0(arg1, (u8 *)arg0 + 0x20);
}
