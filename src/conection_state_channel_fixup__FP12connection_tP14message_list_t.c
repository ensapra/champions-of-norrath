s32 message_get_type__FPC9message_t(void *);
s32 vlist_peek_head__FP7vlist_t(void *);
s32 vlist_get_next__FP7vlist_tPv(void *, void *);

void conection_state_channel_fixup__FP12connection_tP14message_list_t(void *conn, void *mlist) {
    void *m = vlist_peek_head__FP7vlist_t(mlist);
    if (m == 0) return;
    do {
        unsigned int type = message_get_type__FPC9message_t(m);
        if (type < 0xF8) {
            void *base = *(void **)((char *)conn + 0x1180);
            void *dst = (char *)base + type * 0x3C;
            *(void **)dst = m;
        }
        m = vlist_get_next__FP7vlist_tPv(mlist, m);
    } while (m != 0);
}
