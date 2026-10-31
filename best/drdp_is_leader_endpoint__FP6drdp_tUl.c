extern void vtree_insert__FP7vtree_tPv(void*, void*);
void drdp_connection_insert__FP6drdp_tP12connection_t(void *drdp, void *conn) {
    vtree_insert__FP7vtree_tPv((char*)drdp + 0xBC, conn);
}

extern void *connection_get_endpoint__FP12connection_t(void*);
extern void *endpoint_get_drdp__FP10endpoint_t(void*);
extern void vtree_remove__FP7vtree_tPv(void*, void*);
void drdp_connection_remove__FP12connection_t(void *conn) {
    void *ep = connection_get_endpoint__FP12connection_t(conn);
    void *drdp = endpoint_get_drdp__FP10endpoint_t(ep);
    vtree_remove__FP7vtree_tPv((char*)drdp + 0xBC, conn);
}

extern s32 memcmp(void*, void*, s32);
extern s32 endpoint_get_id__FPC10endpoint_t(void*);
extern void *vtree_lookup__FPC7vtree_tPCv(void*, void*);
extern char D_011CAE50[];
s32 drdp_has_endpoint__FPC6drdp_tPC10endpoint_t(void *drdp, void *endpoint) {
    s32 id = endpoint_get_id__FPC10endpoint_t(endpoint);
    if (memcmp(drdp, D_011CAE50, 4) == 0) {
        void *node = vtree_lookup__FPC7vtree_tPCv((char*)drdp + 0x14, &id);
        return (endpoint == node) ? 1 : 0;
    }
    return 0;
}

s32 drdp_is_leader_endpoint__FP6drdp_tUl(void *drdp, u64 id) {
    void *node = vtree_lookup__FPC7vtree_tPCv((char*)drdp + 0x98, &id);
    if (node == 0) return 0;
    return (*(s32*)((char*)node + 0x18)) != 0;
}
