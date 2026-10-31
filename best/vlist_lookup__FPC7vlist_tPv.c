s32 get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(s32, void *, void *, u32);

void unpack__Q212RealmService15ResTouchSessionRQ34Base10ByteStream12ReadIterator(s16 *arg0, u8 *arg1) {
    get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(*(s32 *)(arg1 + 4), arg0, arg1, 2);
    *(s16 *)arg0 = *(s16 *)arg0;
    *(s32 *)arg1 = *(s32 *)arg1 + 2;
    get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(*(s32 *)(arg1 + 4), arg0 + 4, arg1, 4);
    *(s32 *)arg1 = *(s32 *)arg1 + 4;
    get__CQ24Base10ByteStreamPvRQ34Base10ByteStream12ReadIteratorUl(*(s32 *)(arg1 + 4), arg0 + 6, arg1, 4);
    *(s32 *)arg1 = *(s32 *)arg1 + 4;
}

s32 vlist_get_next__FP7vlist_tPv(void *arg0, s32 arg1) {
    s32 o = *(s32 *)((u8 *)arg0 + 0xC);
    s32 v = *(s32 *)((u8 *)arg1 + o);
    return v == 0 ? 0 : v - o;
}

s32 vlist_lookup__FPC7vlist_tPv(void *arg0, s32 arg1) {
    u8 *p = *(u8 **)arg0;
    while (p != 0) {
        s32 r = (*(s32 (**)(s32, u8 *))((u8 *)arg0 + 0x10))(arg1, p + *(s32 *)((u8 *)arg0 + 0x14));
        if (r < 0) {
            p = 0;
            break;
        }
        if (r == 0)
            break;
        p = *(u8 **)p;
    }
    if (p == 0)
        return 0;
    return (s32)p - *(s32 *)((u8 *)arg0 + 0xC);
}

s32 vlist_contains__FP7vlist_tPv(void *arg0, s32 arg1) {
    u8 *p = *(u8 **)arg0;
    u8 *t = (u8 *)arg1 + *(s32 *)((u8 *)arg0 + 0xC);
    while (p != 0) {
        if (p == t)
            return 1;
        p = *(u8 **)p;
    }
    return 0;
}
